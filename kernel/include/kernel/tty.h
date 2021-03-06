#ifndef _KERNEL_TTY_H
#define _KERNEL_TTY_H

#include <stddef.h>

void terminal_init(void);
void terminal_clear(void);
void terminal_putc(unsigned char c);
void terminal_write(const char *data, size_t size);
void terminal_puts(const char *str);

#endif