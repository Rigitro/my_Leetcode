int totalMoney(int n) {
    int week = 0;
    int total = 0;
    for(int i=0;i<n;i++){
        int dayof = i%7;
        int mon = week+1;
        int today = dayof + mon;

        total = total+today;

        if(dayof == 6){
            week++;
        }
    }

    return total;
}