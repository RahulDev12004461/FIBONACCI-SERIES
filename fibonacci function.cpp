//fibonacci series 
#include<iostream>
using namespace std;
void fibonacci(int n)
{
	int x=1;
	int y=2;
	cout<<x<<" "<<y<<" ";
	for(int i=1;i<=n;i++)
	{
		int nextnumber=x+y;
		cout<<nextnumber<<" ";
		x=y;
		y=nextnumber;
	}
}
main()
{
	int n;
	cin>>n;
    fibonacci(n);
}
