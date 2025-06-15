#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, a[100001]; cin>>n;
  for(int i=0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  int m=unique(a,a+n)-a;
  cout<<m*(m-1)/2;
}
