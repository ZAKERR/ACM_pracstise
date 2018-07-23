#include <bits/stdc++.h>
using namespace std;
const int mmax = 4*1e5+10;

int id,n,dia,k,dg[mmax],af,pt; //af     ansflag
vector< pair<int,int> > Edge;

void dfs(int u ,int dep, int mxdep){

     if(dep == mxdep ) return;
     for(int i = 0 ; i < k - 1 -(dep == 0)  &&  id <= n ;i++){
            if(id+1 <= n){
                 Edge.push_back(make_pair(u,++id));
                 dg[u]++,dg[id]++;
                 dfs(id,dep+1,mxdep);
            }
            else return ;
     }
}

int main(){
    af = 1;
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> dia >> k;
    pt = dia+1;
    if( pt > n )   cout << "NO" << endl;  //需要的点大于现在拥有的点
    else{
        for(int i = 1 ; i <= dia ; i++)  {  Edge.push_back(make_pair(i,i+1)); dg[i]++,dg[i+1]++; }
        id = pt;
        for(int i = 2 ; i <= pt-1 ; i++ ) { dfs(i,0,min(i-1,pt-i));}
        for(int i = 1 ; i <= pt ; i++)  if(dg[i] > k ) af = 0;
        if(af == 0 || id < n ) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            for(auto i : Edge) {  cout << i.first << " " << i.second << endl; }
        }
    }

}

