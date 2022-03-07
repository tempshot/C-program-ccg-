#include <stdio.h>
int main()
{
    int n,f=0,s=1,ans;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d %d ",f,s);
    for (int i=0; i<n-2; i++)
    {
        ans = f+s;
        printf("%d ",ans);
        f = s;
        s = ans;
    }
}
