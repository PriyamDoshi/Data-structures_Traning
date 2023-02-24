#include<stdio.h>

void printarr(int arr[] ,int n){
for(int i = 0; i < n;i++){
    printf("%d ", arr[i]);
    }
printf("\n");
}

int main(){
    int arr[]={12,32,1,343,2,3,0};
    int n = 7;
    printarr(arr, n);

    return 0;
}