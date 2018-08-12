#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
const int mmax = 11;
int ccnt[mmax],seq[mmax*10000],scnt[mmax];
int main()
{
    int n , d;
    for(int k = 1 ; cin >> n && n ;k++){
        memset(scnt,0,sizeof scnt);

        for(int i = 0 ; i < n ; i++){
            cin >> seq[i];
            scnt[seq[i]]++;
        }

        cout << "Game " << k << ":" << endl;

        while(1){
            memset(ccnt,0,sizeof ccnt);
            int i = 0,rpos = 0 ,snum = 0;

            for(int i = 0; i < n ; i++){
                 cin >> d;
                 if(d == seq[i]) rpos++;
                 ccnt[d]++;
            }

            if(d == 0 ) break;

            for(int i = 1 ; i <= 9 ; i++){ snum += min(scnt[i],ccnt[i]);}
             printf("    (%d,%d)\n", rpos, snum-rpos);
        }

    }
}

