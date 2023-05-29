#include<iostream>
using namespace std;

//pattern
/*
n=3
A 
B C
D E F
*/
int main(){
  int n;
  cin>>n;

  int row = 1;char alpha = 'A';
  while(row<=n){
    int col = 1;
    while(col<=row){
      cout<<alpha<<" ";
      col += 1;alpha += 1;
    }cout<<endl;
    row += 1;
  }
}