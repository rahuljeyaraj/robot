#include <something.h>

void main (){
  lcd_int();
  sensor_calib();
  lcd_print("sensor calib done");
  while(1){
    val = sensor_read();
    if(val == xy)
      left();
    else if ()
      right();
    else
      fwd();
  }
}
