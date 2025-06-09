#include <stdio.h>
#include <stdbool.h>
bool icecream(int b, int ice[],int n){
  for(int i=0;i<n;i++){
    if(ice[i]==b){
      return true;
    }
  }
  return false;
}
int main(){
  int budget=30;
  int iceCreamPrices[] = {10, 25, 30, 50};
  int n = sizeof(iceCreamPrices)/sizeof(iceCreamPrices[0]);
  bool r = icecream(budget,iceCreamPrices,n);
  printf(r ? "true" : "false");
}
