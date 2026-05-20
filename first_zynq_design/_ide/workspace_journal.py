# 2026-05-20T15:50:52.757374300
import vitis

client = vitis.create_client()
client.set_workspace(path="first_zynq_design")

platform = client.create_platform_component(name = "platform_hw",hw_design = "$COMPONENT_LOCATION/../first_zynq_system_wrapper.xsa",os = "standalone",cpu = "ps7_cortexa9_0",domain_name = "standalone_ps7_cortexa9_0",compiler = "gcc")

