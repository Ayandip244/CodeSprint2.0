#include <stdio.h>
#include <string.h>
int main(){
  char jewels[50], stones[50];
  int c=0;
  scanf("%s",jewels);
  scanf("%s",stones);
  for(int i=0;i<strlen(stones);i++){
    for(int j=0;j<strlen(jewels);j++){
      if(stones[i]==jewels[j]){
        c++;
        break;
      }
    }
  }
  printf("%d",c);
  return 0;
}
