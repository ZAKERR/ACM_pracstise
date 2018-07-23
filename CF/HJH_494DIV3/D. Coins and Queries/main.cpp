/*版本一：直接把数分解为对应的二进制,比较复杂


#include <cstdio>
#include <iostream>
#include <string>
#define LL long long
using namespace std;

const int mmax = 11;
int bit[mmax],n,td,q;

void tobit(LL val){
    int k = -1 ;
    while(val){
        k++;
        val /= 2;
    }
    bit[k]++;
}

int solve(LL d){
   LL num = 0;  //需要多少个硬币
   int k = -1,dbit[mmax];

   while(d){
      k++;
      if(d % 2 == 1) dbit[k] = 1;
      else           dbit[k] = 0;
      d /= 2;
   }

   while(k >= 1){
      if(bit[k] > dbit[k] ) num += dbit[k];
      else dbit[k-1] += dbit[k]*2;
      k--;
   }

   return (bit[0] > dbit[0])? (num+dbit[0]):-1 ;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> q;
    for(int i = 1 ; i <= n ;i++){
        cin >> td;
        tobit(td);
    }

    for(int j = 1 ; j <= q; j++){
        cin >> td;
        cout << solve(td) << endl;
    }
}
*/


// 版本2 贪心加暴力枚举


#include <iostream>
#include <map>

using namespace std;
map<int,int> mp;

int main(){
     freopen("in10.txt","r",stdin);
     freopen("out10.txt","w",stdout);
     int n,q,val,d;
     cin >> n >> q;
     for(int i = 0 ; i < n ;i++){
        cin >> d;
        mp[d]++;
     }

     while(q--){
         int ans = 0, x ; //  x代表需要多少个当前的硬币
         cin >> val;
         for(int i = 30 ; i >= 0 ; i--){
              x = min( mp[1<<i],val/(1<<i)) ;//需要面值为2^(i)硬币多少个
              ans += x;
              val -= x*(1<<i);
         }
         if( val ) cout << "-1" << endl;
         else      cout << ans << endl;
     }
}


