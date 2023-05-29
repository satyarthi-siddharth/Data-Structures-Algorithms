#include<iostream>
using namespace std;

//pattern
/*
n=4
1 2 3 4 4 3 2 1
1 2 3 * * 3 2 1
1 2 * * * * 2 1
1 * * * * * * 1
*/
int main(){
  int n;
  cin>>n;

  int row = 1;
  while(row<=n){
    int col = 1;
    while(col<= (n-row+1)){
      cout<<col<<" ";
      col += 1;
    }
    int star = 2*(row - 1);
    while(star){
      cout<<"*"<<" ";
      star -= 1;
    }
    while(col>1){
      cout<<col-1<<" ";
      col -= 1;
    }
    cout<<endl;
    row += 1;
  }
}