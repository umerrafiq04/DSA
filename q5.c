#include<stdio.h>
int main(){
    int arr[]={-1,0,1,2,-1,-4};
    //output: {-1,-1,2},{-1,0,1}
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
             for(int k=0;k<6;k++){
        if(arr[i]+arr[j]+arr[k]==0 && i!=j && i!=k && j!=k){
            printf("{%d,%d,%d}={%d,%d,%d}\n",i,j,k,arr[i],arr[j],arr[k]);
        }
        
    }
    }
    }
}