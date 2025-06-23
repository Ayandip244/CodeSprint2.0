#include<iostream>
using namespace std;

string decode(string &s, int &i){
  string r;
  while(i<s.size() && s[i]!=']'){
    if(isdigit(s[i])){
      int n=0;
      while(isdigit(s[i])) n=n*10+(s[i++]-'0');
      i++;
      string t = decode(s,i);
      i++;
      while(n--) r+=t;
    }else r+=s[i++];
  }
  return r;
}

int main(){
  string s; cout<<"s = "; cin>>s;
  int i=0;
  cout<<decode(s,i);
}
