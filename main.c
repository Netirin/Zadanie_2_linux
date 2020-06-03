#include<stdio.h>
#include"pola.h"
#include"objetosc.h"

int main()
{
	int a, b, h, temp;
	printf("Podaj a: ");
	scanf("%d", &a);
	printf("Podaj b: ");
        scanf("%d", &b);
	printf("Podaj h: ");
        scanf("%d", &h);
	temp = pole_prostokata(a,b);
	printf("Pole prostokata: %d \n", temp);
	temp = pole_prostopadloscianu(a,b,h);
        printf("Pole prostopadloscianu: %d \n", temp);
	temp = objetosc_prostopadloscianu(a,b,h);
        printf("Objetosc prostopadloscianu: %d \n", temp);

	return 0;

}

