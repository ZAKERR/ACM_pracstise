#include <iostream>
#include <cstring>
#include <cstdio>
/*
暴力即AC
*/
using namespace std;
const int mmax =5*1e3+100;
int n,k,seq[mmax];
double mx = 0,tx,sum;
int main(){

   cin >> n >> k;

   for(int i = 1 ; i <= n ;i++){
       cin >> seq[i];
   }

   for(int i = 1 ; i <= n ; i++){
       sum = 0;
       for(int j = i; j <= n ;j++){
            sum += seq[j];
            if( (j-i+1) >= k ){
                 tx = sum/(j-i+1);
                 if(tx > mx) { mx = tx;}
            }
       }
   }
   printf("%.12lf",mx);
}
