# include <iostream>
using namespace std;
int main()
{
int a,b,c;
cout<< "Enter First number : ";
cin>>a;
cout<< "Enter Second number : ";
cin>>b;
c=a*b;
while(a!=b)
{
if(a>b)
     a = a-b;
else
     b = b-a;
}
cout<<endl;
cout<< "HCF = " << a<<endl;
cout<< "LCM = " << c/a<<endl;
return 0;
}
