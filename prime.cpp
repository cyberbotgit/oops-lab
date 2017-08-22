#include<iostream>
using namespace std;

int main()
{
    int n,flag=1;
    cout<<"Enter a num ";
    cin>>n;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        flag=0;

    }
    if(flag)
    {
        cout<<n<<" is prime";
    }
    else
    cout<<n<<" is not prime";

return 0;
}
