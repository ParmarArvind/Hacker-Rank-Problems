
/*
 * Complete the 'repeatedString' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. LONG_INTEGER n
 */

long repeatedString(string s, long n) {
    long result=0;
    long count=0;
    if(n<s.size())
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a') count++;
        }
        return count;
    }
    else{
        for(int i=0;i<s.size();i++)
        {
             if(s[i]=='a') count++;
        }
    }
    
    result= count * (long)(n/s.size());
    n=n%s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a') result++;
    }
    return result;
}
