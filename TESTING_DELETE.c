#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	i = 0;
	if(argc != 2)
		return(0);
	//i = ft_isalpha(argv[1][0]);
	printf("%d\n", ft_isascii(*argv[1]));
	while(i <= 128)
	{
		if(ft_isprint(i) != 0)
			printf("%c",ft_isprint(i));
		i++;
	}

	return(0);
}

