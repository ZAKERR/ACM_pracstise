#include <iostream>
#include <cstdio>

using namespace std;

const int mmax = 1e3;
int num[mmax];
int main(){

    int n,d,mx=0; //³õÊ¼»¯
    cin >> n ;
    for(int i = 1 ; i <= n ;i++){
        cin >> d;
        num[d]++;
        if(num[d] > mx) mx = num[d];
    }

   cout << mx << endl;

}
