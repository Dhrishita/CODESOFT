#include <iostream>
#include <string>
using namespace std;

int main()
{
    char line[100];
    cout<<"Enter the Name of the File: ";
    cin.getline(line,100);
   
    int i, wcount=1;
    for (i=0;i<=100;i++)
    {
        if(line[i]==' ')
        {
            if(line[i+1] !=' ')
            {
                wcount++;
            }
        }
    }
    cout<<"\nNumber of words in the given text file are: "<< wcount;
    return 0;
}
