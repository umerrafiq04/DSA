#include<stdio.h>
int m[4][4];
int w[4];
//self to self=0 if no edge present
//self to other =infinity if no edge present
int main() {
    int t = 99999;

   
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {  
            if(i==j){
            m[i][j] = 0;}
            else{
              m[i][j] =9999;  
            }
        }
    }

    m[0][1] =4;
    m[2][1]=-10;
    m[0][3]=5;
    m[3][2]=3;

  printf("Before operation\n\n");
    for (int i = 0; i < 4; i++) {
        w[i]=9999;
        for (int j = 0; j < 4; j++) {  
            printf("%d ", m[i][j]);
        }
        printf("\n");  
    }
w[0]=0;
for(int k=0;k<4;k++){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(w[i]+m[i][j]<w[j]){
                w[j]=w[i]+m[i][j];
            }

        }
    }
}
printf("\nSolution:\n");
printf("Distance from source to vertex:\n");

for(int k=0;k<4;k++){
    printf("%d\t=  %d\n",k,w[k]);
}
printf("\n");


    
    
    }