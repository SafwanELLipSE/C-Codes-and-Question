#include<iostream>
using namespace std;

int main()
{
   int n,i,j;
    cout<<"Enter Height: ";
    cin>>n;

    cout<<endl;

    for(i=1;i<=n;i++)
    {
        for(j=1; j<i ;j++)
            cout<<" ";
        for(j=i;j<n;j++)
            cout<<"*";
        for(j=i;j<=i;j++)
            cout<<"*";
        for(j=i;j<n;j++)
            cout<<"*";

        cout<<endl;

    }
    return 0;
}
