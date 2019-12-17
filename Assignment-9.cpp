#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{ int n = 100;
  int A[100];

   srand(time(NULL));
    int ll = 0, ul = 100;
    for (int i = 0;i < n;i++)
     A[i] = ll + rand() % (ul - ll + 1);

    cout<<"array : ";
    for (int i = 0;i < n;i++)
    cout<<A[i]<<" ";
    cout<<endl;

    int mx = A[0];

    for (int i = 0;i < n;i++)
       {
        if (mx < A[i])
            mx = A[i];
       }

    cout<<"The maximun:"<<mx;

     return 0;
}



