#include <iostream>
using namespace std;
int main()
{
    int n, flag=0;
    cout << "Enter n: ";
    cin >> n;
    if (n==1)
    {
        cout << "Prime";
    }
    else
    {
        for(int i=2; i<n; i++)
        {
            if (n%i==0)
            {
                cout << "Not prime";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "Prime";
        }   
    }
}
