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
	unsigned long counter = 0, ribbon = 0;
	unsigned int l, w, h, a, b, c, bow, temp; 
	while(fscanf(fp, "%ux%ux%ux", &l, &w, &h), !feof(fp))
	{
		a = l*w;
		b = w*h;
		c = h*l;
		
		counter += 2*a + 2*b + 2*c + (a < b ? (a < c ? a : c) : (b < c ? b : c));
		bow = l* w * h;
		if(h > w)
		{
			temp = w;
			w = h;
			h = temp;
		}
		if(w > l)
		{
			temp = l;
			l = w;
			w = temp;
		}
		if(l > h)
		{
			temp = h;
			h = l;
			l = temp;
		}
		ribbon += l + l + w + w + bow;

	}
	fclose(fp);
	printf("%lu\n%lu", counter, ribbon);
}