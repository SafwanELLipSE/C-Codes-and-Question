#include<iostream>
using namespace std;

int main()
{
    float n;
    cout<<"Enter your mark: ";
    cin>>n;

    if (n >= 85 && n <= 100)
        cout<<endl<<"your mark is "<<n<< ",you got A"<<endl;

    else if (n >= 80 && n < 85)
        cout<<endl<<"your mark is "<<n<< ",you got A-"<<endl;

    else if (n >= 75 && n < 80)
        cout<<endl<<"your mark is "<<n<< ",you got B+"<<endl;

    else if (n >= 70 && n < 75)
        cout<<endl<<"your mark is "<<n<< ",you got B"<<endl;

    else if (n >= 65 && n < 70)
        cout<<endl<<"your mark is "<<n<< ",you got B-"<<endl;

    else if (n >= 60 && n < 65)
        cout<<endl<<"your mark is "<<n<< ",you got C+"<<endl;

    else if (n >= 55 && n < 60)
        cout<<endl<<"your mark is "<<n<< ",you got C"<<endl;

    else if (n >= 50 && n < 55)
        cout<<endl<<"your mark is "<<n<< ",you got C-"<<endl;

    else if (n >= 45 && n < 50)
        cout<<endl<<"your mark is "<<n<< ",you got D+"<<endl;

    else if (n >= 40 && n < 45)
        cout<<endl<<"your mark is "<<n<< ",you got D"<<endl;

    else if (n >= 0 && n < 40)
        cout<<endl<<"your mark is "<<n<< ",you got F"<<endl;

    else
        cout<<endl<<"your input was incorrect"<<endl;

    return 0;

}
