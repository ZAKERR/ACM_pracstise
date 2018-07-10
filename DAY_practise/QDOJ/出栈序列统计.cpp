#include <iostream>
#include <cstdio>
#include <cstring>
#define LL long long

using namespace std;

LL ans;
int n;


const int Mrow = 1e3+5;
const int Mcol = 1e3+5;
LL dp[Mrow][Mcol]; //dp[i][j]代表出现从点A(i,j)达到点K(n,n);

LL Mdfs(int push,int pop){

     if(dp[push][pop] != -1) return dp[push][pop];

     if(pop > push || push > n || pop > n ) dp[push][pop] = 0 ;
     else if(pop == n && push == n ) dp[push][pop] = 1;
     else dp[push][pop] = Mdfs(push+1,pop)+Mdfs(push,pop+1);
     return dp[push][pop];
}



void dfsnum(int push ,int pop){
     if(push > n) return ;
     if(pop > push) return ;
     if(pop == n && push == n) { ans++; return ;}
     dfsnum(push+1,pop);
     dfsnum(push,pop+1);
}


int main(){

    cin >> n;
    /*
    cout << "爆搜 :" << endl;
    dfsnum(0,0);
    cout << ans << endl;
    */

    //cout << "记忆化搜索" << endl;
    memset(dp,-1,sizeof(dp));
    Mdfs(0,0);
    cout << dp[0][0] << endl;

}
