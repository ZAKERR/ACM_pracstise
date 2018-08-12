#include <iostream>
#include <cstring>

using namespace std;
//±©Á¦Ã¶¾Ù
bool s[2000000+2];
int main(){
     int n,t;
     double d;
     cin >> n;
     for(int i = 0 ; i < n ;i++){
        cin >> d >> t;
        for(int k = 1 ; k <= t; k++){
             int id = k*d;
             s[id] = !s[id];
        }
     }
     for(int i = 1 ; i <= 2000000 ;i++){
         if(s[i] == 1){  cout << i; break;}
     }
}
