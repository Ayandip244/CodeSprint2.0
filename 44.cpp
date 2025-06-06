#include<iostream>
#include<queue>
using namespace std;

int main(){
  int n, x, a[1000];
  cin>>n;
  queue<int> q;
  for(int i=0;i<n;i++) cin>>x, q.push(x);
  for(int i=0;i<n;i++) cin>>a[i];

  int i=0, s=0;
  while(!q.empty() && s<q.size()){
    if(q.front()==a[i]){
      q.pop();
      i++;
      s=0;
    }else{
      q.push(q.front());
      q.pop();
      s++;
    }
  }
  cout<<q.size();
}
