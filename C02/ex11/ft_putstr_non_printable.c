#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	while (*str)
	{
		if ((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64))
		{
			i++;
			str[i] = '\b';
			str[i] = ((str[i] * 10)/16);
		}
		else if((str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
		{
			i++;
			str[i] = '\b';
			str[i] = ((str[i] *10)/16);
		}
		i++;
	}
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int main(void)
{
	char c[] = {"Coucou\ntu vas bien ?"};
	int i;
	
	ft_putstr_non_printable(c);
	return(0);
}
