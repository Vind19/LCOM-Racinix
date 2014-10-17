#ifndef _I8042_H
#define _I8042_H

#define I8042_TIMEOUT_US	20000

#define BIT(n) (0x01<<(n))

#define I8042_IRQ					1		// Keyboard IRQ Line

// KBC registers
#define STAT_REG					0x64
#define I8042_IN_BUF				0x64
#define I8042_OUT_BUF				0x60

// C@KBD responses
#define I8042_ACK					0xFA
#define I8042_RESEND				0xFE	// The latest byte should be written again
#define I8042_ERROR					0xFC	// The entire input/output sequence should be restarted

// Keyboard Commands
#define I8042_RESET_KBD				0xFF
#define I8042_DEFAULT_ENABLE_KBD	0xF6
#define	I8042_DISABLE_KBD			0xF5
#define I8042_CLEAR_BUF_ENABLE_KBD	0xF4
#define I8042_CHANGE_KBD_REPETITION	0xF3
#define I8042_SWITCH_KBD_LEDS		0xED

// KBC Status Register
#define I8042_STATUS_PARITY_BIT		7
#define I8042_STATUS_TIMEOUT_BIT	6
#define I8042_STATUS_AUX_BIT		5
#define I8042_STATUS_INH_BIT		4
#define I8042_STATUS_A2_BIT			3		// Used to distinguish KBC commands from KBD commands
#define I8042_STATUS_SYS_BIT		2
#define I8042_STATUS_IBF_BIT		1
#define I8042_STATUS_OBF_BIT		0

// KBC Commands
#define I8042_READ_COMMAND_BYTE		0x20
#define I8042_WRITE_COMMAND_BYTE	0x60
#define I8042_CHECK_KBC				0xAA
#define I8042_CHECK_KEYBOARD_ITF	0xAB
#define I8042_DISABLE_KBD_ITF		0xAD
#define I8042_ENABLE_KBD_ITF		0xAE

// KBC Self-test result
#define I8042_CHECK_KBC_OK			0x55
#define I8042_CHECK_KBC_ERROR		0xFC

// KBC Command Byte
#define I8042_CMD_BYTE_TRANSLATE	6
#define I8042_CMD_BYTE_DIS_MOUSE	5
#define I8042_CMD_BYTE_DIS_KEYBOARD	4
#define I8042_CMD_BYTE_IGNORE_LOCK	3
#define I8042_CMD_BYTE_SYSTEM_FLAG	2
#define I8042_CMD_BYTE_MOUSE_INT	1
#define I8042_CMD_BYTE_KEYBOARD_INT	0

#endif
