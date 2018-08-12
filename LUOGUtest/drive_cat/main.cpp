#include <iostream>
using namespace std;

const int mmax = 1e5*2+10;
int idp[mmax],seq[mmax];
int main()
{
    int n,m,s,d,val;
    cin >> n >> m >> s >> d;
    for(int i = 0 ; i < n ;i++){
        cin >> val;
        seq[val] = 1;
    }
    for(int i = 2; i <= m+1 ;i++){
        idp[i] = seq[i-1]+idp[i-1];
    }

    int rt = 0 , pos = 0;
    while(pos < m){
        rt++;
        if(rt >= s){
            if(idp[pos+d+1] - idp[pos]){

            }
        }
    }
}
