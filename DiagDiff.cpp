int diagonalDifference(vector<vector<int>> arr) {
        int diag1=0;
        int diag2=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr[i].size();j++)
            {
                if(i==j)
                {
                    diag1+=arr[i][j];
                }
                if(i+j==arr.size()-1)
                {
                    diag2+=arr[i][j];
                }
            }  
            
        }
        return abs(diag1-diag2);
    

}