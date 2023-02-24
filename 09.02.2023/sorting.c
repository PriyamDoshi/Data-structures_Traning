#include <stdio.h>
#include<stdlib.h>


int main()
{
    int *p;
    int i, j, t,n;
    printf("inter velure of n :");
    scanf("%d",&n);
    p = (int*)malloc(n * sizeof(int));
    printf("inter the velue :");
    for(i = 0; i<n;i++){
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(p[i]>p[j]){
                t=p[j];
                p[j]=p[i];
                p[i]=t;
            }
        }
    }
printf("acc odr :");
for(i=0;i<n;i++){
    printf("%d  ",p[i]);
}
free(p);
    return 0;
}