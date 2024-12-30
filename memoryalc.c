#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr=(int*)malloc(5*(sizeof(int)));
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1; // Initializing the array with values
        printf("%d\t", arr[i]);
    }
    printf("\n");
    arr=(int*)realloc(arr,10*(sizeof(int)));
   for (int i = 0; i < 10; i++) {
        arr[i] = i + 1; // Initializing the array with values
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("%d",arr[9]);
    printf("\n");
    free(arr);
    if(arr==NULL){
        printf("pointer is null\n");
    }
    else printf("pointer is not empty %d\n",arr);
    arr=NULL;
    if(arr==NULL){
        printf("pointer is null\n");
    }
    else printf("pointer is not empty %d\n",arr);
    return 0;
}