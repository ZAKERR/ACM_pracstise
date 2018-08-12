#include <iostream>
#include <queue>
#include <vector>
#define LL long long
#define MIN(x,y) ((x)>(y)?(y):(x))
#define MAX(x,y) ((x)>(y)?(x):(y))
using namespace std;

void generate_array(int a[], int n, int m, int seed) {
    unsigned x = seed;
    for (int i = 0; i < n; ++i) {
        x ^= x << 13;
        x ^= x >> 17;
        x ^= x << 5;
        a[i] = x % m + 1;
    }
}

const int mmax = 1e7+5;
int seq[mmax];

int main(){
   LL mx,d;
   priority_queue<LL, vector<LL>, greater<LL> > q;
   int n,m,seed;
   cin >> n >> m >> seed;
   generate_array(seq,n,m,seed);

   for(int i = 0 ; i < n ; i++){
       q.push(seq[i]);
   }

   for(int i = 0 ; i < n-1 ; i++){
       if(q.size() < 2)  break;
       LL x = q.top(),k = 2; q.pop();
       LL y = q.top();q.pop();
       d = MAX(y,MIN(x,y)*k);
       q.push(d);
   }
   cout << q.top() << endl;

}
