#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	//int i;
	if(argc != 2)
		return(0);
	//i = ft_isalpha(argv[1][0]);
	printf("%d\n", ft_isascii(*argv[1]));
	return(0);
}

