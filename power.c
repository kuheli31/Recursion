#include <stdio.h>
int pow(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n%2==0)
    {
        return pow(m*m,n/2);
    }
    else
    {
        return m*pow(m*m,(n-1)/2);
    }
}
int main()
{
    int x,r,q;
    printf("Enter number=");
    scanf("%d",&x);
    printf("Enter power=");
    scanf("%d",&r);
    q=pow(x,r);
    printf("Answer=%d",q);
    return 0;
}