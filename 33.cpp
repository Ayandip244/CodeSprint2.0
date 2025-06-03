#include <iostream>
#include <stack>
#include <string>
using namespace std;

string rev(string s){
  stack<char> stk;
  for(char c:s){
    stk.push(c);
  }
  string r="";
  while(!stk.empty()){
    r+=stk.top();
    stk.pop();
  }
  return r;
}

int main(){
  string a;
  getline(cin,a);
  string r=rev(a);
  cout<<r;
  return 0;
}
