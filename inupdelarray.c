#include<stdio.h>
int insertelement(int *arr,int *size,int position,int element){
    if(position<0||position>*size){
        printf("invalid position to insert");
        return 0;
    }
    for(int i=*size;i>position;i--){
        arr[i]=arr[i-1];
    }
    arr[position]=element;
    (*size)++;
   
}
int deletel(int *arr,int *size,int position){
     if(position<0||position>*size){
        printf("invalid position to insert");
        return 0;
    }
     for(int i=position;i<*size-1;i++){
        arr[i]=arr[i+1];
    }
     (*size)--;
}
int updatel(int *arr,int *size,int position,int element){
    if(position<0||position>*size){
        printf("invalid position to insert");
        return 0;
    }
    arr[position]=element;
}
int display(int *arr,int size){
      for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size;
    size=5;
    int position;
    int element;
    int option;
    while (1)
    {
    
    
    printf("select the option from below.\n");
    printf("1.insert.\n2.update.\n3.Delete.\n4.display.\n5.exit\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:printf("insert position to insert");
    scanf("%d",&position);
    printf("enter Element to insert");
    scanf("%d",&element);
    insertelement(arr,&size,position,element);
    break;
     case 2:printf("insert position to update");
    scanf("%d",&position);
    printf("enter Element to be updated");
    scanf("%d",&element);
    updatel(arr,&size,position,element);
    break;
    case 3:printf("insert position to delete");
    scanf("%d",&position);
    deletel(arr,&size,position);
    break;
    case 4:display(arr,size);
    break;
    case 5:printf("succesfully exited\n");
    return 0;
    break;
    }
    }
    return 0;

}