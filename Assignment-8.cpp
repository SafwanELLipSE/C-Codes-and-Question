#include<iostream>
using namespace std;

int main()
{
    int n, number;
    cout<<"Enter The number: ";
    cin>>n;

    int  num1 = 0,  num2 = 1;
    for (int i = 0;i < n;i++)
      {
        if (i<=1)
            number = i;
        else
       {
            number =  num1 +  num2;
            num1 = num2;
            num2 = number;
      }
    cout<<number<<" ";
  }
    return 0;
}



