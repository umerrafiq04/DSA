//return median of two arrays
#include<stdio.h>
int main(){
    int ar1[]={1,3};//k=0,k=1
    int ar2[]={2};//m=0
    int s1=sizeof(ar1)/sizeof(ar1[0]);//2
    int s2=sizeof(ar2)/sizeof(ar2[0]);//1
    int flag;
printf("%d\t %d \n",s1,s2);
    int k=0,m=0;
    int c[3];
   for(int i=0;i<3;i++){
    flag=0;
    if(ar1[k]<ar2[m]){
c[i]=ar1[k];
if(k<s1){ // 0<2
k++;
printf("K=%d\t",k);
flag=1;
}
    }
    else{
        c[i]=ar2[m];
        if(m<s2-1){ // 0<1
        m++;
        printf("M=%d\t",m);
        flag=1;
        }
    }
// if(flag==0 && s1>s2){
//      printf("a%d\t",ar1[i]);
//     c[i]=ar1[i];
//     break;
// }
if(flag==0 && s2>s1){
      printf("b%d\t",ar2[i]);
    c[i]=ar2[i];
    break;
}


   }
   
   
   
   
   
   
   for(int i=0;i<3;i++){
    printf("%d\t",c[i]);
   }
   }