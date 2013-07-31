#include <stdio.h>

int main()
{
  double sp, tb, nl;

  int c;
  while((c = getchar()) != EOF){
    switch(c){
      case ' ':
        sp++;
        break;
      case '\t':
        tb++;
        break;
      case '\n':
        nl++;
        break;
    }
  }

  printf("spaces: %.0f\n", sp);
  printf("tabs: %.0f\n", tb);
  printf("newlines: %.0f\n", nl);

  return 0;
}
