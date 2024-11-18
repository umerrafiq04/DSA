#include<stdio.h>
int main(){
    int arr[7]={2,2,1,1,3,3,5};
    int count=1;

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        count=0;
for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++){
    if(arr[i]==arr[j]){
        count++;
}

}
if(count==1){
    printf("%d\t",arr[i]);
}
    }
}