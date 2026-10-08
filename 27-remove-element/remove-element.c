int removeElement(int* nums, int numsSize, int val) {
    int kept=0;
    for (int i=0;i<numsSize;i++){
        if(nums[i] !=val){
            nums[kept++] = nums[i];
        }
    }
    return kept;
}