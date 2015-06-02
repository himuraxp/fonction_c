int ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
	int letter = 'z';
	while(letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}
