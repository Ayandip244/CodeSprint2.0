#include<iostream>
using namespace std;

int f(int n){
  if(n<2) return 1;
  int r=0;
  for(int i=0;i<n;i++) r+=f(i)*f(n-1-i);
  return r;
}

int main(){
  int n; cout<<"n = "; cin>>n;
  cout<<f(n);
}
