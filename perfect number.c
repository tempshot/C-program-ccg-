Perfect number: sum of factors of number = number
#include <stdio.h>
int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    for(int i=1; i<n; i++)
    {
        if (n%i == 0)
        {
            ans = ans + i;
        }
    }
    if (ans == n)
    {
        printf("Number is perfect number");
    }
    else
    {
        printf("Number is not perfect number");
    }
    return 0;
}
