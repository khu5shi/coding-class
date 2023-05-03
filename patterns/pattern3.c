*\
    1
   22
  333
 4444
55555
\*#include <stdio.h>
int main()
{int i,a,b;
  for(i=1;i<6;i++)
  { 
      for(a=5;a>i;a--)
      {printf(" ");
      }
      for(b=1;b<=i;b++)
      {printf("%d",i);
      }
      printf("\n");
  }
   return 0;
}
