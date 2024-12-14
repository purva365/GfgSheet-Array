class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
      int n=arr.size();
      int sum=0;
      int maxi=INT_MIN;
      for(int i=0;i<n;i++)
      {
          sum+=arr[i];
          if(sum>maxi)
          {
              maxi=sum;
          }
          if(sum<0)
          {
              sum=0;
          }
      }
      return maxi;
    }
};
