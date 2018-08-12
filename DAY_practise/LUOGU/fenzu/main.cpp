#include <iostream>
#include <cstdio>
#include <algorithm>
#define LL long long
using namespace std;
const int mmax = 1e5+5;

int n;
LL seq[mmax];

bool check(LL gs){

   LL cnt = 1; //cnt统计当前分组的人数
   for(int i = 1 ; i < n ; i++){
        if( seq[i] != seq[i-1]+1 || cnt == gs && i != n-1 ) {
                if(cnt < gs) return false;
                cnt = 1;
        }
        else {cnt++;}
   }
   if(cnt < gs) return false;
   else         return true;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> seq[i];
    }

    sort(seq,seq+n);

    int l = 0 , r = 1e6+5;
    while( r > l){
        int mid = (l+r) >> 1;
        if(check(mid)) l = mid+1;
        else r = mid;
    }

    cout << l-1 << endl;
}
