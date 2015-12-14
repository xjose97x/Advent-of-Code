/********************************************
*Advent of Code                             *
*Program Name: Day 2                        *                    
*Programming Language: C                    *
*Author: José I. Escudero                   *
*E-mail: joseignacioescudero97@hotmail.com  *
*Date(DD/MM/YYYY): 13/12/2015               *
********************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	FILE* fp;
	fp = fopen("02.txt", "r");
	unsigned long counter = 0, value = 0, temp;
	unsigned int l, w, h, a, b, c, temp2; 
	while(fscanf(fp, "%ux%ux%ux", &l, &w, &h), !feof(fp))
	{
		a = l*w;
		b = w*h;
		c = h*l;
		
		counter += 2*a + 2*b + 2*c + (a < b ? (a < c ? a : c) : (b < c ? b : c));
	}
	fclose(fp);
	printf("%lu\n", counter);
}