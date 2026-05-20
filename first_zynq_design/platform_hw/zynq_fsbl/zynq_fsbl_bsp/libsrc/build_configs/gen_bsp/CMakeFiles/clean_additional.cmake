# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "E:\\Vivado\\PROJECT\\first_zynq_design\\platform_hw\\zynq_fsbl\\zynq_fsbl_bsp\\include\\diskio.h"
  "E:\\Vivado\\PROJECT\\first_zynq_design\\platform_hw\\zynq_fsbl\\zynq_fsbl_bsp\\include\\ff.h"
  "E:\\Vivado\\PROJECT\\first_zynq_design\\platform_hw\\zynq_fsbl\\zynq_fsbl_bsp\\include\\ffconf.h"
  "E:\\Vivado\\PROJECT\\first_zynq_design\\platform_hw\\zynq_fsbl\\zynq_fsbl_bsp\\include\\sleep.h"
  "E:\\Vivado\\PROJECT\\first_zynq_design\\platform_hw\\zynq_fsbl\\zynq_fsbl_bsp\\include\\xilffs.h"
  "E:\\Vivado\\PROJECT\\first_zynq_design\\platform_hw\\zynq_fsbl\\zynq_fsbl_bsp\\include\\xilffs_config.h"
  "E:\\Vivado\\PROJECT\\first_zynq_design\\platform_hw\\zynq_fsbl\\zynq_fsbl_bsp\\include\\xilrsa.h"
  "E:\\Vivado\\PROJECT\\first_zynq_design\\platform_hw\\zynq_fsbl\\zynq_fsbl_bsp\\include\\xiltimer.h"
  "E:\\Vivado\\PROJECT\\first_zynq_design\\platform_hw\\zynq_fsbl\\zynq_fsbl_bsp\\include\\xtimer_config.h"
  "E:\\Vivado\\PROJECT\\first_zynq_design\\platform_hw\\zynq_fsbl\\zynq_fsbl_bsp\\lib\\libxilffs.a"
  "E:\\Vivado\\PROJECT\\first_zynq_design\\platform_hw\\zynq_fsbl\\zynq_fsbl_bsp\\lib\\libxilrsa.a"
  "E:\\Vivado\\PROJECT\\first_zynq_design\\platform_hw\\zynq_fsbl\\zynq_fsbl_bsp\\lib\\libxiltimer.a"
  )
endif()
