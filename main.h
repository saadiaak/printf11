Skip to content
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@saadiaak 
BrightOlawale
/
printf
Public
Fork your own copy of BrightOlawale/printf
Code
Issues
Pull requests
Actions
Projects
Security
Insights
printf/main.h
@BrightOlawale
BrightOlawale case S dealt with
Latest commit 9703f9f on Apr 22, 2022
 History
 2 contributors
@BrightOlawale@cynthiaclaire4
44 lines (39 sloc)  1002 Bytes

#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct symfun - defines a structure for the specifier and functions
 *
 * @symb: The operator
 * @f: The function associated
 */
struct symfun
{
	char *symb;
	int (*f)(va_list);
};
typedef struct symfun symbfunc;

/*Main fuctions*/
int compute(const char *format, symbfunc options[], va_list arg_param);
int _printf(const char *format, ...);
int _writechar(char);
int print_char(va_list);
int print_string(va_list);
int print_number(va_list args_list);
int print_integer(va_list arg_list);
int print_binary(va_list);
int unsigned_integer(va_list);
int print_octal(va_list);
int print_HeX(va_list);
int print_hex(va_list);
int print_np_string(va_list);

/* additional functions */
unsigned int base_len(unsigned int, int);
void _writebase(char *str);
char *rev_string(char *s);
char *_memcpy(char *dest, char *scr, unsigned int n);
int print_unsgined_number(unsigned int);

#endif
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
printf/main.h at master · BrightOlawale/printf
