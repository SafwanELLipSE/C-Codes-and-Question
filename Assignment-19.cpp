#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void populateA(int A[], int n);
void populateB(int B[], int w);
void displayA(int A[], int n);
void displayB(int B[], int w);
void findsortA(int A[], int n);
void findsortB(int B[], int w);
void populateandsortC(int A[], int B[], int C[], int n, int w, int s);
void displayC(int C[], int s);

int main()
{
    int A[3];
    int n = 3;
    int B[5];
    int w = 5;
    int C[8];
    int s = 8;
    srand(time(0));
    populateA(A, n);
    //displayA(A, n);
    findsortA(A, n);
    cout<<endl;
    populateB(B, w);
    //displayB(B, n);
    findsortB(B, w);
    cout<<endl;
    populateandsortC(A, B, C, n, w, s);
    displayC(C, s);

    return 0;
}
void populateA(int A[], int n)
{
    int ll = 0, ul = 3;
    for (int i = 0;i < n;i++)
        A[i] = ll + rand() % (ul - ll + 1);
}
void displayA(int A[], int n)
{
    cout<<"Array A before sort: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
void findsortA(int A[], int n)
{
    displayA(A, n);
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
    cout<<"Array A After Sort: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
void populateB(int B[], int w)
{
    int ll = 0, ul = 5;
    for (int i = 0;i < w;i++)
        B[i] = ll + rand() % (ul - ll + 1);
}
void displayB(int B[], int w)
{
    cout<<"Array B before sort: ";
    for (int i = 0;i < w;i++)
        cout<<B[i]<<" ";
        cout<<endl;
}
void findsortB(int B[], int w)
{
    displayB(B, w);
   for (int j = 0;j < w - 1;j++)
    {
        int mx = B[0], mxLoc = 0;
        for (int i = 1;i < w - j;i++)
        {
            if (mx < B[i])
            {
                mx = B[i];
                mxLoc = i;
            }
        }
        int temp = B[mxLoc];
        B[mxLoc] = B[w - 1 - j];
        B[w - 1 - j] = temp;
    }
    cout<<"Array B After Sort: ";
    for (int i = 0;i < w;i++)
        cout<<B[i]<<" ";
    cout<<endl;
}
void populateandsortC(int A[], int B[],int C[], int n, int w, int s)
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < w)
    {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }
    while (i < n)
       {
           C[k++] = A[i++];
       }
    while (j < w)
        {
            C[k++] = B[j++];
        }

}
void displayC(int C[], int s)
{
    cout<<"Array C sort: ";
    for (int i = 0;i < s;i++)
        cout<<C[i]<<" ";
    cout<<endl;
}

