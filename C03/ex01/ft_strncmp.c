int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	printf("Compare 8 chars:\n");
//     printf("Hello vs HelloWorld: %d\n", ft_strncmp("Hello", "HelloWorld", 8));
//     printf("Hello vs Hell: %d\n", ft_strncmp("Hello", "Hell", 5));
//     printf("Hell vs Hello: %d\n", ft_strncmp("Hell", "Hello", 5));
// 	printf("Hello vs Hello: %d\n", ft_strncmp("Hello", "Hello", 5));
//     return (0);
// }

