#include <iostream>
#include <cstring>
#define LL long long
#define MIN(X,Y) (X)<(Y)?(X):(Y)
#define MAX(X,Y) (X)>(Y)?(X):(Y)
using namespace std;

const int mmax = 5*1e5+10;
char str[mmax] ;
int main(){
    LL n,x,y,sum = 0,pri,ans =0 ;
    cin >> n >> x >> y;
    cin >> str;
    str[n] = '1';

    for(int i = 0 ; i < n ; i++){
       if(str[i] != str[i+1] && str[i] == '0') sum++;
         }
    if(sum == 0 ) { cout << 0 <<ednl; return 0;}
    ans = MIN((sum-1)*x+y,sum*y);
    cout << ans << endl;
}
