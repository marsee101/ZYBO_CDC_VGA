cd D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_CDC_VGA/system/
if { [ catch { xload xmp system.xmp } result ] } {
  exit 10
}
xset hdl vhdl
run stubgen
exit 0
