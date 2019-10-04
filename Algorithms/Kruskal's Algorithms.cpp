#include <iostream>
#include<algorithm>
using namespace std;

class edges{
  int s,d,w;
};
bool compareEdges(edges i1,edges i2){
  return (i1.w<i2.w);
}
int main()
{
 /* int V, E, tempX, tempY;
  cin >> V >> E;*/

  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to Print the output yourself
	 
  */
int n,e;
  cin>>n>>e;
  edges input[e];
  edges output[n-1];
  int parents[n];
  for(int i=0;i<n;i++)
    parents[i]=i;
  
  //Taking Input
  for(int i=0;i<e;i++){
    cin>>input[i].s;
    cin>>input[i].d;
    cin>>input[i].w;
  }
  
  //Sorting input[]
   sort(input,input+e,compareEdges);
  
  //Algorithm
  int count=0,i=0;
  while(count<n-1){
    //Finding source parent
    int p1=parents[input[i].s];
    while(parents[p1]!=p1)
      p1=parents[p1];
    //Finding destination parents
    int p2=parents[input[i].d];
    while(parents[p2]!=p2)
      p2=parents[p2];
    //If parents are same
    if(p1==p2){
      i++;
      continue;
    }
    
    output[count].s=input[i].s;
    output[count].d=input[i].d;
    output[count].w=input[i].w;
    
    count++;i++;
  }
  
  //Printing output
  for(int i=0;i<n-1;i++){
    if(output[i].s<=output[i].d)
      cout<<output[i].s<<" "<<output[i].d<<" ";
    else
      cout<<output[i].d<<" "<<output[i].s<<" ";
    cout<<output[i].w<<endl;
  }
  return 0;
}

