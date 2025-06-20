#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"n = "; cin>>n;
  double r = 1.0/3;
  double sum = (1-pow(r,n+1))/(1-r);
  cout<<fixed<<setprecision(5)<<sum;
}
