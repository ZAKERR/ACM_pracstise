#include <iostream>
#include <cstring>

using namespace std;

char c;
int main(){

   bool s = true;
   while( (c = getchar()) != EOF){
        /*
        if(c == '"' && s == false)  {   cout << "``" ; s = true; }
        else if(c == '"' && s == true )  {   cout << "''" ; s = false;}
        else cout << c ;
        */

        if(c == '"') {cout << (s ? "``":"''"); s = !s ;}
        else cout << c;
   }
}
