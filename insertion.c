#include<stdio.h>
int min;
 int arr[4]={6,3,4,2};
int n=4;
int main(){
for(int i=1;i<n;i++){
    int j=i-1;
    int temp=arr[i];
    while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
}

for(int i=0;i<4;i++){
    printf("%d\n",arr[i]);
}

}