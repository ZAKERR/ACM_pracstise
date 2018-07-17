#include <iostream>
using namespace std;
int main()
{
	int a,b,x,n;
	char u='0',v='1';
	cin>>a>>b>>x;
	n=a+b;
	if(a<=b)
	{
		u='1';
		v='0';
		swap(a,b);
	}
	for(int i=0;i<x/2;i++)
	{
		cout<<u<<v;
		a--;
		b--;
	}
	if(x%2==0)
	{
		while(b--)
			cout<<v;
		while(a--)
			cout<<u;
	}
	else
	{
		while(a--)
			cout<<u;
		while(b--)
			cout<<v;
	}
	return 0;
} 
