#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a=0,b=1,c=0;
   cin>>n;
  for(int i=1;i<=n;i++)
  {
    if(i==1)
    {
        cout<<a<<", ";
    }
    if(i==2)
    {
        cout<<b<<", ";
    }

    else
    c=a+b;
    a=b;
    b=c;
    cout<<c<<","
  }

    return 0;
}