#include <iostream>
#include <cstdio>
#include <set>
#define LL long long

using namespace std;
const int mmax = 50+1;
LL dp[mmax];

LL Force(int num){

   set<LL> vis;
   vis.clear();
   LL tp,ans = 0;
   for(int i = 0 ; i <= num ;i++){
      for(int j = 0 ; j + i <= num ;j++){
         for(int k = 0 ; k + j + i <= num ;k++){
               tp = i + j*5 + k*10 + (num-i-j-k)*50;
               if(vis.count(tp) == 0){
                   vis.insert(tp);
                   ans++;
               }
         }
      }
   }
     return ans ;
}

int main()
{
    LL n ;
    cin >> n;
    for(int i = 1 ; i <= 20 ; i++){
        dp[i] = Force(i);
    }

    if(n <= 20) cout << dp[n] << endl;
    else  cout << dp[20]+(n-20)*49 << endl;;

    return 0;
}
