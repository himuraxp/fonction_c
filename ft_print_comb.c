int ft_putchar(char c);

void ft_print_comb(void)
{
	int number[3];

	number[3] = {48, 48, 48};
	while (number[0] <= 57)
	{
		if ((number[0] < number[1]) && (number[1] < number[2]))
		{
			ft_putchar(number[0]);
			ft_putchar(number[1]);
			ft_putchar(number[2]);
			if (number[0] != 55)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		if (number[2]++ >= 57)
		{
			number[2] = 48;
			number[1]++;
		}
		if (number[1] == 58)
		{
			number[1] = 48;
			number[0]++;
		}
	}
}
