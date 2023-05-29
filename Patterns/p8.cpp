#include<iostream>
using namespace std;

//pattern
/*
n=4
1
2 3 
4 5 6
7 8 9 10
*/
int main(){
  int n;
  cin>>n;

  int row = 1, cnt = 1;

  while(row<=n){
    int col = 1;
    while(col<=row){
      cout<<cnt<<" ";
      col += 1;cnt += 1;
    }cout<<endl;
    row += 1;
  }
}