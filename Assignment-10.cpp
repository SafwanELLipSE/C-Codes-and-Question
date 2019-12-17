#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int A[5], B[5],c[5];
    int n = 5;


    srand(time(0));
    int lA = 0, uA = 9;
    for (int i = 0;i < n;i++)
        A[i] = lA + rand() % (uA - lA + 1);

    int lB = 0, uB = 9;
    for (int i = 0;i < n;i++)
        B[i] = lB + rand() % (uB - lB + 1);


    cout<<"Array A: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;


    cout<<"Array B: ";
    for (int i = 0;i < n;i++)
        cout<<B[i]<<" ";
    cout<<endl<<endl;

    cout<<"Array C: ";
    for (int i = 0;i < n;i++)
        cout<<A[i] + B[i]<<" ";
    cout<<endl;

    return 0;
}
