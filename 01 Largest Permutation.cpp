
/*
 * Complete the 'largestPermutation' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY arr
 */
//method -1 brute force
vector<int> largestPermutation(int k, vector<int> arr) {
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        int idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[idx]) idx=j;
        }
        if(idx != i){
            swap(arr[i],arr[idx]);
            k--;
        }
        if(k==0) return arr;
    }
    
    return arr;

}

// method -2
vector<int> largestPermutation(int k, vector<int> arr) {
    unordered_map<int,int>mp;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]=i;
    }
    int number=arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[i]==number){
            number--;
            continue;
        }
        int idx=mp[number];
        mp[arr[i]]=idx;
        swap(arr[i],arr[idx]);
        k--;
        number--;
        if(k==0) return arr;
    }
    return arr;
}
