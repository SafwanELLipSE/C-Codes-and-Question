#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void populate(int A[][4], int r, int c);
void display(int A[][4], int r, int c);
void findmx(int A[][4], int r, int c);

int main()
{   int loc = 0;
    int A[3][4];
    int r = 3, c = 4;

    populate(A, r, c);
    display(A, r, c);
    findmx(A, r, c);

    return 0;
}
void populate(int A[][4], int r, int c)
{
    srand(time(0));
    int ll = 0, ul = 9;
    for (int i = 0;i < r;i++)
    {
        for (int j = 0;j < c;j++)
            A[i][j] = ll + rand() % (ul - ll + 1);
    }
}
void display(int A[][4], int r, int c)
{
    for (int i = 0;i < r;i++)
    {
        for (int j = 0;j < c;j++)
            cout<<A[i][j]<<" ";

        cout<<endl;
    }
}
void findmx(int A[][4], int r, int c)
{
    int mx = A[0][0], Loc1 = 0,Loc2 = 0 ;
    for (int i = 0;i < r;i++)
    {
        for (int j = 0;j < c;j++)
            if (mx < A[i][j])
            {
                mx = A[i][j];
                Loc1 = i;
                Loc2 = j;
                cout<<endl;
            }
    }
    cout<<"The maximum : "<<mx<<endl;
    cout<<"The maximum loction : "<<Loc1,Loc2;

}
