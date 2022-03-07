#include<stdio.h>
int main(){
  FILE *ptr=NULL;
  char string;
  ptr=fopen("file.txt","r");
  while(string!=EOF){
    string=getc(ptr);
    printf("%c",string);
  }
  fclose(ptr);
  return 0;
}

