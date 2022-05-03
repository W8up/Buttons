#include "pico/stdlib.h"

int main() {
  //const uint buttonOne = ?;
  const uint ledOne = 0;

  //gpio_init(buttonOne);
  gpio_init(ledOne);

  //gpio_set_dir(buttonOne, ?);
  gpio_set_dir(ledOne, GPIO_OUT);

  //Write your own code to turn a LED on when button is pressed
}