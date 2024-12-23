#include <iostream>
using namespace std;

int main()
{
    int n=4352433;
    int count=0;
    while(n>10)
    {
        n/=10;
        count++;
    }
    cout<<count+1;
    return 0;
}