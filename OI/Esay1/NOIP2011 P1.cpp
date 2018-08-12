/*
#include <iostream>
using namespace std;

int main(){
  int n,s = 0;
  cin >> n;
  if(n < 0 ) { cout << "-";  n *= -1;}
  while(n){
     if( n % 10 != 0) s = 1;
     if(s) cout << n%10;
     n /= 10;
  }
}
*/

#include <iostream>
using namespace std;
int main(){
    int n,res= 0;
    cin >> n;
    while(n){
        res = res*10 + n%10;
        n/= 10;
    }
    cout << res ;
}
