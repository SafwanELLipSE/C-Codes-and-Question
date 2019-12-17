#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int r;
    cout<<"Enter radius: ";
    cin>>r;

    cout<<endl;

    cout<<"Area = 2*3.1216*r^2 = "<< 2 * 3.1416 * (float)pow(r,2)<<endl;
	cout<<"Perimeter = 2*3.1216*r = "<< 2 * 3.1416 * r;
	
    cout<<endl;
    return 0;
}
