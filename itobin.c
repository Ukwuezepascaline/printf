#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * itobin - converts to binary
 * @list: list to convert
 * Return: a string
 */
char *itobin(va_list list)
{
	unsigned int uiArg, uiArgTest;
	int counter, i;
	char *result;

	uiArg = va_arg(list, unsigned int);
	uiArgTest = uiArg;
	counter = 0;
	while (uiArgTest != 0)
	{
		uiArgTest /= 2;
		counter++;
	}
	result = malloc(sizeof(char) * (counter + 1));
	if (result == NULL)
		return (NULL);
	uiArgTest = uiArg;
	for (i = counter - 1; i >= 0; i--)
	{
		result[i] = ((uiArgTest % 2) + '0');
		uiArgTest /= 2;
	}
	result[counter] = '\0';
	return (result);

}
/**
 * litobin - converts to binary (long)
 * @list: list to convert
 * Return: a string
 */
char *litobin(va_list list)
{
	unsigned long int uiArg, uiArgTest;
	int counter, i;
	char *result;

	uiArg = va_arg(list, unsigned long int);
	uiArgTest = uiArg;
	counter = 0;
	while (uiArgTest != 0)
	{
		uiArgTest /= 2;
		counter++;
	}
	result = malloc(sizeof(char) * (counter + 1));
	if (result == NULL)
		return (NULL);
	uiArgTest = uiArg;
	for (i = counter - 1; i >= 0; i--)
	{
		result[i] = ((uiArgTest % 2) + '0');
		uiArgTest /= 2;
	}
	result[counter] = '\0';
	return (result);

}

/**
 * sitobin - converts to binary (short)
 * @list: list to convert
 * Return: a string
 */
char *sitobin(va_list list)
{
	unsigned short int uiArg, uiArgTest;
	int counter, i;
	char *result;

	uiArg = (short) va_arg(list, unsigned int);
	uiArgTest = uiArg;
	counter = 0;
	while (uiArgTest != 0)
	{
		uiArgTest /= 2;
		counter++;
	}
	result = malloc(sizeof(char) * (counter + 1));
	if (result == NULL)
		return (NULL);
	uiArgTest = uiArg;
	for (i = counter - 1; i >= 0; i--)
	{
		result[i] = ((uiArgTest % 2) + '0');
		uiArgTest /= 2;
	}
	result[counter] = '\0';
	return (result);

}

/**
 * ssitobin - converts to binary (short short)
 * @list: list to convert
 * Return: a string
 */
char *ssitobin(va_list list)
{
	unsigned char uiArg, uiArgTest;
	int counter, i;
	char *result;

	uiArg = (unsigned char) va_arg(list, unsigned int);
	uiArgTest = uiArg;
	counter = 0;
	while (uiArgTest != 0)
	{
		uiArgTest /= 2;
		counter++;
	}
	result = malloc(sizeof(char) * (counter + 1));
	if (result == NULL)
		return (NULL);
	uiArgTest = uiArg;
	for (i = counter - 1; i >= 0; i--)
	{
		result[i] = ((uiArgTest % 2) + '0');
		uiArgTest /= 2;
	}
	result[counter] = '\0';
	return (result);

}
