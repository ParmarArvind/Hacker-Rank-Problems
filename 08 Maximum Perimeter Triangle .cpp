
/*
 * Complete the 'maximumPerimeterTriangle' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY sticks as parameter.
 */
typedef long long ll;
vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    
    sort(sticks.begin(),sticks.end());
    int n=sticks.size();
    vector<int>ans(3,0);
    ll peri=0;
    for(int i=0;i<=n-3;i++)
    {
        int a=sticks[i];
        int b=sticks[i+1];
        int c=sticks[i+2];
        
        if(a+b> c) 
        {
            ll temp=(ll)a + (ll)b +(ll)c;
            if(temp> peri) ans={a,b,c};
            else if(temp==peri)
            {
                
                if( c>ans[2]){
                    ans={a,b,c};
                }
                else if(c==ans[2])
                {
                    if(a<ans[0])  ans={a,b,c};
                }
            }
        }
    }
    if(ans[0]==0 && ans[1] ==0 && ans[2]==0) return {-1};
    return ans;

}
