#include<iostream>
using namespace std;
int main(){
  int n; cout<<"n = "; cin>>n;
  int a[n]; cout<<"nums = ";
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<=n;i++){
    bool f = false;
    for(int j=0;j<n;j++)
      if(a[j]==i) f=true;
    if(!f){cout<<i; break;}
  }
}
