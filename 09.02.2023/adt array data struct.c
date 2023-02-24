/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

struct myArray{
    int tsize;
    int usize;
    int *base;
};
void creatArray(struct myArray *a, int tze, int uze ){
    a->tsize = tze;
    a->usize = uze;
    a->base = (int *)malloc(tze*sizeof(int));
}
    

int main()
{
   struct myArray marks;
   creatArray(&marks,100,20);

    return 0;
}
