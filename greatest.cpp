#include<iostream>
using namespace std;
int great (int a,int b,int c)
{
int max;
    if(a>b)
    {
       if(a>c)
       {
        max=a;
       }
       else
       {
        max=c;
       }
    }
    else
    {

       if(b>c)
       {
        max=b;
       }
       else
       {
        max=c;
       }
    }
    return max;

}
int main()
{
int a,b,c,d;
cout<<"enter 3 numbers :";
cin>>a>>b>>c;

d=great(a,b,c);
cout<<"Greatest is "<<d;
return 0;

}
