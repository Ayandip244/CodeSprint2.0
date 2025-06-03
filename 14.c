#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int p[n];
  for(int i=0;i<n;i++){
    scanf("%d",&p[i]);
  }
  int min=p[0],max=0;
  for(int i=0;i<n;i++){
    if(p[i]<min){
      min=p[i];
    }else{
      int profit=p[i]-min;
      if(profit>max){
        max=profit;
      }
    }
  }
  if(max>=2){
    printf("%d",max);
  }else{
    printf("0");
  }
  return 0;
}
