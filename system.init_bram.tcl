cd D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_CDC_VGA/system
if { [ catch { xload xmp system.xmp } result ] } {
  exit 10
}

if { [catch {run init_bram} result] } {
  exit -1
}

exit 0
