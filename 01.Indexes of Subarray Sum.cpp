class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int s=0;
        int e=0;
        int currsum=0;
        int n=arr.size();
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            currsum+=arr[i];
            if(target<=currsum)
            {
                e=i;
            
            while(target<currsum && s<=e)
            {
                currsum-=arr[s];
                s++;
            }
            if(currsum==target)
            {
                res.push_back(s+1);
                res.push_back(e+1);
                return res;
            }
        }
        }
        res.push_back(-1);
        return res;
        
    }
};
