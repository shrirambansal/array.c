#include <iostream>

using namespace std;
int main()
{
    int n;
    int sum =0;

    cout<<"Enter the number"<<endl;
    cin>> n;

    for (int i = 2; i <= n; i++)
    {
        
        sum = sum + i;
        i++;
    

    }
    
cout << "value of sum is "<<sum<<endl;

}