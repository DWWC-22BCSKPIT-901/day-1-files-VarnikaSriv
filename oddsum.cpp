#include <iostream>
using namespace std;

int main()
{
    int sum=0,n=20;
    for(int i=0;i<=20;i++)
    {
        if (i%2==0)
        {
            sum+=i;
        }
        
    }
    cout<<sum;
    return 0;
}