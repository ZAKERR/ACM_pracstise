/*珠心算测验
地址：https://vijos.org/p/1911
题型:暴力枚举
*/

/*
#include <iostream>
#include <set>
using namespace std;
int main(){
   set<int> q;
   int n,sum = 0,seq[101];
   cin >> n ;
   for(int i = 1 ; i <= n ;i++){
       cin >> seq[i];
       q.insert(seq[i]);
   }

   for(int i = 1 ; i <= n ;i++){
      for(int j = i+1 ; j <= n ;j++){
          if(q.count(seq[i]+seq[j])) {
             sum++;
             q.erase(seq[i]+seq[j]);
          }
      }
   }
    cout << sum <<endl;
}
*/

/*
#include <iostream>
#include <cstring>

using namespace std;
const int mmax = 1e5;
int seq[mmax];
int main(){

   int n,sum = 0 ;
   cin >> n ;
   for(int i = 1 ; i <= n ; i++){ cin >> seq[i] ;}

   for(int k = 1 ; k <= n ;k++){
     for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ;j++)
         if(j != i && k <= n){
             if(seq[i] + seq[j] == seq[k]) {sum++;
             k++;
             i = 1 ;
             j = 1 ;
             }
         }
     }
   }
   cout << sum << endl;
}
*/

#include <iostream>
using namespace std;
int ex[20003],a[101],n,s;
int main(){
    cin >> n;
    for(int i = 1 ; i <= n ;i++){ cin >> a[i] ; ex[a[i]] = 1;}
    for(int i = 1 ; i <= n ;i++){
         for(int j = i+1 ; j <= n ;j++){
            if(ex[a[i]+a[j]]) { s++; ex[a[i]+a[j]] = 0;}
         }
    }
    cout << s ;
}
