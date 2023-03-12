void miniMaxSum(vector<int> arr) {
    sort(arr.begin(),arr.end());
    long minSum=0;
    long maxSum=0;
    vector<int>::iterator it1;
    vector<int>::iterator it2;
    for(it1=arr.begin();it1<arr.end()-1;it1++)
    {
        minSum+=*it1;
        
    }
    for(it2=arr.end();it2>arr.begin();it2--)
    {
        maxSum+=*it2;
    }
    cout<<minSum<<" ";
    cout<<maxSum<<" ";
    
}