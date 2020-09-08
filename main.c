#include <stdio.h>



int main(void) {
  
  char string[80];
  printf("Enter a sentence:\n");
  scanf("%s", string);
  printf("%s\n",string);
  if(string[0]!='a'){
    printf("Not a valid sentence in this language");
    return 0;
  }
  int i = 1;
  while(string[i]!='\0'){
    if(string[i]!='a' && string[i]!='1'){
      printf("Not a valid sentence in this language");
      return 0;
    }
    i++;
  }
  printf("This is a valid sentence in this language");

}