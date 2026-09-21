int maxProfit(int* prices, int pricesSize) {
    if(pricesSize<2){
        return 0;
    }
    int min=prices[0];
    int maxprofit = 0;
    for(int i=0;i<pricesSize;i++){
        if(prices[i]<min){
            min=prices[i];
        }else if(prices[i]-min>maxprofit){
            maxprofit = prices[i]-min;
        }
    }
    return maxprofit;
}