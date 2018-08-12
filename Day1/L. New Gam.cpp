#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
#include <cmath>
#include <cstring>
using namespace std;

const int mmax = 1e6+5;

struct Node{
     int to;
     double val;
};

vector<Node> h[1005];
int cir_x[1005],cir_y[1005],cir_r[1005],bk[10005];
double dis[1005];
int n,a,b,c1,c2;
void dijistra(){
       int v;   //通过v点进行松弛

       for(int i = 0 ; i <= n+1 ;i++) dis[i] = 0x3f3f3f3f;
       memset(bk,0,sizeof(bk));
       bk[0] = 1;
       dis[0] = 0;
       for(vector<Node>::iterator k = h[0].begin(); k != h[0].end();k++){
             dis[k->to] = k->val;
       }

       for(int i = 0 ; i <= n ; i++){

           double ev = 0x3f3f3f3f;
           for(int j = 1 ; j <= n+1 ; j++){
               if(bk[j] == 0 && dis[j] < ev){
                   ev = dis[j];
                   v = j;
               }
           }
           bk[v] = 1;
           for(vector<Node>::iterator k = h[v].begin(); k != h[v].end();k++ ){
                int to = k->to;
                if(dis[to] > (dis[v]+k->val) ) dis[to]=(dis[v] + k->val);
           }

       }
}


int main(){
     ios::sync_with_stdio(false);
     cin.tie(0);
     cin >> n >> a >> b >> c1 >> c2;

     for(int i = 1 ; i <= n ; i++){
        cin >>cir_x[i] >> cir_y[i] >> cir_r[i];
     }

     for(int i = 1 ; i <= n ;i++){
        double r = 0 ;
        if((a*cir_x[i]+b*cir_y[i]+c1)*(a*cir_x[i]+b*cir_y[i]+c1)*1.0/(a*a+b*b) > cir_r[i] * cir_r[i])
           r = sqrt((a*cir_x[i]+b*cir_y[i]+c1)*(a*cir_x[i]+b*cir_y[i]+c1)*1.0/(a*a+b*b))-cir_r[i];

           h[0].push_back(Node{i,r});
           h[i].push_back(Node{0,r});

     }

     for(int i = 1 ; i <= n ;i++){
        double r = 0 ;
        if((a*cir_x[i]+b*cir_y[i]+c2)*(a*cir_x[i]+b*cir_y[i]+c2)*1.0/(a*a+b*b) > cir_r[i]*cir_r[i])
           r = sqrt((a*cir_x[i]+b*cir_y[i]+c2)*(a*cir_x[i]+b*cir_y[i]+c2)*1.0/(a*a+b*b))-cir_r[i];

           h[n+1].push_back(Node{i,r});
           h[i].push_back(Node{n+1,r});

     }

     for(int i = 1 ; i <= n ;i++){
        for(int j = i+1 ; j <= n ; j++){
             double r = 0 ;
             if((cir_y[j]-cir_y[i])*(cir_y[j]-cir_y[i])+(cir_x[j]-cir_x[i])*(cir_x[j]-cir_x[i]) >= (cir_r[i]+cir_r[j]) * (cir_r[i]+cir_r[j]))
             r = sqrt((cir_y[j]-cir_y[i])*(cir_y[j]-cir_y[i])+(cir_x[j]-cir_x[i])*(cir_x[j]-cir_x[i])*1.0)-(cir_r[i]+cir_r[j]);
             h[i].push_back(Node{j,r});
             h[j].push_back(Node{i,r});
        }
     }
   /*
     for(int i = 0 ; i <= n ;i++){
        for(vector<Node>::iterator k = h[i].begin(); k != h[i].end();k++ ){
            cout << i << " ---->  " << k->to << " ----" << k->val << endl;
        }
     }
   */
     dijistra();
     cout << dis[n+1] <<endl;
}
