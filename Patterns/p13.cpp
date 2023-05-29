#include<iostream>
using namespace std;

//pattern
/*
n=3
A B C 
D E F
G H I
*/
int main(){
  int n;
  cin>>n;

  int row = 1;char ch = 'A';
  while(row<=n){
    int col = 1;
    while(col<=n){
      cout<<ch<<" ";
      col += 1;ch += 1;
    }cout<<endl;
    row += 1;
  }
}