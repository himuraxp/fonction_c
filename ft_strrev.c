char *ft_strrev(char *str)
{
	int count;
	int size;
	char temp;

	count = 0;
	size = 0;
	while(str[size])
	{
		size++;
		size -= 1;	
	}
	while(count < size)
	{
		temp = str[size];
		str[size] = str[count];
		str[count] = temp;
		count++;
		size--;
	}
	return(str);
}
