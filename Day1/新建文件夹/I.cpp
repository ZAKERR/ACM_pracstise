#include <iostream>
#include <cstdio>
#define LL long long
using namespace std;

const int mod = 998244353;

LL power(LL base, LL exp)
{
	LL  result = 1;
	while (exp)
	{
		if (exp & 1) result = (result*base)%mod;
		base *= base;
		exp >>= 1;
	}

	return result;
}

LL cn2(LL n)
{
	LL x = (1 << n) + 1;
	LL mask = (1 << n) - 1;

	return ((power(x, n) >> ((n >> 1) * n)) & mask )%mod;
}

LL factorial(LL n)
{
	LL temp;

	if (n == 1)
		return 1;
	else if (n & 1 == 1)
		return (n * factorial(n - 1))%mod;
	else
	{
		temp = (factorial(n >> 1))%mod;
		return (cn2(n) * temp * temp)%mod;
	}
}

int main(){

   LL ans = 0,d ,n,res = 1;
   cin >> n;

   for(int i = 1 ; i <= n ;i++){
       cin >> d;
       res += d;
   }

   cout << factorial(res) << endl;
   cout << "----";

   ans = 1;
   while(res){
       ans = (ans * res)%mod;
       res--;
   }

   cout << ans << endl;
}
