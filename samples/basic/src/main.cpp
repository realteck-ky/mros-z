#include <mros-z/mros-z.hpp>
#include <zephyr/kernel.h>

int main(void) {
  printk("Build check of the mROS-Z application.\n");
  mros_z::init();
  return 0;
}


