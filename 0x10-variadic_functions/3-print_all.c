#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Prn_F_Once(Exact_Format_Char, Exact_Data_Type)	\
	printf("%"#Exact_Format_Char,	\
	va_arg(*ap_P, Exact_Data_Type));
#define Prn_F(Exact_Format_Char, Exact_Data_Type)	\
	printf(", %"#Exact_Format_Char,	\
	va_arg(*ap_P, Exact_Data_Type));


/**
 * Print_Data_Type - some struct
 * @Format_Char: some arg
 * @Data_Type: some arg
 */
typedef struct Print_Data_Type
{
	char Format_Char;
	int (*Prn)(va_list *ap_P);
} Prn_D_T;


int Prn_c(va_list *ap_P);
int Prn_i(va_list *ap_P);
int Prn_f(va_list *ap_P);
int Prn_s(va_list *ap_P);

int Prn_c_Once(va_list *ap_P);
int Prn_i_Once(va_list *ap_P);
int Prn_f_Once(va_list *ap_P);
int Prn_s_Once(va_list *ap_P);

/**
 * print_all - some func
 * @format: some arg
 */
void print_all(const char * const format, ...)
{
	if (format == (void *)0)
		exit(1);

	va_list ap;

	va_start(ap, format);

	int i, j, Once = 1;

	Prn_D_T Prn_D_T_ss[] = {
		{'c', Prn_c},
		{'i', Prn_i},
		{'f', Prn_f},
		{'s', Prn_s}
	};

	Prn_D_T Prn_D_T_Once_ss[] = {
		{'c', Prn_c_Once},
		{'i', Prn_i_Once},
		{'f', Prn_f_Once},
		{'s', Prn_s_Once}
	};


	while (i < (int) strlen(format))
	{
		while (j < 4)
		{
			if (Once && format[i] == Prn_D_T_Once_ss[j].Format_Char)
			{
				Prn_D_T_Once_ss[j].Prn(&ap);
				Once = !Once;
				continue;
			}
			if (format[i] == Prn_D_T_Once_ss[j].Format_Char)
			{
				Prn_D_T_ss[j].Prn(&ap);
			}
		}
	}
		
		
	printf("\n");
	va_end(ap);
}


/**
 * Prn_c - some func
 * 
 * Return: the wanted value
 */
int Prn_c(va_list *ap_P)
{
	Prn_F(c, int)
}

/**
 * Prn_i - some func
 * 
 * Return: the wanted value
 */
int Prn_i(va_list *ap_P)
{
	Prn_F(i, int)
}

/**
 * Prn_f - some func
 * 
 * Return: the wanted value
 */
int Prn_f(va_list *ap_P)
{
	Prn_F(f, double)
}

/**
 * Prn_s - some func
 * 
 * Return: the wanted value
 */
int Prn_s(va_list *ap_P)
{
	Prn_F(s, char *)
}


/**
 * Prn_c_Once - some func
 * 
 * Return: the wanted value
 */
int Prn_c_Once(va_list *ap_P)
{
	Prn_F_Once(c, int)
}

/**
 * Prn_i_Once - some func
 * 
 * Return: the wanted value
 */
int Prn_i_Once(va_list *ap_P)
{
	Prn_F_Once(i, int)
}

/**
 * Prn_f_Once - some func
 * 
 * Return: the wanted value
 */
int Prn_f_Once(va_list *ap_P)
{
	Prn_F_Once(f, double)
}

/**
 * Prn_s_Once - some func
 * 
 * Return: the wanted value
 */
int Prn_s_Once(va_list *ap_P)
{
	Prn_F_Once(s, char *)
}
