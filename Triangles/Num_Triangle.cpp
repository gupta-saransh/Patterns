#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
	int i,n,j;
	
		cout<<"Please enter number to print pattern"<<endl;
		cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		cout<<j;
		cout<<endl;
	}
	
	
	return 0;
}

/* Sample Output
Please enter number to print pattern
5
1
12
123
1234
12345
*/
