#include<iostream>
using namespace std;

bool power(int n){
  if(n==1) return true;
  if(n<=0 || n%2) return false;
  return power(n/2);
}
int main(){
  int n; cout<<"n = "; cin>>n;
  cout<<(power(n) ? "true" : "false")<<endl;
}
