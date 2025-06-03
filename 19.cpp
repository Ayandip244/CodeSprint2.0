#include <iostream>
#include <vector>
#include <functional>
using namespace std;

vector<string> comb(string d){
  if(d.empty()) return {};
  vector<string> map={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"},r;
  function<void(int,string)> a=[&](int i, string s){
    if(i==d.size()) return r.push_back(s),void();
    for(char c : map[d[i]-'0']) a(i+1,s+c);
  };
  a(0,"");
  return r;
}

int main(){
  string d;
  cout<<"digits = ";
  cin>>d;
  vector<string> r=comb(d);
  for(string s : r) cout<<s<<" ";
  return 0;
}
