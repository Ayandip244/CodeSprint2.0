#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"n = ";
  cin>>n;
  vector<int> score(n);
  cout<<"score = ";
  for(int &x : score) cin>>x;

  vector<pair<int,int>> v;
  for(int i=0;i<n;i++) v.push_back({-score[i],i});
  sort(v.begin(), v.end());

  vector<string> r(n);
  for(int i=0;i<n;i++){
    if(i==0) r[v[i].second] = "Gold Medal";
    else if(i==1) r[v[i].second] = "Silver Medel";
    else if(i==2) r[v[i].second] = "Bronze Medel";
    else r[v[i].second] = to_string(i+1);
  }

  for(int i=0;i<n;i++){
    cout<<r[i];
    if(i != n-1) cout<<", ";
  }
}
