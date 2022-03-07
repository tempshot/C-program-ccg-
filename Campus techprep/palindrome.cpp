#include <iostream>
using namespace std;
int main()
{
    string s,r;
    int l=0;
    cin >> s;
    for (int i=0; s[i]!='\0'; i++)
    {
        ++l;
    }
    for(int j=l-1; j>=0; j--)
    {
        r += s[j];
    }
    if (s==r)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
    return 0;
}
