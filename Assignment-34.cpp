#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{   int A[100];
    int n = 100;
    srand(time(NULL));
    int ll = 0, ul = 100;
    for (int i = 0;i < n;i++)
        A[i] = ll + rand() % (ul - ll + 1);

    cout<<"Array: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;

    int smallest = A[0],largest = A[0] , temp = 0;
    for (int i = 1;i < n;i++)
    {
        temp = A[i];
        if (temp < smallest)
            smallest = temp;
        if (temp > largest)
            largest = temp;
    }
    cout<<"The smallest is: "<<smallest<<endl;
    cout<<"The largest is: "<<largest<<endl;
  return 0;
}
