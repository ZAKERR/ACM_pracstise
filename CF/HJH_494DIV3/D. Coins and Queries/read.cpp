#include <iostream>
#include <cstdio>
#include <ctime>
#define MZ 30
#define FJJJ (rand()%10)
using namespace std;

int main(){
   srand((unsigned)time(NULL));
   freopen("in10.txt","w",stdout);
   int n,m;
   cin >> n >> m;
   cout << n << " " << m <<endl;
   for(int i = 0 ; i < n ; i++){
        cout << (1<<(rand()%MZ)) << " ";
   }
   cout << endl;

   for(int i = 0 ; i < m ;i++){
       cout << 10000000*FJJJ+ 1000000*FJJJ + 100000 * FJJJ + 1000*FJJJ + 100*FJJJ + 10*FJJJ  +  FJJJ << endl;
   }


}
