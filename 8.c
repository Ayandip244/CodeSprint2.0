#include <stdio.h>
int main(){
  int n,c=0;
  scanf("%d",&n);
  if(n>10){
    printf("Abhik's marathon journey intensifies! Let's see his detailed zig-zag pattern:\n");
  }
  for(int i=1;i<=n;i++){
    int s=(n-i)*2;
    for(int a=0;a<s;a++){
      printf(" ");
    }
    if(i%2==1){
      for(int j=1;j<=i;j++){
        printf("%d",j);
        c++;
        if(j != i){
          printf("   ");
        }
      }
    }else{
      for(int j=i;j>=1;j--){
        printf("%d",j);
        c++;
        if(j != 1){
          printf("   ");
        }
      }
    }
    printf("\n");
  }
  printf("Total numbers printed: %d",c);
  return 0;
}
