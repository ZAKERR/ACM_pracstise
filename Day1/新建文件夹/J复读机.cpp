#include <iostream>
#include <string>

using namespace std;
const int mmax = 1e5+5;
int res[mmax];
int main(){

    string las="*&&&&****&&&&",t;
    int n,id,m;
    cin >> n >> m;

    for(int i = 1 ; i <= m ;i++){
       cin >> id >> t;
       if(t != las) { res[id] = 1;}
       las = t;
    }

    for(int i = 1 ; i <= n ; i++){
        if(res[i] == 0 ){
            cout << i << " ";
        }
    }
}
