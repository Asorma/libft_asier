#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	//int i;
	if(argc != 2)
		return(0);
	//i = ft_isalpha(argv[1][0]);
	printf("%d\n", ft_isdigit(argv[1][0]));
	return(0);
}

