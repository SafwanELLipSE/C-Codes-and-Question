#include<iostream>
#include<cstring>
using namespace std;

int main()
{  char line[150];
   int v = 0,i;
   cout<<"Enter a String: ";
   cin.getline(line,150);
   cout<<endl;
   for (i = 0;line[i] != 0;i++)
   {
       if (line[i] == 'a'||line[i] == 'u'||line[i] == 'o'||line[i] == 'i'||line[i] == 'e'||line[i] == 'A'||line[i] == 'U'||line[i] == 'O'||line[i] == 'I'||line[i] == 'E')
       v++;
   }
   cout<<"Vowels: "<<v;
   cout<<endl;

   return 0;
}
