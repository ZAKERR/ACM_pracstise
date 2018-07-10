/*
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int a,b,x,res;




int main(){

    string str ="";
    cin >> a >> b >> x;

    if(a > b){
        res = b;
        for(int i = 0 ; i < a ;i++){
            str = '0'+str;
        }

        if( (a+1) < x/2 ) str.insert(0,"1");
        else {
        res -= x/2;
        for(int i = 0 ; i < res ; i++){
            str = str + '1';
        }

        }


        for(int i = 1,k = 1; k <= x/2 ;i += 2,k++){
            str.insert(i,"1");
        }
    }

    else{

         res = a ;
        for(int i = 0 ; i < b ;i++){
            str = '1'+str;
        }

         if( (b+1) < x/2 ) str.insert(0,"0");
         else{
            res -= x/2;
            for(int i = 0 ; i < res ; i++){
                str = str + '0';
            }

         }


        for(int i = 1,k = 1; k <= x/2 ;i += 2,k++){
            str.insert(i,"0");
        }

    }

    cout << str << endl;
}


#include <iostream>
using namespace std;
int main(){
    int a[2],x,now;
    cin>>a[0]>>a[1]>>x;
    if(a[0]>a[1]){
        if(x%2==0){
            now = 0;
        }else {
            now = 1;
        }
        for (int i=0;i<x;i++){
            cout<<now;
            a[now]--;
            now ^= 1;
        }
        for (int i=0;i<a[1];i++){
            cout << 1;
        }
        for (int i=0;i<a[0];i++){
            cout << 0;
        }
    }else{
        if(x%2==0){
            now = 1;
        }else {
            now = 0;
        }
        for (int i=0;i<x;i++){
            cout<<now;
            a[now]--;
            now ^= 1;
        }
        for (int i=0;i<a[0];i++){
            cout << 0;
        }
        for (int i=0;i<a[1];i++){
            cout << 1;
        }
    }
}
*/



#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int a,b,x,neednum,pos;

int main(){

    string str ="" ,sa = "0",sb = "1";
    cin >> a >> b >> x;

        if(a < b){  swap(a,b);  sa = "1",sb = "0";  }

        for(int i = 0 ; i < a ;i++){
            str = sa +str;
        }
        neednum = x/2;
        if(x % 2 != 0) {pos = 0;}
        else{ pos = 1; neednum--;}
        while(b - neednum > 0){
                str.insert(pos,sb);
                pos++,b--;
              }
        pos += 1;

        for(int i = pos, num = 0 ;num < neednum ; num++,i += 2){
            str.insert(i,sb);
        }

    cout << str << endl;
}
