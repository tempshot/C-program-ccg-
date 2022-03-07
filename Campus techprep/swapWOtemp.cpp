#include<iostream>
using namespace std;

int main()
{
    int a,b,sum;
    cout << "Enter a and b: ";
    cin >> a >>b;
    sum = a+b;
    a = sum-a;
    b = sum-b;
    cout << "a= " << a << " b= " << b;
}
