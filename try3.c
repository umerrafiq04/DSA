#include<stdio.h>
// int main(){
//     int arr[]={5,2,4,9,1,7};int j=0,temp;;
//     for(int k=0;k<6;k++){
//     for(int i=k;i<6;i++){
// if(arr[i]<arr[j]){
//     temp=arr[j];
//     arr[j]=arr[i];
//     arr[i]=temp;
// }
//     }
//     j++;}
//      for(int i=0;i<6;i++){
// printf("%d\t",arr[i]);
// int j=0;
// int k=0;
// int removeElement(int* nums, int numsSize, int val) {
//     for(int i=0;i<numsSize;i++){
//         if(nums[i]!=val){
//             k++;
//             nums[j]=nums[i];
//             j++;
//         }
//     }
// for(int k=j;k<numsSize;k++){
//     nums[k]=0;
// }
// }

// int main(){
//     int nums[]={3,2,2,3};
//     int x=4;
//     int y=3;
//    removeElement(nums,x,y); 
//     printf("[");
//    for(int k=0;k<4;k++){
//     printf("%d\t",nums[k]);
    
// }
// printf("]");
// printf("\n");
// printf("k=%d\t",k);
// return 0;
// }

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int sum=0;
    int n=1;
    int x=1;
    for(int i=0;i<digitsSize;i++){
    sum=sum+((digits[i])*(100/x));
    x=x*10;
    }
    sum=sum+1;
    for(int i=0;i<digitsSize;i++){
        digits[i]=sum%(sum-n);
        n++;
    }
    return digits;
}

int main(){
    int nums[]={1,2,3};
    printf("%d\n",plusOne(nums,3,3));
    return 0;
}