#include <iostream>
#include <iomanip>
using namespace std;
int main()
{int a=1,b,day=1;
    //cin>>a;
    int a1=a;
    while(a1>0)
    {cout<<"   ";
    a1--;}
    for (;a<8;a++)
    {
        cout <<setw(2)<<day++ <<" ";

    }

    
    cout <<endl;
for (a=1;a<5;a++)
{
    for(int j=0;(j<7)&&(day<32);j++)
    {if(day>9)
    cout<<day++<<" ";
    else cout <<setw(2)<<day++<<" ";}
    cout <<endl;
}
    
}