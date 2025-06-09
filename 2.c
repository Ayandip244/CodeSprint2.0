#include <stdio.h>
int main(){
  int n,s,g=0,m=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&s);
    if(s>=7){
      g++;
    }else{
      m++;
    }
  }
  printf("%d %d",g,m);
  return 0;
}
