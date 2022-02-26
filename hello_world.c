// // #include <stdio.h>
// int printf(const char*__format, ...);
// int main()
// {
//     printf("hello");
//     return 0;
// }


// prime number series
// #include <stdio.h>
// int main()
// {
//     int n,i,j,flag;
//     scanf("%d", &n);
//     for(i=2; i<=n; i++)
//     {
//         flag = 0;
//         for(j=2; j<i; j++)
//         {
//             if (i%j == 0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }


// Perfect number: sum of factors of number = number
// #include <stdio.h>
// int main()
// {
//     int n, ans = 0;
//     scanf("%d", &n);
//     for(int i=1; i<n; i++)
//     {
//         if (n%i == 0)
//         {
//             ans = ans + i;
//         }
//     }
//     if (ans == n)
//     {
//         printf("Number is perfect number");
//     }
//     else
//     {
//         printf("Number is not perfect number");
//     }
//     return 0;
// }


// Strong number: 1! + 4! + 5! = 145 
// #include <stdio.h>
// int main()
// {
//     int n,i,ans=0,fact,r,temp;
//     scanf("%d", &n);
//     temp = n;
//     while (1)
//     {
//         r = n%10;
//         n = n/10;
//         fact = 1;
//         for(i=1; i<=r; i++)
//         {
//             fact = fact*i;
//         }
//         ans = ans +fact;
//         if (n==0)
//         {
//             break;
//         }
//     }
//     if (ans==temp)
//     {
//         printf("Number is perfect number");
//     }
//     else
//     {
//         printf("Number is not perfect number");
//     }
// }


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


