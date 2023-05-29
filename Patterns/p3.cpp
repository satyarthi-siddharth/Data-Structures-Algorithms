#include<iostream>
using namespace std;

//pattern
/*
n=4
1 2 3 4
1 2 3 4
1 2 3 4 
1 2 3 4
*/
int main(){
  int n;
  cin>>n;

  int row = 1;

  while(row<=n){
    int col = 1;
    while(col<=n){
      cout<<col<<" ";
      col += 1;
    }cout<<endl;
    row += 1;
  }
}