/*
 * Complete the 'beautifulPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY A
 *  2. INTEGER_ARRAY B
 */

int beautifulPairs(vector<int> A, vector<int> B) {
    int pairs=0;
    int n=A.size();
    unordered_map<int,int>freq1;
     unordered_map<int,int>freq2;
    
    for(int i=0;i<n;i++) {
        freq1[A[i]]++;
        freq2[B[i]]++;
    }
    
    
    for(auto &it:freq1)
    {
        if(freq2.find(it.first) != freq2.end())
        {
            pairs += min(it.second , freq2[it.first]);
        }
    }
    if( pairs == n) return pairs-1;
    return pairs+1;
}
