#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int n = 100;
    int A[100];

    srand(time(NULL));
    int ll = 0, ul = 100;
    for (int i = 0;i < n;i++)
    A[i] = ll + rand() % (ul - ll + 1);

    cout<<"Array: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;

    float sum = 0,avg;
    for (int i = 0;i < n;i++)
        sum += A[i];
        avg = sum/n;

    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<avg<<endl;


    return 0;
}
