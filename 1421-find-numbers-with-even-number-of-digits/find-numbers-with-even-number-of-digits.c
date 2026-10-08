int findNumbers(int* nums, int numsSize) {
    int count = 0;
    for (int i=0; i<numsSize; i++){
        int n=nums[i], digits = 0;
        while (n>0){
            n=n/10;
            digits++;
        }
        if (digits % 2==0){
            count++;
        }    
    }
    return count;
}