int ft_putchar(char c);

int main(int argc, char **argv)
{
	int i;
	int z;

	i = 1;
	z = 0;
	while (i < argc)
	{
		while (argv[i][z])
		{
			ft_putchar(argv[i][z]);
			z++;
		}
		ft_putchar('\n');
		i++;
		z = 0;
	}
	return (0);
}
