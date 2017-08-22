#include<iostream>
using namespace std;
int main()
{

    int num,temp,sum=0,dig;
    cout<<"enter number :";
    cin>>num;
    temp=num;
    while(temp)
    {
        dig=temp%10;
        sum+=dig;
        temp/=10;

    }
    cout<<"Sum of dig is"<<sum;
}
