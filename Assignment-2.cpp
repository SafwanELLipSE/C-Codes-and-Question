#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please Enter : ";
    cin>>n;

    if (n>=45)
        cout<<endl<<"Kill yourself"<<endl;

    else if (n < 45 && n >= 40)
        cout<<endl<<"Extremely Hot"<<endl;

    else if (n < 40 && n >= 35)
        cout<<endl<<"Very Hot"<<endl;

    else if (n < 35 && n >= 30)
        cout<<endl<<"Hot"<<endl;

    else if (n < 30 && n >= 25)
        cout<<endl<<"Mildly Hot"<<endl;

    else if (n < 25 && n >= 20)
        cout<<endl<<"Normal"<<endl;

    else if (n < 20 && n >= 15)
        cout<<endl<<"Mildly Cold"<<endl;

    else if (n < 15 && n >= 10)
        cout<<endl<<"Cold"<<endl;

    else if (n < 10 && n >= 5)
        cout<<endl<<"Very Cold"<<endl;

    else if (n < 5 && n >= 0)
        cout<<endl<<"Extremely Cold"<<endl;

    else if (n < 0)
        cout<<endl<<"Freeze to Death"<<endl;

    else
        cout<<endl<<"Your data is incorrect"<<endl;


    return 0;
}
