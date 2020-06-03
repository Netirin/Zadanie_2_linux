#include"pola.h"

int pole_prostokata(int a, int b)
{
	if(a >= 0 && b >= 0)
	{
		return (a*b);
	}
	else
	{
		printf("Zle wymiary prostokata.Upewnij sie, ze wszystkie boki sa niemniejsze od 0.\n");
		return (-1);
	}
}

int pole_prostopadloscianu(int a, int b, int h)
{
	if( a >=0 && b >= 0 && h >= 0 )
	{
		return (2*a*b+2*a*h+2*b*h);
	}
	else
	{
		printf("Zle wymiary prostopadloscianu. Upewnij sie, ze wszystkie boki sa niemniejsze od 0.\n");
		return -1;
	}
}
