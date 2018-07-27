#include <iostream>
using namespace std;
int main()
{
	int ans=0,a;
	cin>>a;
	ans=a/100;
	a%=100;
	ans+=a/20;
	a%=20;
	ans+=a/10;
	a%=10;
	ans+=a/5;
	a%=5;
	ans+=a;
	cout<<ans;
}
