#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void populate(int A[], int n);
void display(int A[], int n);
void mn(int A[], int n);
void mx(int A[], int n);
void sum(int A[], int n);
void avg(int A[], int n);

int main()
{
    int A[5];
    int n = 5;

    populate(A, n);
    display(A, n);
    mn(A, n);
    mx(A, n);
    sum(A, n);
    avg (A, n);

    return 0;
}
void populate(int A[], int n)
{
    srand(time(0));
    int ll = 0, ul = 9;
    for (int i = 0;i < n;i++)
        A[i] = ll + rand() % (ul - ll + 1);
}
void display(int A[], int n)
{
    cout<<"Array: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
void mn(int A[], int n)
{
  int mn = A[0], temp = 0;
  for (int i = 1;i < n;i++)
     {
        temp = A[i];
        if (temp < mn)
            mn = temp;
     }
      cout<<"The minimun is: "<<mn<<endl;
}
void mx(int A[], int n)
{

    int mx = A[0], temp = 0;
    for (int i = 1;i < n;i++)
      {
           temp = A[i];
           if (temp > mx)
                mx = temp;
      }
      cout<<"The maximum is: "<<mx<<endl;
}
void sum(int A[], int n)
{
    float sum = 0;
    for (int i = 0;i < n;i++)
        sum += A[i];
    cout<<"Sum: "<<sum<<endl;
}
void avg(int A[], int n)
{
    float sum = 0,avg;
    for (int i = 0;i < n;i++)
        sum += A[i];
        avg = sum/n;
    cout<<"Average: "<<avg<<endl;
}
