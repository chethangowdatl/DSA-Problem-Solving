int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int run=0, best=0; //1.run:Length of the current strak, 2.best:logest streak seen so far.
    int i;
    for(i=0;i<numsSize;i++){
        if(nums[i]==1){
            run++;
            if(run>best)
                best = run;
        }
        else
            run=0;      // 0 braks the streak.
    }
    return best;
}