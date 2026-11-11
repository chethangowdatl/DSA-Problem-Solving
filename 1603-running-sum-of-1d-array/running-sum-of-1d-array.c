/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int n, int* returnSize) {
    int i;
    int *count = (int *) malloc(n * sizeof(int));
    count[0]=nums[0];
    for (int i=1;i<n;i++){
        if(n>= -10^6 || n<= 10^6)
            count[i]=count[i-1]+nums[i];
    }
    *returnSize=n;
    return count;
    free(count);
}