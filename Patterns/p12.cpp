#include<iostream>
using namespace std;

//pattern
/*
n=4
A B C D
A B C D
A B C D
A B C D
*/
int main(){
  int n;
  cin>>n;

  int row = 1;
  while(row<=n){
    int col = 1;
    while(col<=n){
      char ch = 'A' + col - 1;
      cout<<ch<<" ";
      col += 1;
    }cout<<endl;
    row += 1;
  }
}