/*
#include <iostream>
#include <cstdio>
#include <map>
#define LL long long
using namespace std;
const int mmax = 3*1e5+5;
LL g[mmax],s[mmax],dp[mmax],lpos;
int main(){
    cin.tie(0);
    LL n;
    cin >> n;

    for(int i = 1 ; i <= n ;i++){
        cin >> s[i];
    }
    for(int i = 1 ; i <= n ;i++){
        cin >> g[i];
        g[i] += g[i-1];
    }

    map<LL,int> fir; // las[i] = pos 代表值i所在的位置
    dp[0] = 0 ;
    for(LL i = 1 ; i <= n ;i++){
        lpos = fir[s[i]];
        if(lpos == 0)  { fir[s[i]] = i; dp[i] = dp[i-1];}
        if(lpos != 0)  dp[i] = max(dp[i-1],g[i]-g[lpos-1]+dp[lpos-1]);
    }
        cout << dp[n] ;
}
*/

#include <iostream>
#include <cstdio>
#include <map>
#define LL long long
using namespace std;
const int mmax = 3*1e5+5;
LL g[mmax],sum[mmax],dp[mmax],pre[mmax],s[mmax],pos;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n;
    cin >> n;
    map<LL,LL> h; // las[i] = pos 代表值i所在的位置
    for(int i = 1 ; i <= n ;i++){
        cin >> s[i];
        pre[i] = h[s[i]];  //pre[i]代表第i个结点的上一个结点
        h[s[i]] = i;
        cout << i << " --- > " <<  pre[i] << endl;
    }
    for(int i = 1 ; i <= n ;i++){
        cin >> g[i];
        sum[i] = sum[i-1]+g[i];
    }
    dp[0] = 0 ;

    for(int i = 2 ; i <= n ;i++){
        pos = pre[i];
        dp[i] = dp[i-1];
        cout << i << "--- >  "<< pos << endl;
        while(pos) {  dp[i] = max(dp[i-1],g[i]-g[pos-1]+dp[pos-1]) ; pos = pre[pos];}
    }

    for(int i = 1 ; i <= n ;i++)
        cout << dp[i] <<"  " ;
}
