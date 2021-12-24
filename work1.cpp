// program for identify the number is positive , negative or neutral

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;

    if (a>0)
    {
        cout<<"number is positive"<<endl;

    }
    else if (a<0)   
    {  
        cout<<"number is negative"<<endl;
    }
    else
    {
        cout<<"number is neutral"<<endl;
    }
    return 0;
}
