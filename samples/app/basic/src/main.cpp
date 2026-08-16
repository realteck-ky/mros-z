#include <mros-z/mros-z.hpp>
#include <zephyr/kernel.h>

int main(void) {
  printk("This is mROS Z sample app.\n");
  mros_z::init();
  return 0;
}
