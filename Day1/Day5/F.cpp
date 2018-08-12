
#include <iostream>
#include <cstdio>
#define LL long long
using namespace std;

LL kpow(LL a,LL b){
     LL res = 1;
     while(b){
         if(b & 1) res *= a;
          a *= a;
          b >>= 1;
     }
     return res;
}

LL n,d,ans;

LL  dfs(LL nd){
    if( 0 >= nd-1-d)  return nd;
    return dfs(nd-d-1) + dfs(nd-1)+1;
}
int main(){

   cin >> n >> d;
   ans = kpow(2,n-1)-1;
   if(n-1-d > 0 ) ans -= dfs(n-1-d);
   cout << ans ;
}



/*
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
typedef long long ll;
ll cache[101];
int n,d;
ll fpow(ll x,ll n)
{
	ll ret=1;
	while(n)
	{
		if(n&1)ret=ret*x;
		x=x*x;
		n>>=1;
	}
	return ret;
}
ll dfs(int need)
{
	//printf("need=%d\n",need);
	if(need<=0)return 0;
	if(cache[need]!=-1)return cache[need];
	ll ret=1;
	if(need-d-1>0)ret+=dfs(need-1)+dfs(need-1-d);
	else ret+=dfs(need-1);
	cache[need]=ret;
	return ret;
}
int main()
{
	scanf("%d%d",&n,&d);
	memset(cache,-1,sizeof(cache));
	if(n==0||d==0){printf("0\n");return 0;}
	ll base=fpow(2,n-1)-1;
	//printf("%lld\n",fpow(2,n-1));
	//ll tmp=n-d,ans1=0;
	ll tmp2=dfs(n-1-d);
	//printf("%d\n",tmp2);
	base-=tmp2;
	printf("%lld\n",base);
	return 0;
}
*/
