#include<iostream>
using namespace std;
int f(int n, int k){
  if(n==1) return 0;
  int mid=1<<(n-2);
  if(k<=mid) return f(n-1,k);
  return 1-f(n-1,k-mid);
}
int main(){
  int n,k;
  cout<<"n = "; cin>>n;
  cout<<"k = "; cin>>k;
  cout<<f(n,k);
}
