#include <stdio.h>
int e(int x, int n)
{
    static int p=1,f=1;
    int r;
    if(n==0)
    {
        return 1;
    }
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        return r+(p/f);
    }
}
int main()
{
    int j,w,q;
    printf("Enter number=");
    scanf("%d",&j);
    printf("Enter power=");
    scanf("%d",&w);
    q=e(j,w);
    printf("Answer=%d",q);
    return 0;
}