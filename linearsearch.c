#include<stdio.h>
int linearSearch(int *arr,int size,int target){
    for(int i;i<=size;i++){
        if(target==arr[i]){
            return i;
        }
    }
    return 0;
}
int main(){
    int arr[10]={10,20,30,40,50,60,70,880,90,44};
    int target=40;
    int result=linearSearch(arr,10,target);
    if(result==0){
        printf("target %d not found\n",target);
    }
    else printf("Target %d found at index %d\n",target,result);
    return 0;
}
