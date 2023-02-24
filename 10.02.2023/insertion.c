/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int indInsertion(int arr[],int size,int x,int c,int index) {
 
    for(int i = size-1;i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=x;
    return 1;
}  
void  display(int arr[],int size){
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
   int arr[100]={22,33,44,55,66};
   int size = 5, x = 50, index = 3, c = 100;
   int indInsertion(arr,size,x, c,index); 
   size+=1;
   display(arr,size);

    return 0;
}