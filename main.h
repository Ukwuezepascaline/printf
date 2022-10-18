#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct specifier - contains specifiers for printf
 *
 * @width: width of field to print
 * @precision: precision of field to print
 * @length: modifies type length. h/l flags. 0 default, +1 per l, -1 per h
 * @widthflag: tells whether width is set
 * @precisionflag: tells whether precision is set
 * @left: left justify, '-'. 0 for right, 1 for left
 * @sign: force sign, '+'. 0 for no, 1 for yes
 * @space: space pad left side of positive numbers if leading 0s. 0 no 1 yes
 * @zero: zero pad numbers up to width. 0 for no, 1 for yes.
 * @zerox: add leading 0, 0x, or 0X to o, x or X specifiers. 0 no 1 yes
 * @specifier: the data type to print, c, s, d, x, etc.
 */
typedef struct specifier
{
	unsigned int width;
	unsigned int precision;
	int length;
	char widthflag;
	char precisionflag;
	char left;
	char sign;
	char space;
	char zero;
	char zerox;
	char specifier;
} specifier;

/* from printf.c */
int _printf(char *format, ...);

/* from prep_types.c */
char *prep_string(char *str, specifier spec);
char *prep_numeric(char *str, specifier spec);

/* from utility.c */
int _strlen(char *str);
int ifputs(char *s);

/* from itos.c */
char *itos(va_list list);
char *sitos(va_list list);
char *litos(va_list list);
char *ssitos(va_list list);

/* from itobin.c */
char *itobin(va_list list);
char *litobin(va_list list);
char *sitobin(va_list list);
char *ssitobin(va_list list);

/* from utos.c */
char *utos(va_list list);
char *sutos(va_list list);
char *ssutos(va_list list);
char *lutos(va_list list);

/* from itoo.c */
char *itoo(va_list list);
char *litoo(va_list list);
char *sitoo(va_list list);
char *ssitoo(va_list list);

/* from itohex.c */
char *itohex(va_list list);
char *litohex(va_list list);
char *sitohex(va_list list);
char *ssitohex(va_list list);

/* from htoH.c */
char *htoH(va_list list);
char *lhtoH(va_list list);
char *shtoH(va_list list);
char *sshtoH(va_list list);

/* from revstr.c */
char *rev(char *str);
char *rot(char *str);
char *print_hidden(char *str);
char *null(void);

/* from stonil.c */
char *nil(void);

#endif
