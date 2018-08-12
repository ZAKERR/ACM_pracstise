#include <iostream>
using namespace std;
int main()
{
	long long a,s,d,w=0;
	string q;
	cin>>a>>s>>d>>q;
	if(q[0]=='0'&&a==1)
		w++;
	for(int i=0;i<a-1;i++)
	{
		if(q[i]=='0'&&q[i]!=q[i+1])
			w++;
		if(q[i]=='0'&&q[i]==q[i+1]&&i==a-2)
			w++;
		if(q[i]=='1'&&q[i]!=q[i+1]&&i==a-2)
			w++;
	}
	if(w)
		cout<<(long long)min((w-1)*s+d,w*d);
	else
		cout<<0;
}
