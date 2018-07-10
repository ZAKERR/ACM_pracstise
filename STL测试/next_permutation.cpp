#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void OutArrary(int num[],int num_Size){  //只是传了一个指针过来

    for(int i = 0 ; i < num_Size ;i++){
        cout << num[i] << " ";
    }
    cout << endl;
}

void TestArrary(){

    int num[] = {1,2,3,4};
    int num_Size = sizeof(num)/sizeof(int);
    OutArrary(num,num_Size);

    while(next_permutation(num,num+num_Size)){
        OutArrary(num,num_Size);
    }
}

void OutVector(const vector<int> &vnum){

   //vector<int>::iterator it = vnum.begin();  //传参不能带const
   vector<int>::const_iterator it = vnum.begin();

   while(it != vnum.end()){
       cout << *it << " ";
       it++;
   }
   cout <<endl;
}

void TestVector(){

    int num[] = {1,2,3,4};
    int num_Size = sizeof(num)/sizeof(int);

    vector<int> vnum(num,num+num_Size);

        OutVector(vnum);
    while(next_permutation(vnum.begin(),vnum.end())){
        OutVector(vnum);
    }

}

int main(){
  cout << "Arrary输出:" << endl;
  TestArrary();
  cout << "Vector输出:" << endl;
  TestVector();
}
