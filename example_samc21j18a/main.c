#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		for (int i = 0; i < 1000000; i++);
		gpio_toggle_pin_level(LED0);
	}
}
