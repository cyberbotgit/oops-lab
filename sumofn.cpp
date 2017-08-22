#include<iostream>
using namespace std;

int main()
{
int n,i,sum,a;
cout<<"enter no of numbers :";
cin>>n;

for(i=0;i<n;i++)
{
    cin>>a;
    sum+=a;

}
cout<<"Sum is "<<sum;
return 0;

}

