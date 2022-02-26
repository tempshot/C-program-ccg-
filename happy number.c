// Happy number  19= 1^2+9^2= 82+ 8^2+2^2= 68= 6^2+8^2= 100+ 1^2+0^2+0^2= 1
#include <stdio.h>
int main()   
{
    int n,r,sq,i,sum;
    printf("Enter number: ");
    scanf("%d", &n);
    sum = 0;
    while (1)
    {
        r = n%10;
        n = n/10;  
        sq = r*r;
        sum = sum+sq;
        if (n==0)
        {
            n = sum;
            sum = 0;
            if (n==1 || n==7)
            {
                printf("Happy number");
                break;
            }
            else if (n==2 ||n==3 ||n==4 ||n==5 ||n==6 ||n==8 ||n==9)
            {
                printf("Not happy number");
                break;
            }
        }
    }
}


