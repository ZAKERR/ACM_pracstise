#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
const int mmax = 1e3+5;
bool vis[mmax][mmax];
int dir_x[] = {1,1,-1,-1,2,2,-2,-2};
int dir_y[] = {2,-2,2,-2,1,-1,1,-1};
const int py = 100;
struct Node{
    int x,y,val;
};

void bfs(int n ,int m){

     queue<Node> q;
     q.push(Node{0,0,0});
     vis[0+py][0+py] = 1;
     while(!q.empty()){
        Node t = q.front();
        q.pop();
        for(int i = 0 ; i < 8 ;i++){
            int tx = t.x+dir_x[i], ty = t.y+dir_y[i],val = val+1;
            if(tx == n && ty == m) { cout << n << " " << m  << " : " << t.val <<endl; return ;}
            if(vis[tx][ty] == 0){
                q.push(Node{tx,ty,val});
                vis[tx][ty] = 1;
            }
        }
     }
     cout << n << " " << m  << 0 << endl;
}

int main(){

    int n ,m;
    /*
    for(int i = 1 ; i <= 10 ; i++){
        for(int j = 1 ; j <= 10 ; j++){
             bfs(i,j);
        }
    }
   */

   bfs(1,1);
}
