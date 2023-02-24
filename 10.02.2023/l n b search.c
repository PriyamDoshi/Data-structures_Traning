#include<stdio.h>
int lsrch(int arr[],int num ){
    for(int i = 0;i<8;i++){
        if(arr[i]==num){
           return i;
        }
    }
    return 0;
}

int bsrch(int arr[], int num){
    int l,m ,h;
    l=0;
    h=8;
    while (l<=h){
    m = (l+h)/2;
    if(arr[m]==num){
        return m;
    }if(arr[m]<num){
        l = m+1;
    }else{
        h = m-1;
    }}
    return -1;
}
int main (){
     int arr[100]={1,2,3,4,5,6,7,8,9};
     int num = 7;
    
    int x = lsrch(arr,num);
     printf("%d\n",x);
      
     x = bsrch(arr,num);
     printf("\n%d",x);
     return 0;
}