#include <iostream>
#include <map>
using namespace std;
map<int,int>mp;
int main()
{
	int n,q,a,s;
	cin>>n>>q;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		mp[a]++;
	}
	while(q--)
	{
		cin>>a;
		int w=0;
		for(int i=1<<30;i>=1;i/=2)
        {
            s=min(mp[i],a/i);//sΪi�ĸ��� 
			w+=s;//wΪ�ﵽa��ֵʱ����Ҫ��Ӳ���� 
			a-=s*i;
		}
		if(a) w=-1;
		cout<<w<<endl;
	}
}
