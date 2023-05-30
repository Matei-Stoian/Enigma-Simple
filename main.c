#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "rotor.h"
#include "enigma.h"

void print_help();
int p1 = 0, p2 = 0, p3 = 0;
int r1 = 1, r2 = 2, r3 = 3;
Enigma e;
char *s;
int main(int argc, char *argv[])
{
  print_help();
  for(int i=0;s[i];i++)
  {
    char c = getNextChar(&e,s[i]);
    printf("%c",c);
  }
  printf("\n");
  return 0;
}
void to_upper(char *s)
{
  for (int i = 0; s[i]; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      s[i] = s[i] - 32;
    }
  }
}
void print_help()
{
  printf("Please input the rotor config like: 1 2 3 (be aware that there are a maximum of 7 rotors and they must be different)");
  scanf("%d %d %d", &r1, &r2, &r3);
  initRotor(&e.rotor[0],RW[r1]);
  initRotor(&e.rotor[1],RW[r2]);
  initRotor(&e.rotor[2],RW[r3]);
  printf("Input the text in uppercase: ");
  scanf("%s", s);
  to_upper(s);
}
