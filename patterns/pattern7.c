*\
*****
 ****
  ***
   **
    *
 \*
 #include <stdio.h>
int main()
{int i,a,b;
   for(i=1;i<6;i++)
   {
     for(a=0;a<i;a++)
     {printf(" ");
     }
     for(b=5;b>=i;b--)
     {printf("*");
     }
     printf("\n");
   }
   return 0;
   }
