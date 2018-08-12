#include <iostream>
#include <algorithm>
using namespace std;
int a[1010][1010],n;





int main()
{
    freopen("1.txt","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n = 0 ;
	while(n <= 1000){
        n += 2;


      /*
		for(int j = 0;j < n;j++)
		{
		    int k = 0 ,g = n+1-j,h = 1;
			while( k < j ) { a[k][j] = g++; k++;}
			while( k < n) { a[k][j] = h++; k++;}
		}

       bool s = true;

       for(int i = 0 ; i < n ; i++){
         for(int j = 0 ; j < n ;j++){
            if(a[i][j] == a[j][i] && i != j) s = false;
         }
       }

       if(s == false)  cout << n <<endl;
        */
	}

}
