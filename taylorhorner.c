#include<stdio.h>
int e(int x,int n)
{
    static double s=1;
    if(n==0)
    {
        return s;
    }
    else
    {
        s=1+(x/n)*s;
        return e(x,n-1);
    }
}
int main()
{
    float p,q,r;
    printf("Enter limit of numerator=");
    scanf("%1f",&p);
    printf("Enter limit of denominator=");
    scanf("%1f",&q);
    r=e(p,q);
    printf("=>%1f",r);
    return 0;
}