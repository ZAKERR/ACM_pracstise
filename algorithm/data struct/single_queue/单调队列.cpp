#include <iostream>
#include <cstdio>
#include <queue>
#define LL long long

/*
  https://www.luogu.org/problemnew/show/P1886
*/

const int mmax = 1e6+5;
int seq[mmax];

struct Node{
   int val,id;
}q[mmax];

using namespace std;
int main(){

   int n,m;
   cin >> n >> m;
   for(int i = 1 ; i <= n ; i++){
       cin >> seq[i];
   }

   q[1] = Node{seq[1],1};
   int fir = 1,las = 1;
   for(int i = 2 ; i <= n; i++){
      while(las >= fir && q[las].val <= seq[i]) las--;
      q[++las] = Node{seq[i],i};
      while( las >= fir && (i - q[fir].id + 1) > m ) fir++;
      if(i >= m) cout << q[fir].val << "\n" ;
   }

}
