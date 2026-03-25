
/*
 * Complete the 'sockMerchant' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY ar
 */

int sockMerchant(int n, vector<int> ar) {
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[ar[i]]++;
    }
    
    int socks=0;
    for(auto &it:mp)
    {
        socks+=it.second/2;
    }
    return socks;
}
