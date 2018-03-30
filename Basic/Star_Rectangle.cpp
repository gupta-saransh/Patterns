#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
	int i,n,j;
	
		cout<<"Please enter number to print pattern"<<endl;
		cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cout<<"*";
		cout<<endl;
	}
	
	
	return 0;
}
/* Sample Output
Please enter number to print pattern
4
****
****
****
****
*/
