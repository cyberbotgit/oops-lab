#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int num,temp,sum=0,dig,n=0;
    cout<<"enter number :";
    cin>>num;
    temp=num;
    //for no of digits
    while(temp)
    {
      temp/=10;
      n++;
    }
 temp=num;
    while(temp)
    {
        dig=temp%10;
        dig=pow(dig,n);
        sum+=dig;
        temp/=10;

    }
    if(num==sum)
    cout<<num<<" is a armstrong no";
    else
    cout<<num<<" is not a armstrong no";

}
