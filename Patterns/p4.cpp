#include<iostream>
using namespace std;

//pattern
/*
n=4
4 3 2 1 
4 3 2 1 
4 3 2 1 
4 3 2 1 
*/
int main(){
  int n;
  cin>>n;

  int row = 1;

  while(row<=n){
    int col = 1;
    while(col<=n){
      cout<<n-col+1<<" ";
      col += 1;
    }cout<<endl;
    row += 1;
  }
}