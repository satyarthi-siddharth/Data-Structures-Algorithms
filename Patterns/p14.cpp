#include<iostream>
using namespace std;

//pattern
/*
n=3
A B C 
B C D
C D E
*/
int main(){
  int n;
  cin>>n;

  int row = 1;char ch = 'A';
  while(row<=n){
    int col = 1;
    while(col<=n){
      int eq = (row+col-1);
      char alpha = ch + eq - 1;
      cout<<alpha<<" ";
      col += 1;
    }cout<<endl;
    row += 1;
  }
}