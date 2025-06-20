#include<iostream>
using namespace std;
int rec(int n, int r){
  if(r==0 || r==n) return 1;
  return rec(n-1,r) + rec(n-1,r-1);
}
int main(){
  int n,r;
  cout<<"n = "; cin>>n;
  cout<<"r = "; cin>>r;
  cout<<rec(n,r);
}
