#include <iostream>
#include <cstdio>
#define LL long long

using namespace std;

const int mmax = 1e6+5;
int seq[mmax],n,k;

struct Node{
  int val,id;
}q[mmax];

void single_queue(int sg){    //sg代表单调性

   int fir = 1 , las = 1;
   for(int i = 1 ; i <= n ; i++){
       if(sg < 0)  { while(las > fir && q[las-1].val <= seq[i] ) las--; }     //维护递减}
       if(sg > 0)  { while(las > fir && q[las-1].val >= seq[i] ) las--;  }   //维护递增
       q[las++] = Node{seq[i],i};
       while(las > fir && (i - q[fir].id + 1 ) > k)  fir++;
       if(i >= k)   printf("%d ",q[fir].val);
   }
   cout << endl;
}

int main(){
   cin >> n >> k;

   for(int i = 1 ; i <= n ; i++){
     cin >> seq[i];
   }
   single_queue(1);
   single_queue(-1);


}



/*
	Author : wawcac
	Url : https://www.cnblogs.com/wawcac-blog/p/6986710.html
	Language: C++

#include<stdio.h>
#include<string.h>
int a[1000010]={0},n,k;
int q[1000010]={0},l=1,r=1;

int main()
{
    scanf("%d%d",&n,&k);
    l=1,r=1;memset(q,0,sizeof(q));
    for(int i=1;i<=n;i++) scanf("%d",a+i);
    for(int i=1;i<=n;i++)
    {
        while(l<r&&a[q[r-1]]>a[i]) r--;
        q[r++]=i;
        while(l<r&&q[l]<=i-k) l++;
        if(i>=k) printf("%d ",a[q[l]]);
    }
    printf("\n");
    l=1,r=1;memset(q,0,sizeof(q));
    for(int i=1;i<=n;i++)
    {
        while(l<r&&a[q[r-1]]<a[i]) r--;
        q[r++]=i;
        while(l<r&&q[l]<=i-k) l++;
        if(i>=k) printf("%d ",a[q[l]]);
    }
    printf("\n");
    return 0;
}
*/
