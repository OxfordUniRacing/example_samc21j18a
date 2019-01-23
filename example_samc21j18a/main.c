#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	struct io_descriptor *uart;
	usart_sync_get_io_descriptor(&UART_EDBG, &uart);
	usart_sync_enable(&UART_EDBG);

	io_write(uart, (uint8_t *)"Hello World!", 12);

	while (1) {
		for (int i = 0; i < 1000000; i++);
		gpio_toggle_pin_level(LED0);
	}
}
