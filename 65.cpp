#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
  int n,k,x; cin>>n>>k;
  unordered_map<int,int> freq;
  for(int i=0;i<n;i++){
    cin>>x;
    freq[x]++;
  }
  int c=0, d=0;
  for(auto& a : freq){
    int f = a.second;
    if(f>=2 && c<k && d<k) c++, d++;
    else if(c<k) c++;
    else if(d<k) d++;
  }
  cout<<((c==k && d==k) ? "YES" : "NO");
}
