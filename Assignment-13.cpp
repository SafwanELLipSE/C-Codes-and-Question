#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int populate(int A[], int n);
int display(int A[], int n);
int findsort(int A[], int n);
int median(int A[], int n);

int main()
{
    int A[5];
    int n = 5;
    int w;
    populate(A, n);
    //display(A, n);
    //findsort(A, n);
    //median(A, n);
    w = median(A, n);
    cout<<"The Median: "<<w;

    return 0;
}
int populate(int A[], int n)
{
    srand(time(0));
    int ll = 0, ul = 9;
    for (int i = 0;i < n;i++)
        A[i] = ll + rand() % (ul - ll + 1);
}
int display(int A[], int n)
{
    cout<<"Array before sort: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
int findsort(int A[], int n)
{
    display (A, n);
   for (int j = 0;j < n - 1;j++)
    {
        int mx = A[0], mxLoc = 0;
        for (int i = 1;i < n - j;i++)
        {
            if (mx < A[i])
            {
                mx = A[i];
                mxLoc = i;
            }
        }
        int temp = A[mxLoc];
        A[mxLoc] = A[n - 1 - j];
        A[n - 1 - j] = temp;
    }
    cout<<"Array After Sort: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;

}
int median(int A[], int n)
{
findsort (A, n);
 int p = n - 1;
 int med = p / 2;

 return A[med];
}





