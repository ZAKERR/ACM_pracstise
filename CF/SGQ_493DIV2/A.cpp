#include <bits/stdc++.h>
using namespace std;
int n,a=1001,q,sum,t;
int main()
{
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>t;
		sum+=t;
		if(t<a)
		{
			q=i;
			a=t;
		}
	}
	if(sum-a<=a)
		cout<<-1<<endl;
	else
	{
		cout<<1<<endl;
		cout<<q;
	}
	
}
