#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay.h>

// Teensy 2.0: LED is active high
#define LED_ON		(PORTD |= (1<<6)) /* set bit 6 in PORTD to 1 */
#define LED_OFF		(PORTD &= ~(1<<6))
#define LED_CONFIG	(DDRD |= (1<<6))

// Teensy defaults to only 2 MHz, for compatibility with 
// lower voltage power supplies. To run at 16 MHz, you MUST set the speed. 
// This setting affects the CPU and ALL periperals, except USB.
#define CPU_PRESCALE(n)	(CLKPR = 0x80, CLKPR = (n))
#define CPU_16MHz       0x00 // see pjrc.com for frequency table

int main(void)
{
  CPU_PRESCALE( CPU_16MHz );
  LED_CONFIG;

	while (1) {
    LED_ON;
		_delay_ms(1000);
    LED_OFF;
		_delay_ms(1000);
	}
}
