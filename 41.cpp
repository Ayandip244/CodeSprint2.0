#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int main(){
  int a,k,t=0;
  string l;
  cout<<"tickets = ";
  getline(cin,l);
  stringstream ss(l);
  vector<int> tickets;
  while(ss>>a) tickets.push_back(a);
  cout<<"k = ";
  cin>>k;
  for(int i=0;i<tickets.size();i++){
    t+=min(tickets[i],tickets[k]-(i>k));
  }
  cout<<t;
}
