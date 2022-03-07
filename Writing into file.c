#include<stdio.h>
int main(){
  FILE *ptr=NULL;
  int num;
  ptr=fopen("file2.txt","a");
  printf("Enter data: ");
  scanf("%d",&num);
  fprintf(ptr,"%d",num);
  fclose(ptr);
  return 0;
}
