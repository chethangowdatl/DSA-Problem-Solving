int removeDuplicates(int* nums, int n) {
    if(n==0) return 0;
    int kept=1;
    for(int i=0;i<n;i++){
        if(nums[i]!=nums[kept-1]){
            nums[kept]=nums[i];
            kept++;
        }
    }
    return kept;
}