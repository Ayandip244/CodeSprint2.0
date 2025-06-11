#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x;
  cin>>n;
  unordered_map<int,int> freq;
  vector<int> arr(n);
  for(int &a : arr){
    cin>>a;
    freq[a]++;
  }
  sort(arr.begin(),arr.end(), [&](int a, int b){
    if(freq[a] != freq[b]) return freq[a]>freq[b];
    return a<b;
  });
  for(int a : arr) cout<<a<<" ";
}
