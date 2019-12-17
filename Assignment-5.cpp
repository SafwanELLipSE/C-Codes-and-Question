#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float n, x;
    cout<<"Enter Number terms: ";
    cin>>n;
    cout<<"Enter The Value of x: ";
    cin>>x;

     cout<<endl;

    float p = 1, sum = 0,d = 1;
    for (int i = 1;i <= n;i++)
    {
        cout<<i<<"*"<<x<<"^"<<p<<"/"<<d;

        float curTerm = i * pow(x, p);
        sum += curTerm;
        sum /=d;

        if (i < n)
            cout<<" + ";
        else
            cout<<" = ";

        p += 2;
        d += 3;
    }

    cout<<sum;

    cout<<endl;

    return 0;
}
