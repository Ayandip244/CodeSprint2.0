#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){return b ? gcd(b,a%b) : a;}

int main(){
  string s; cin>>s;
  if(s[0] != '-') s = "+" + s;

  int n=0,d=1;
  for(int i=0;i<s.size();){
    int sign = s[i++] == '+' ? 1 : -1;
    int a=0,b=0;
    while(isdigit(s[i])) a=a*10+(s[i++]-'0');
    ++i;
    while(isdigit(s[i])) b=b*10+(s[i++]-'0');

    n = n*b + sign*a*d;
    d *= b;
    int g = gcd(abs(n),d);
    n /= g;
    d /= g;
  }
  cout<<n<<"/"<<d<<"\n";
}
