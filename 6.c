#include <stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int temp[1000];
  for(int i=0;i<n;i++){
    scanf("%d",&temp[i]);
  }
  int max=1,current=1;
  for(int i=0;i<n;i++){
    if(temp[i]>temp[i-1]){
      current++;
      if(current>max){
        max=current;
      }
    }else{
      current=1;
    }
  }
  printf("%d",max);
  return 0;
}
