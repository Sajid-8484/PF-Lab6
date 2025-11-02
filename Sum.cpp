#include<iostream>
using namespace std;
#include <cstdlib>
#include<windows.h>
int main()
{
    int count=0,N,sum=0;
    HANDLE n=
    GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(n,4);
    cout<<"How many numbers you want to add "<<endl;
    cin>>N;
    int numbers[N];
     SetConsoleTextAttribute(n,5);
    cout<<"\nEnter"<<N<<"numbers:\n";
    for(int i=0;i<N;i++)
    {
         SetConsoleTextAttribute(n,6);
        cout<<"number"<<i+1<<":";
        cin>>numbers[i];
        count++;
        sum+=numbers[i];
    }
    cout<<endl;
     SetConsoleTextAttribute(n,8);
    cout<<"Total sum of numbers is:"<<sum<<endl;
 SetConsoleTextAttribute(n,7);
    cout<<"total numbers are:"<<count<<endl;
    system("pause");
    return 0;
}