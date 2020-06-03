#include"objetosc.h"

int objetosc_prostopadloscianu(int a, int b, int h)
{
	if( a >= 0 && b>=0 && h >= 0)
	{
		return (a*b*h);
	}
	else 
	{
		printf("Zle wymiary.Upewnij sie, ze wszystkie boki sa niemniejsze od 0. \n");
		return (-1);
	}
}
