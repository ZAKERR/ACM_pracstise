/*
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool hw(string s){

    string ss = s;
    reverse(ss.begin(),ss.end());
    return ss == s;
}

int main()
{
       string s,tl = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
       //cout << tl.length() << endl;
       while(cin >> s){
            int lev = 0 ,sg = true,len = s.length();
            string ss = s;

            if(hw(s)) lev = 1;

            for(int i = 0 ; i < len ;i++){
                int idex = 0;
                if(s[i] >= '0' && s[i] <= '9') {  idex = 26 + s[i] - '1' ;}
                else {   idex = s[i] - 'A' ; }
                ss[i] = tl[idex];
            }
            reverse(ss.begin(),ss.end());
            if( ss == s){ lev += 2;  }

            if( lev == 0)  cout << s << " -- is not a palindrome." << endl <<endl;
            else if(lev == 1) cout << s << " -- is a regular palindrome." << endl <<endl;
            else if(lev == 2) cout << s << " -- is a mirrored string." << endl <<endl;
            else cout << s << " -- is a mirrored palindrome." << endl <<endl;

       }
}
*/
#include <iostream>
#include <cstdio>

using namespace std;
char al[] = "A***3**HIL*JM*O***2TUVWXY5";
char num[] = "1SE*Z**8*";

char mirchar(char c){
    if(isdigit(c)) return num[c-'1'];
    return al[c-'A'];
}
int main()
{
       string s;
       //cout << tl.length() << endl;
       while(cin >> s){

        int hw = 1 ;
        int mir = 1;
        int len = s.length();

        for(int i = 0 ; i <= len/2 ; i++){
            if(s[i] != s[len-1-i]) hw = 0 ;
            if(mirchar(s[i]) != s[len-1-i] ) mir = 0 ;   //镜像注意中间的要特判
        }

        if( !hw && !mir)  cout << s << " -- is not a palindrome." << endl <<endl;
        else if(hw && !mir) cout << s << " -- is a regular palindrome." << endl <<endl;
        else if( !hw && mir) cout << s << " -- is a mirrored string." << endl <<endl;
        else cout << s << " -- is a mirrored palindrome." << endl <<endl;
       }
}
