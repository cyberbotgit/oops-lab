#include<iostream>
using namespace std;

int main()
{
    int n,dig,temp,nw;
    cout<<"Enter a num ";
    cin>>n;
    temp=n;
    while(temp)
    {
        nw*=10;
        dig=temp%10;
        nw+=dig;
        temp/=10;

    }
    cout<<"Rev is "<<nw;
return 0;
}
