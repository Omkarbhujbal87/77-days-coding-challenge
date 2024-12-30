#include<stdio.h>
int binarySearch(int *arr,int tar,int left,int right){
    if (left>right)
    {
        return -1;
    }
    int mid=left+(right-left)/2;
    if(tar==arr[mid]){
        return mid;
    }
    else if(tar>arr[mid]){
        binarySearch(arr,tar,mid+1,right);
    }
    else{
        binarySearch(arr,tar,left,mid-1);
    }
    
}
int main(){
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int tar=40;
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=binarySearch(arr,tar,0,size-1);
    if(result==-1){
        printf("item %d not found.\n",tar);
    }
    else{
        printf("item %d found at index %d.\n",tar,result);
    }
    return 0;
}