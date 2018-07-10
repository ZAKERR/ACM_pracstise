#include <iostream>
#include <cstdio>
#include <cstring>
#define LL long long

const int Mobj = 1e2+5;
const int Mbox = 10+5;
LL ans[Mobj][Mbox];

using namespace std;

LL Solution1(LL obj ,LL box){   //递归算法

     if( obj < box || obj == 0) return 0;
     if( box == obj )return 1;

     return Solution1(obj-1,box-1)+box*Solution1(obj-1,box);
}

LL Solution2(LL obj ,LL box){  //记忆化递归算法

      if(ans[obj][box] != -1) return ans[obj][box];

      if(obj < box || obj == 0 ) return ans[obj][box] = 0 ;
      if(box == obj || box == 1) return ans[obj][box] = 1;

      return (ans[obj][box] = Solution2(obj-1,box-1)+box*Solution2(obj-1,box) );
}


LL Solution3(LL obj,LL box){   //记忆化递归算法

     if(ans[obj][box] != -1) return ans[obj][box];

     if(obj < box || obj == 0 )  ans[obj][box] = 0 ;
     else if(box == 1 || box == obj) ans[obj][box] = 1;
     else ans[obj][box] = Solution3(obj-1,box-1)+box*Solution3(obj-1,box);

     return ans[obj][box];
}


int main(){

   LL obj,box;
   cin >> obj >> box;
   /*
   cout << Solution1(obj,box);
   */

   /*
   memset(ans,-1,sizeof(ans));
   cout << Solution2(obj,box) << endl;

   */

    memset(ans,-1,sizeof(ans));
   cout << Solution3(obj,box) << endl;


}
