#include <iostream>
using namespace std;
int a[101]={};
int main()
{
	int n,s,q=-1;
	cin>>n;
	while(n--)
	{
		cin>>s;
		a[s]++;
	}
	for(int i=1;i<=100;i++)
		if(a[i]>q)
			q=a[i];
	cout<<q;
}
