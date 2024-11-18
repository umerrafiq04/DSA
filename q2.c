#include<stdio.h>
//no repetation by the number 
//a appears twice
//b is missing

int main(){
    int twice,miss;
    int s=0;
    int max=0;
    int count=0;int l=0,z=0;
    int m=2;
    int p=2;
int arr[2][2]={
// {9,1,7},
//  {8,9,2},
//  {3,4,6}
{1,3},{2,2}
 
 };
              
               int size=m*p;

for(int k=1;k<= size;k++){
    s=0;
    if(k==p){
z++;
    }
    if(l==2){
        l=0;
    }
    count=0;
for(int i=0;i<m;i++){
    
    for(int j=0;j<p;j++){

if(arr[z][l]==arr[i][j]){
    count++;
}
if(k==arr[i][j]){
    s++;
    break;
}

    }


}
if(count>1){
printf("count of %d=\t%d\n",arr[z][l],count);
twice=arr[z][l];
}

l++;
if(arr[z][l]>max){
   
    max=arr[z][l];
     
}
if(s==0){
   
    // printf("Missing=\t%d\n",k);
    miss=k;

}




}

printf("max no is :%d\n",max);
printf("{twice,miss}={%d,%d}\n",twice,miss);
// for(int i=1;i<max;i++){
//     s=0;
// for(int a=0;a<m;a++){
//     for(int b=0;b<p;b++){
// if(i==arr[a][b]){
//     s++;
//     break;
// }
// else{
//     continue;
// }

//     }
// }
// if(s==0){
   
//     printf("Missing=\t%d",i);

// }

// }

}