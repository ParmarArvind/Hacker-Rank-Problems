
/*
 * Complete the 'virusIndices' function below.
 *
 * The function accepts following parameters:
 *  1. STRING p
 *  2. STRING v
 */
//method -1 brute force ( TLE) 
void virusIndices(string p, string v) {
    // Print the answer for this test case in a single line
    int n=p.size();
    int m=v.size();
    vector<int> ans;
    for(int i=0;i<=n-m;i++)
    {
        int count=0;
        bool flag=true;
        int k=i;
        for(int j=0;j<m;j++){
            if(p[k] != v[j]) count++;
            
            k++;
            
            if(count>1) {
                flag=false;
                break;
            }
        }
        
        if(flag) ans.push_back(i);
    }
    
    if(ans.size()==0) cout<<"No Match!";
    else
    {
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
    }
    cout<<endl;

}
