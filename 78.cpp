#include<iostream>
using namespace std;

int count(int n){
  if(n==0) return 1;
  return (n%2 ? 5 : 4) * count(n-1);
}

int main(){
  int n; cout<<"n = "; cin>>n;
  cout<<count(n);
}
