// Online C compiler to run C program online
#include <stdio.h>
void arrayNormal(int arr[]){
    int i,arrSize;
    arrSize=sizeof(arr);
    for(i=0;i<arrSize;i++){
        printf("Element at position %d is %d \n", i+1,arr[i]);
    }
}
void arrayReversed(int arr[]){
    int i,arrSize;
    arrSize=sizeof(arr);
    for(i=arrSize-1;i>-1;i--){
        printf("Element at position %d is %d \n",i+1,arr[i]);
    }
}
int main() {
    int array[]={1,7,9,9,5,6,7,8};
    printf("Before Reverse: \n");
    arrayNormal(array);
    printf("After reverse: \n");
    arrayReversed(array);
    return 0;
}
