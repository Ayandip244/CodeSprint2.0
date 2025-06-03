#include <stdio.h>
int main(){
  int n,c=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if((i+j)%2==0){
        printf("1");
        c++;
      }else{
        printf("0");
      }
      if(j != n-1){
        printf(" ");
      }
    }
    printf("\n");
  }
  printf("Total students seated: %d",c);
  return 0;
}
