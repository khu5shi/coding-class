*\
*****
 ****
  ***
   **
    *
 \*
 #include<stdio.h>
int main()
{
    int i,a,b;
    i=1;
    while(i<=5)
    {
        a=1;
        while(a<=i)
        {
            printf(" ");
            a++;
        }
        b=5;
        while(b>=i)
        {
            printf("*");
            b--;

        }
        printf("\n");
        i++;

    }
    return 0;
}
