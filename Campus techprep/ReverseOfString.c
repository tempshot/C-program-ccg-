#include<stdio.h>
int main()
{
    char s[]="ishvi";
    int l=0;
    for(int i=0; s[i]!='\0';i++)
    {
        ++l;
    }
    for(int j=l-1; j>=0; --j){
        printf("%c", s[j]);
    }
    return 0;
}
