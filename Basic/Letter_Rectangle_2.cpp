#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
	char i,n,j;
	
		cout<<"Please enter number to print pattern"<<endl;
		cin>>n;
	for(i='A';i<=n;i++)
	{
		for(j=n;j>='A';j--)
		cout<<i;
		cout<<endl;
	}
	
	
	return 0;
}

/* Sample Output
Please enter number to print pattern
5
12345
12345
12345
12345
12345
*/
