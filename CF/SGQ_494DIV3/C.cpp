#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n,m,q[5010];
	double w=0,s=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>q[i];
	for(int i=1;i<=n;i++)
	{
		w=0;
		for(int j=i;j<=n;j++)
		{
			w+=q[j];
			if(j-i+1==m&&i==1)
			{
				s=w/(j-i+1);
			}
			else if(j-i+1>m||(j-i+1>=m&&i>1))
			{
				s=max(s,w/(j-i+1));
			}
		}
	}
	printf("%.15f",s);
}
