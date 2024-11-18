#include<stdio.h>
int min;
 int arr[5]={1,5,7,3,2};
int temp,t=0;
int main(){
   
            //{1,5,7,3,2}
    for(int i=0;i<5;i++){
        min=arr[i];
       for(int j=i+1;j<5;j++){
        
if(arr[j]<min){
   
    temp=arr[j];
   arr[j]=arr[i];
   arr[i]=temp;
  
}
    }
    }


     for(int i=0;i<5;i++){
     printf("%d\t",arr[i]) ;
     }
}