#include "pico/stdlib.h"

int main() {
  const uint buttonOne = 18;
  const uint ledOne = 0;

  gpio_init(buttonOne);
  gpio_init(ledOne);

  gpio_set_dir(buttonOne, GPIO_IN);
  gpio_set_dir(ledOne, GPIO_OUT);

  while(1) {
    if (gpio_get(buttonOne) == 0) {
      gpio_put(ledOne, 1);
    } else {
      gpio_put(ledOne, 0);
    }
  }
}