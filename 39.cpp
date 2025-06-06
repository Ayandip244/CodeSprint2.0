#include<iostream>
using namespace std;
int main(){
  string s,r;
  cin>>s;
  int d=0;
  for(char c : s){
    if(c=='('){
      if(d++) r+=c;
    }else{
      if(--d) r+=c;
    }
  }
  cout<<r;
}
