#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isvalid(string s){
  stack<char> a;
  for(char c:s){
    if(c=='('||c=='{'||c=='['){
      a.push(c);
    }else{
      if(a.empty()) return false;
      char top=a.top(); a.pop();
      if((c==')'&&top!='(')||(c=='}'&&top!='{')||(c==']'&&top!='[')) return false;
    }
  }
  return a.empty();
}

int main(){
  string a;
  cout<<"s = ";
  cin>>a;
  if(isvalid(a)) cout<<"true";
  else cout<<"false";
  return 0;
}
