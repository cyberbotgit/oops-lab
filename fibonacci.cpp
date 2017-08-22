#include<iostream>
using namespace std;

void fib(int n)
{
    int f=0,s=1,nxt;
    cout<<f<<" "<<s<<" ";
    for(int i=2;i<n;i++)
    {

        nxt=f+s;
                f=s;
        s=nxt;

        cout<<nxt<<" ";

    }

}

int main()
{
    int n;
    cout<<"Enter no of terms";
    cin>>n;
      fib(n);
      return 0;
}
