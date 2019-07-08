#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		main()
{
/*	int x;

	x = 2;
	printf("%s%d\n", "value/contents = 	", x); //prints value of x
	printf("%s%p", "address=  ", &x);
	return (0);
*/
	int a = 1;
	int b = 2;

	ft_swap(&a, &b);
	printf("%d\n",a);	
	printf("%d\n",b);
	return (0);
}
