#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
  int n,i=1,k=1;
  cin>>n;
  int prev,curr;
  
  bool isdec=true;
  cin>>prev;
  while(i<n)
  {
    cin>>curr;
    if(prev==curr)
    {
      cout<<"false";
    exit(-1);
    }
    else if(curr<prev)
    {
      if(!isdec)
        k=0;
    }
    else
    {
      if(isdec)
        k=0;
    }
    i++;
  }
  if(k==0)
    cout<<"false";
  else
    cout<<"true";
}
