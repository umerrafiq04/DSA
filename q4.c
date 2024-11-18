#include<stdio.h>
int main(){
int p[]={7,6,4,3,1};int k;
int min=10;
for(int i=0;i<5;i++){
if(p[i]<min){
    min=p[i];
    k=i;
}
}
int sell=min;
for(int j=k+1;j<5;j++){
if(p[j]>sell){
    sell=p[j];
}
}
printf("Buy=\t%d & sell=\t%d \n",min,sell);
printf("Profit=\t%d",min-sell);
}