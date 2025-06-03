#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> findAnagrams(string log,string pattern){
  vector<int> result;
  int n=log.size(), m=pattern.size();
  if(m>n) return result;

  vector<int> p(26), w(26);

  for(char c : pattern){
    p[c-'a']++;
  }
  for(int i=0;i<m;i++){
    w[log[i]-'a']++;
  }
  if(w == p) result.push_back(0);

  for(int i=m;i<n;i++){
    w[log[i-m] - 'a']--;
    w[log[i] - 'a']++;
    if(w == p) result.push_back(i-m+1);
  }
  return result;
}

int main(){
  string l,p;
  cout<<"logStream = ";
  cin>>l;
  cout<<"pattern = ";
  cin>>p;

  for(int r : findAnagrams(l,p)){
    cout<<r<<" ";
  }
  return 0;
}
