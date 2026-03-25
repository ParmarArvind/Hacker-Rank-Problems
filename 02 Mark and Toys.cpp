
int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(), prices.end());
    int count=0;
    int n=prices.size();
    for(int i=0;i<n;i++)
    {
        if(k>= prices[i]) {
            k -=prices[i];
        }
        else return i;
    }
    return n;
}
