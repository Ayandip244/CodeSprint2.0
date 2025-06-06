#include<iostream>
#include<vector>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> h(n);
  for(int &a : h) cin>>a;
  int l=0, r=n-1, lm=0, rm=0, w=0;
  while(l<=r){
    if(h[l]<=h[r]){
      lm=max(lm,h[l]);
      w+=lm-h[l++];
    }else{
      rm=max(lm,h[r]);
      w+=rm-h[r--];
    }
  }
  cout<<w;
}
