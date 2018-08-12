#include <iostream>
#include <cstdio>

using namespace std;

int main(){

   int a[3],b[3],f,ans;
   cin >> a[0] >> a[1] >> a[2];
   cin >> b[0] >> b[1] >> b[2];
   ans += min(a[2],b[0]);
   for(int i = 0 ; i < 2 ; i++){
     ans += min(a[i],b[i+1]);
   }
   cout << ans << endl;
}
