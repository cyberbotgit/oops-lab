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
    if(nw==n)
    cout<<n<<" is a palindrome";
    else
    cout<<n<<" is not a palindrome";
return 0;
}
