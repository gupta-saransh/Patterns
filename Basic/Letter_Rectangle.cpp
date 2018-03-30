#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	
	char i,n,j;
	
		cout<<"Please enter character to print pattern"<<endl;
		cin>>n;
	for(i='A';i<=n;i++)
	{
		for(j='A';j<=n;j++)
		cout<<j;
		cout<<endl;
	}
	
	
	return 0;
}

/* Sample Output
Please enter number to print pattern
E
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE
*/
