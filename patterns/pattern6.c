*\
    *
   **
  ***
 ****
*****
\*
#include <stdio.h>
int main()
{int i,a,b;
  for(i=1;i<6;i++)
  { 
      for(a=5;a>i;a--)
      {printf(" ");
      }
      for(b=1;b<a;b++)
      {printf("*");
      }
      printf("\n");
  }
   return 0;
}
