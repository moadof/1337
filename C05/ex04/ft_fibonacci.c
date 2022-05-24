int	ft_fibonacci(int index)
{
	int	result;

	result = 0 ;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		result = result + 1;
	else if (index > 1)
		result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}