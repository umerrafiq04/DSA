//used to find shortest path b\w all the vertices of a graph
//djk algo takes one as a source , on considering n nodes n times as source,tc may rise to n*3; i.e y we go for dynamic approach

#include<stdio.h>

int m[4][4];

int main() {
    int t = 99999;

   
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {  
            m[i][j] = 0;
        }
    }

    m[0][1] = 3; m[0][2] = t; m[0][3] = 7;
    m[1][0] = 8; m[1][2] = 2; m[1][3] = t;
    m[2][0] = 5; m[2][1] = t; m[2][3] = 1;
    m[3][0] = 2; m[3][1] = t; m[3][2] = t;

  printf("Before operation\n\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {  
            printf("%d ", m[i][j]);
        }
        printf("\n");  
    }
    printf("\n");

//floyd warshall now
    for(int k=0;k<4;k++){
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        if(m[i][k]+m[k][j]<m[i][j]){
            m[i][j]=m[i][k]+m[k][j];
    }
}
    }
     printf("\t");
    printf("for k=%d\n",k);
    
       for (int i = 0; i < 4; i++) {
         printf("\n");
        for (int j = 0; j < 4; j++) {  
            printf("%d ", m[i][j]);
        }
        printf("\n\t");  
    }
    }

    //after ops
    printf("\n");
    printf("after operation\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {  
            printf("%d ", m[i][j]);
        }
        printf("\n");  
    }
    return 0;
}
