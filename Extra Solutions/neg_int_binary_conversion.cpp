#include<iostream>
#include<string>
using namespace std;

int main(){
  int n;
  cout<<"enter only a negative decimal number:\n";
  cin>>n;

  int num = abs(n);
  string str = "";
  while(num){
    int lb = num&1;
    lb == 1 ? lb = 0 : lb = 1;
    str += to_string(lb);
    num = num>>1;
  }
  int i = 0, j = str.size()-1;
  while(i<j){
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;j--;
  }
  int last_index = str.size()-1;
  while(str[last_index] != '0' && last_index >= 0){
    last_index--;
  }     

  str[last_index] = '1';
  int size = str.size();

  while(size<32){
    str = '1' + str;
    size++;
  }

  cout<<"binary representation of given negative number is:\n"<<str<<endl;
}