#ifndef _SERIAL_H
#define _SERIAL_H

#include "uart.h"
#include "queue.h"

#define SERIAL_NUM_TRIES				10
#define SERIAL_STRING_TERMINATION_CHAR	'\0'
#define SERIAL_HOOK_BIT					5

int serial_subscribe_int(unsigned *hook_id, unsigned char port_number, unsigned char trigger_level);

int serial_set(unsigned char port_number, unsigned long bits, unsigned long stop, long parity, unsigned long rate);

int serial_interrupt_transmit_string(unsigned char port_number, unsigned char *string);

int serial_interrupt_receive_string(unsigned char port_number, unsigned char **string);

int serial_get_num_queued_strings(unsigned char port_number);

int serial_int_handler(unsigned char port_number);

int serial_polled_transmit_string(unsigned char port_number, unsigned char *string);

int serial_polled_receive_string(unsigned char port_number, unsigned char **string);

int serial_unsubscribe_int(unsigned hook_id, unsigned char port_number);

#endif
