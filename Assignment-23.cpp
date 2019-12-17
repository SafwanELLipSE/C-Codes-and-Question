#include<iostream>
using namespace std;

int main()
{
    int h,w,d,x,y,z,hr;
    cout<<"Enter The Hours: ";
    cin>>h;

    cout<<endl;

    d = h / 24;
    w = d / 7;
    y = d % 7;

    hr = y / 60;


    cout<<w<<" Weeks "<<y<<" Days "<<hr<<" Hours ";


    cout<<endl;

    return 0;
}



