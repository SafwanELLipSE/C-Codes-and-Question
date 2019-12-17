# include <iostream>
using namespace std;
int main()
{
     int h;
    cout<<"Enter Height: ";
    cin>>h;

    cout<<endl;

  for (int i = 1;i <= h;i++)
    {      int c = 1;
        for (int j = 1;j <= i;j++)
            cout<<c<<" ";
            c++;
            cout<<endl;
    }

    cout<<endl;


    return 0;
}
