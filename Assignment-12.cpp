#include<iostream>
using namespace std;
int findfactorial(int n);
int main ()
{
    int n;
    cout << "Enter The number: ";
    cin >> n;
    cout << "Factorial of " << n << " = " << findfactorial(n);
    return 0;
}
int findfactorial(int n)
{
    if(n!=0)
     return n*findfactorial(n-1);
}
