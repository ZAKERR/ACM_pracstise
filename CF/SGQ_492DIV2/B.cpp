#include <iostream>
using namespace std;
int main()
{
	int n,i,a,d=1000000000,ans;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		if(d>(a-i+n)/n)
	 	{
	 		d=(a-i+n)/n;
	 		ans=i;
		}
	}
	cout<<ans;
}
