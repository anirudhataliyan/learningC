#include <stdio.h>
#include<string.h>
struct Example{
    char name[30];
    int favno;
    int rollno;
};
int main()
{
    char arr[30];
    struct Example Student1; 
    printf("Enter Your Name: ");
    scanf("%s",&arr);
    strcpy(Student1.name,arr);
    printf("Enter your fav number: ");
    scanf("%d",&Student1.favno);
    printf("Enter your roll number: ");
    scanf("%d",&Student1.rollno);
    printf("\n");
    printf("Name: %s\n",Student1.name);
    printf("Fav number: %d\n",Student1.favno);
    printf("Roll number: %d\n",Student1.rollno);

    return 0;
}
