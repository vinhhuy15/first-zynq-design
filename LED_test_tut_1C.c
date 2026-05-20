/******************************************************************************
 * Tiêu đề: LED_test_tut_1C.c
 * Mô tả  : Chương trình C cơ bản điều khiển AXI GPIO (Lab 1)
 * Làm nhấp nháy 8 đèn LED trên board ZedBoard / PynQ
 ******************************************************************************/

#include "xparameters.h" // Thư viện chứa các định nghĩa phần cứng từ file .xsa
#include "xgpio.h"       // Thư viện driver điều khiển khối AXI GPIO
#include "sleep.h"       // Thư viện hỗ trợ hàm tạo độ trễ (delay)
#include "xil_printf.h"  // Thư viện in ra màn hình console

/* * Tùy thuộc vào phiên bản Vivado, tên Device ID của GPIO có thể khác nhau.
 * Đoạn macro dưới đây giúp code tự động tương thích.
 */
#define GPIO_DEVICE_ID 0

#define LED_CHANNEL 1 // Kênh 1 của GPIO được nối với LED

XGpio Gpio; // Khai báo biến cấu trúc (instance) cho GPIO

int main()
{
    int Status;
    int led_state = 0x00; // Trạng thái ban đầu: 0x00 (00000000 - tắt toàn bộ)

    xil_printf("Khoi dong chuong trinh nhap nhay LED (HW/SW Codesign)...\r\n");

    // 1. Khởi tạo driver cho khối AXI GPIO
    Status = XGpio_Initialize(&Gpio, GPIO_DEVICE_ID);
    if (Status != XST_SUCCESS)
    {
        xil_printf("Loi: Khoi tao GPIO that bai!\r\n");
        return XST_FAILURE;
    }

    // 2. Thiết lập hướng dữ liệu (Direction) cho kênh GPIO
    // Giá trị 0x00 (00000000 trong nhị phân) nghĩa là set toàn bộ 8 chân thành ngõ ra (OUTPUT)
    XGpio_SetDataDirection(&Gpio, LED_CHANNEL, 0x00);

    // 3. Vòng lặp vô tận điều khiển nhấp nháy LED
    while (1)
    {
        // Ghi dữ liệu (trạng thái led) ra phần cứng PL thông qua bus AXI
        XGpio_DiscreteWrite(&Gpio, LED_CHANNEL, led_state);

        // Đảo trạng thái LED (từ 0x00 thành 0xFF và ngược lại)
        led_state = ~led_state;

        // Tạo độ trễ 500ms (500000 micro giây) để mắt người kịp nhìn thấy
        usleep(500000);
    }

    return 0;
}