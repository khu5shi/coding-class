*\
1
23
456
78910
\*
#include<stdio.h>
int main()
{int i,a,b=1;
 i=1;
 while(i<=4)
 {
    a=1;
    while(a<=i)
    {   
        printf("%d",b);
        
        a++;
        b++;

    }
    printf("\n");
    
    i++;

 }
 return 0;
 }
