#include<iostream>
using namespace std;

string u[]={"","One ","Two ","Three ","Four ","Five ","Six ","Seven ","Eight ","Nine ","Ten ","Eleven ","Twelve ","Thirteen ","Fourteen ","Fifteen ","Sixteen ","Seventeen ","Eighteen ","Nineteen "},
t[]={"","","Twenty ","Thirty ","Forty ","Fifty ","Sixty ","Seventy ","Eighty ","Ninety "},
s[]={"","Thousand ","Million ","Billion "};

string word(int n){
  if(!n) return "";
  if(n<20) return u[n];
  if(n<100) return t[n/10]+word(n%10);
  return u[n/100]+"Hundred "+word(n%100);
}
string say(int n, int i=0){
  if(!n) return "";
  return say(n/1000,i+1)+word(n%1000)+(n%1000?s[i]:"");
}
int main(){
  int n; cout<<"num = "; cin>>n;
  string r=n ? say(n) : "Zero ";
  r.pop_back();
  cout<<r<<"\n";
}
