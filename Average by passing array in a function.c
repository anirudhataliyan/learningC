#include <stdio.h>

int functionAverage(int arr[]){
    int sum=0,sizeofArr,i;
    sizeofArr=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<=sizeofArr;++i){
        sum = sum + arr[i];
    }
    return sum/sizeofArr;
    }
int main()
{
    int arr[]={1,2,3};
    int av=functionAverage(arr);
    printf("The average is %d", av);

    return 0;  
}
