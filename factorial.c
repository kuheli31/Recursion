#include <stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}
int main()
{
    int x,r;
    printf("Enter a number=");
    scanf("%d",&x);
    r=fact(x);
    printf("Factorial is=%d",r);
}