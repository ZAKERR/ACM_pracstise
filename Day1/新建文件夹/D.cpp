/*
#include <iostream>
#include <algorithm>
#include <cstdio>
#define LL long long
using namespace std;

const int mmax = 1e5+5;
struct Node{
    LL val,id;
    bool operator<(const Node &b)const {
      return val <b.val;
    }
}q[mmax];

int f[mmax],cnt;
LL ans;

int ff(int x){
   if(f[x] == 0 ) return x;
   return f[x] = ff(f[x]);
}

void krusal(){

   for(int i = 0;)

}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    int n ;
    cin >> n;

    for(int i = 1 ; i <= n ;i++){
        cin >> q[i].val;
        q[i].id  = i ;
    }

    sort(q+1,q+1+n);

    krusal();

    cout << ans << endl;
}

*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#define LL long long
using namespace std;

const int mmax = 1e5+5;
LL ans = 0,seq[mmax];
int main(){

  int n ;
  cin >> n;
  for(int i = 0 ; i < n ;i++){
    cin >> seq[i];
  }

  sort(seq,seq+n);
  ans = (n-1)*seq[0];
  for(int i = 1 ; i < n ;i++){
    ans += seq[i];
  }

  cout << ans << endl;
}
