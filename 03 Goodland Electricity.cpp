int pylons(int k, vector<int> arr) {

    int n = arr.size();
    int i = 0;
    int plants = 0;

    while(i < n)
    {
        int pos = min(n - 1, i + k - 1);
        bool found = false;

        // search backward in window
        for(int j = pos; j >= max(0, i - k + 1); j--)
        {
            if(arr[j] == 1)
            {
                plants++;
                i = j + k;  // jump to next uncovered city
                found = true;
                break;
            }
        }

        if(!found) return -1;
    }

    return plants;
}
