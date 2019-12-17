# include <iostream>
using namespace std;
int main()
{
    int h;
    cout<<"Enter the number of term: ";
    cin>>h;

    cout<<endl;
    int positive = 0, negative = 0;
    for(int i=1;i<=h;i++)
    {
        int x;
        cout<<"item no."<<i<<"=";
        cin>>x;
        cout<<endl;


    while(x >= 0)
        {positive += 1;
        break;}
        cout<<"Positive: "<<positive<<endl;
    while(x < 0)
        {negative += 1;
        break;}
        cout<<"Negative: "<<negative<<endl;

}

    cout<<endl;


    return 0;
}
