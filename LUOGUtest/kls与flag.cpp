#include <iostream>
#include <map>
#define LL long long
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);
   map<LL,LL> p;
   LL sum = 0,d,n,m;
   cin >> n >> m ;
   for(int i = 1 ; i <= n ;i++){
      cin >> d;
      sum = sum + p[d+i] + p[-d+i];
      p[d+i]++;
      p[-d+i]++;
   }
   cout << sum <<endl;
}
