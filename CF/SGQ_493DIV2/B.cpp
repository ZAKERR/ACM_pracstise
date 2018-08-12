#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a,s,ou=0,ji=0,d,l=0,w=0,ans=0;
	int cha[60];
	cin>>a>>s;
	for(int i=0;i<a;i++)
	{
		cin>>d;
		if(d%2==0)
			ou++;
		else
			ji++;
		if(w)
		{
			cha[l++]=abs(d-w);
			w=0;
		}
		if(ji==ou&&ji&&i!=a-1)
			w=d;
	}
	sort(cha,cha+l);
	for(int i=0;i<l;i++)
	{
		s-=cha[i];
		if(s>=0)
			ans++;
	}
	cout<<ans;
}
