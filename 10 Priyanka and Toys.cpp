/*
 * Complete the 'toys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY w as parameter.
 */

int toys(vector<int> w) {
    
    sort(w.begin(),w.end());
    int Min=w[0];
    int container=1;
    for(int i=1;i<(int)w.size();i++)
    {
        if(w[i]-Min <= 4) continue;
        else{
            Min=w[i];
            container++;
        }
    }
    return container;
    
}
