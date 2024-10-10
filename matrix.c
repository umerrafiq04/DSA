#include<stdio.h>

void matrix();
int n=5;
int p[]={5,4,6,2,7};
int m[5][5]={0};
int s[5][5]={0};
int d,i,j,k,max,q;

void matrix(){
    for(d=1;d<n-1;d++){
        for(i=1;i<n-d;i++){
            j=i+d;
            max=99999;
            for(k=i;k<j;k++){
                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<max){
                    max=q;
                    s[i][j]=k;
                }
            }
            m[i][j]=max;
        }
    }
}

void print_optimal_parens(int s[5][5], int i, int j) {
    if (i == j)
        printf("A%d", i);
    else {
        printf("(");
        print_optimal_parens(s, i, s[i][j]);
        print_optimal_parens(s, s[i][j] + 1, j);
        printf(")");
    }
}

int main(){
    matrix();
    printf("the matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           printf("%d ",m[i][j]); 
        }
        printf("\n");
    }
    printf("Optimal parenthesization: ");
    print_optimal_parens(s, 1, n-1);
    printf("\n");
    return 0;
}