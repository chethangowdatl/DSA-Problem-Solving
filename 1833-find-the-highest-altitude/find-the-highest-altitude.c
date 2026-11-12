int largestAltitude(int* gain, int gainSize) {
    int alt=0, best =0;
    int i;
    for(i=0;i<gainSize;i++){
        alt = alt + gain[i];
        if(alt>best)
            best=alt;
    }
    return best;
}