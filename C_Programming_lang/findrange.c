#include <stdio.h>
#include <stdlib.h>
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    //returnSize=(int*)malloc(sizeof(int)*2);
    
    //if(numsSize==0)：return 0;
    //low bound
    int low=0;
    int high=numsSize-1;
    while(low<high){
        int mid=low+(high-low)/2;
        printf("the low bound mid values %d\n",mid);
        if(nums[mid]<target){
            low=mid+1;
        }
        else
            high=mid;
    }
    int lowbound=nums[low]==target?low:-1;
    //high bound
    low=0;
    high=numsSize-1;
    while(low<high){
        int mid=low+(high+1-low)/2;
        printf("the high bound mid values %d\n",mid);
        if(nums[mid]>target){
            high=mid-1;
        }
        else
            low=mid;
    }
    int highbound=nums[low]==target?low:-1;
    printf("%d\n",lowbound);
    printf("%d\n",highbound);
    returnSize[0]=lowbound;
    returnSize[1]=highbound;
    printf("%d\n",returnSize[0]);
    printf("%d\n",returnSize[1]);
    return returnSize;
}
int main(int argc, char const *argv[])
{
    int returnSize[2]={5,5};
    int array[2]={2,2};
    int numsSize=2;
    int target=2;
    searchRange(array,numsSize,target,returnSize);
    //printf("this is original array %d\n",returnSize);
    return 0;
}