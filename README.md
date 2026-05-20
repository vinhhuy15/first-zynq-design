# First Zynq Design (HW/SW Co-design)

This repository contains a basic Hardware/Software (HW/SW) co-design project for a Zynq SoC platform (such as ZedBoard or PYNQ), focusing on configuring an AXI GPIO controller to blink 8 onboard LEDs.

## Project Structure

* **`first_zynq_design/`**: The AMD/Xilinx Vivado hardware design project folder. It includes the IP block design, system constraints, Zynq-7000 Processing System (PS) configuration, and the AXI GPIO peripheral.
* **`first_zynq_design/first_zynq_system_wrapper.xsa`**: The exported Xilinx Shell Archive (`.xsa`) file containing hardware platform specifications used to initialize the software development environment.
* **`LED_test/`**: The AMD/Xilinx Vitis application component workspace, which handles the software application code, hardware platform wrapper, and build outputs.
* **`LED_test_tut_1C.c`**: A standalone C source file containing the application logic to initialize the GPIO driver, set pin directions to output, and run an infinite loop to blink the 8 LEDs with a 500ms delay.

## Getting Started

### 1. Hardware Development (Vivado)
* Launch AMD/Xilinx Vivado.
* Open the hardware project: `first_zynq_design/first_zynq_design.xpr`.
* Review the Block Design to see how the Zynq PS and AXI GPIO are interconnected.
* If modified, regenerate the bitstream and export the hardware platform (`.xsa`).

### 2. Software Development (Vitis)
* Launch AMD/Xilinx Vitis.
* Import or refer to the `LED_test` project component.
* Ensure the project is linked with the exported `.xsa` platform.
* Compile/Build the C application and load/run it on the target board to watch the 8 LEDs blink.
