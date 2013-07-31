#include <stdio.h>

int main()
{
  int c;
  while((c = getchar()) != EOF){
    switch(c){
      case 9:
        printf("\\t");
        break;
      default:
        putchar(c);
        break;
    }
  }

  return 0;
}
