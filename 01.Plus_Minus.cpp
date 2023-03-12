void plusMinus(vector<int> arr) {
    float n=arr.size();
    float pos_count=0;
    float neg_count=0;
    float zero_count=0;
    vector<int>::iterator it;
    for(it=arr.begin();it<arr.end();it++)
    {
        if(*it==0)
        {
            zero_count++;
        }
        else if(*it>0)
        {
            pos_count++;
        }
        else if(*it<0)
        {
            neg_count++;
        }
    }
    cout<<setprecision(6);
    cout<<pos_count/n<<endl;
    cout<<neg_count/n<<endl;
    cout<<zero_count/n<<endl;
}