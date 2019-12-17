#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void populate(int A[][4], int r, int c);
void display(int A[][4], int r, int c);
void Sumofrow(int A[][4], int r, int c);
void Sumofcolumn(int A[][4], int r, int c);
void sumofdiagonal(int A[][4], int r, int c);

int main()
{
    int A[4][4];
    int r = 4, c = 4;

    populate(A, r, c);
    //display(A, r, c);
    Sumofrow(A, r, c);
     cout<<endl;
    Sumofcolumn(A, r, c);
    sumofdiagonal(A, r, c);
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
void Sumofrow(int A[][4], int r, int c)
{   display(A, r, c);
    cout<<endl;

    int s = 0;
    for(int i = 0;i < r;i++)
      {
          for(int j = 0;j < c;j++)
           s = s + A[i][j];
          cout<<"sum of "<<i<<" Row is "<<s;
          s = 0;
          cout<<endl;
      }
}
void Sumofcolumn(int A[][4], int r, int c)
{
      int s = 0;
    for(int i = 0;i < c;i++)
      {
          for(int j = 0;j < r;j++)
           s = s + A[j][i];
          cout<<"sum of "<<i<<" Column is "<<s;
            s = 0;
          cout<<endl;
      }
      cout<<endl;
}
void sumofdiagonal(int A[][4], int r, int c)
{
    int d=0,s=0;
    for (int i = 0;i < r;i++)
    {
       for (int j = 0;j < c;j++)
        {
        if(i == j)
              d = d + A[i][j];
        if(i + j == r - 1)
              s = s + A[i][j];
        }
    }


     cout <<"The First Diagonal: "<<d<< endl;
     cout <<"The Second Diagonal: "<<s<< endl;

}















