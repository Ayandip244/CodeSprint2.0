#include<iostream>
using namespace std;

double p(double x, int n){
  if(n==0) return 1;
  double h=p(x,n/2);
  return n%2?(n>0?h*h*x:1/(h*h*x)):h*h;
}

int main(){
  double x; cout<<"x = "; cin>>x;
  int n; cout<<"n = "; cin>>n;
  printf("%.5f",p(x,n));
}
