#include <stdio.h>

// Recursive function to calculate the sum of natural numbers
int sum(int n) 
{
    if (n == 0) 
    {  
        return 0;
    } 
    else 
    {  
        return n + sum(n - 1);
    }
}

int main() 
{
    int r = 0, x;
    printf("Enter the limit = ");
    scanf("%d", &x);
    r = sum(x); 
    printf("Sum is=%d",r);
    return 0;
}
