/********************************************
*Advent of Code                             *
*Program Name: Day 1                        *                    
*Programming Language: C                    *
*Author: José I. Escudero                   *
*E-mail: joseignacioescudero97@hotmail.com  *
*Date(DD/MM/YYYY): 06/12/2015               *
********************************************/
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE* fp;
  fp = fopen("01.txt", "r");
  unsigned int c;
  int level = 0;
  char char1 = '(';
  char char2 = ')';
  int pos = 0, done = 0;
  while((c = getc(fp)) != EOF)
  {
    if(((char)c) == char1)
    {
      level++;
      pos++;
    } 
    else if(((char)c) == char2)
    {
      level--;
      pos++;
    }
    if(done != 1)
    {
      if(level == -1)
      {
        printf("POS = %i\n", pos);
        done = 1;
      }
    }
  }
  printf("%i\n", level);
  return 0;
}
