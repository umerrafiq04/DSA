#include<stdio.h>
// int main(){
//  int count_array[6]={0};
//  int k=0;
//     int arr[]={7,2,3,3,3,3};
//     //print no that appears more than n/2 times
//     int i=0;
//     while(i<6){
//           int count=0;

// for(int j=0;j<6;j++){
     
//     if(arr[i]==arr[j]){
// count++;
//     }}
// count_array[k]=count;
// k++;
//     printf("Number=\t%d,\tcount=\t%d\n",arr[i],count);

//         i++;
//     }
// int max;int t=0;
// max=count_array[0];

//     for(int z=1;z<6;z++){
// printf("%d\t",count_array[z]);
// if(count_array[z]>max){
//     t=z;
// }}

// printf("Element max times\t%d\n",arr[t]);
// printf("times\t%d\n",count_array[t]);
  

// } 






#include <stdio.h>

int main() {
    int arr[] = {7, 2, 3, 3, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_count = 0, max_element = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 1; // Start with 1 to count the current element
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // Print the number and its count
        printf("Number=\t%d,\tcount=\t%d\n", arr[i], count);
        
        // Check if this count is the maximum
        if (count > max_count) {
            max_count = count;
            max_element = arr[i];

        }
    }


if(max_count>=n/2){
      printf("Element max times\t%d\n", max_element);
    printf("times\t%d\n", max_count);
}
    return 0;
}

















// 2,2,2,2,1,1};
// int i=0;int j=1;
//     while(i<6){
//         j=i;
//         for(int j=1;j<6;j++){
// if(arr[i]!=arr[j]){
//     i=j;
// break;
// }
// else{
//     count++;
// }
// printf("Number=\t%d,count=\t%d",arr[i],count);
//         }
//         printf("%d\t",i);
//         if(i>6){
//             break;
//         }
//     }