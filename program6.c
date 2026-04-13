#include<stdio.h>
int main(){
    int arr[100],n,pos,element,i;
    printf("enter no of elements:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter position to insert:");
    scanf("%d",element);
    //shift elements to right
    for(i=0;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=element;
    n++;
printf("array after insertion:\n");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
return 0;
}