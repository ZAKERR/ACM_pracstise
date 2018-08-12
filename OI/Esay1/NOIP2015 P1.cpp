#include <iostream>
#include <string>

using namespace std;
const int mmax = 1e5+5;
struct Per{
  string name;
  int sc,ps,lw,my;
  char bg,xb;
}p[mmax];
int main(){
  string str;
  int n,ts = 0,ms = 0;
  cin >> n;
  for(int i = 1 ; i <= n ;i++){
     cin >> p[i].name >> p[i].sc >> p[i].ps >> p[i].bg >> p[i].xb >> p[i].lw;
     if(p[i].sc > 80 && p[i].lw >= 1) p[i].my += 8000;
     if(p[i].sc > 85 && p[i].ps > 80) p[i].my += 4000;
     if(p[i].sc > 90 ) p[i].my += 2000;
     if(p[i].sc > 85 && p[i].xb == 'Y') p[i].my += 1000;
     if(p[i].ps > 80 && p[i].bg == 'Y') p[i].my += 850;
     if(p[i].my > ms) {
           str = p[i].name;
           ms = p[i].my;
     }
     ts += p[i].my;
  }
   cout << str << endl;
   cout << ms  << endl;
   cout << ts << endl;
}
