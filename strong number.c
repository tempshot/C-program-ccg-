// Strong number: 1! + 4! + 5! = 145 
#include <stdio.h>
int main()
{
    int n,i,ans=0,fact,r,temp;
    scanf("%d", &n);
    temp = n;
    while (1)
    {
        r = n%10;
        n = n/10;
        fact = 1;
        for(i=1; i<=r; i++)
        {
            fact = fact*i;
        }
        ans = ans +fact;
        if (n==0)
        {
            break;
        }
    }
    if (ans==temp)
    {
        printf("Number is strong number");
    }
    else
    {
        printf("Number is not strong number");
    }
}
