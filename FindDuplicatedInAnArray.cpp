class Solution {

  public:
    vector<int> findDuplicates(vector<int>& arr) {
    
    int n=arr.size();
    vector<int>res;
    map<int,int>freq;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
        
    }
    for(auto it:freq)
    {
        if(it.second==2)
        {
            res.push_back(it.first);
        }
    }
    sort(res.begin(),res.end());
    return res;
    
    }
};
