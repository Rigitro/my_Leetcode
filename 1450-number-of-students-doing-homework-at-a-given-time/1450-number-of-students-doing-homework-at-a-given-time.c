int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime) {
    int count = 0;

    for(int i=0;i<endTimeSize;i++){
        if(startTime[i]<= queryTime && queryTime <= endTime[i]){
            count++;
        }
    }
    return count;

}