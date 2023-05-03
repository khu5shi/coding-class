*\
    *
   **
  ***
 ****
*****
\*
#include<stdio.h>
int main()
{int a,b,i;
  i=1;
  while(i<=5)
  { 
    a=5;
    while(a>i)
    {
        printf(" ");
        a--;

    }
    b=1;
    while(b<=i)
    {
        printf("*");
        b++;

    }
    printf("\n");
    i++;

  }
 return 0;
}
