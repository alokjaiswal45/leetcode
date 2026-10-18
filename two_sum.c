/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *x=malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if((nums[i]+nums[j])==target){
                x[0]=i;
                x[1]=j;
                *returnSize=2;
                return x;
            }
        }
    }
   free(x);
   return NULL;
    
}