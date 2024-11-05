
#include "head.h"

int			check_format(char str,va_list ar, int *len);
void ft_putstr(char *str);
void	ft_putnbr(int nbr);
int ft_printf(const char *format, ...);


int main()
{
	// ft_putnbr(5);
	// ft_printf("%d otmane", 5);
	ft_printf("%s otmane, i'm %d years old %c ", "hello my name is ", 27, 'A');
	// printf("%d\n", printf("otmane %d\n", 10));
}



int			check_format(char str,va_list ar, int *len)
{
	printf("done");
	int l = *len;
	if (str == 'c')
	{
		ft_putchar(*(va_arg(ar, char *)));
		l++;

	}
	else if (str == 'd')
	{
		ft_putnbr(va_arg(ar, int));
	}
	else if (str == 's')
	{
		ft_putstr(va_arg(ar, char *));
	}
	return (l);
}


void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);

}


#include "head.h"

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
		write(1, "-2147483648", 11);
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
		ft_putnbr(nbr);
	}
	else
		ft_putchar(nbr + 48);
}


int ft_printf(const char *format, ...)
{
	va_list ar;
	int len;

	len = 0;
	va_start(ar, format);
	while(*format)
	{
		if(*format == '%')
			len += check_format(*++format, ar , &len);

		// else
		// {
		// 	printf("hi");
		// 	if (*format)
		// 	{
		// 		ft_putchar(*format);
		// 		len++;

		// 	}
		// 	else
		// 		return len;
		// }
		format++;
	}
	va_end(ar);

	return (len);

}
