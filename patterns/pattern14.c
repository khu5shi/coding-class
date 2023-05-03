*\
1
12
123
1234
12345
\*
#include<stdio.h>
int main()
{int i,a;
 i=1;
 while(i<=5)
 {
    a=1;
    while(a<=i)
    {
        printf("%d",a);
        a++;
    }
    printf("\n");
    i++;

 }
 return 0;
 }
