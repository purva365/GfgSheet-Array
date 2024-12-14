class Solution {
  public:
    // Function returns the second largest element
    int getSecondLargest(vector<int> &arr) {
        int large = INT_MIN;
        int largest = INT_MIN;
        int n = arr.size();
        
        // Edge case: If the array size is less than 2, return -1
        if (n < 2) return -1;
        
        // Finding the largest element
        for (int i = 0; i < n; i++) {
            large = max(large, arr[i]);
        }

        // Finding the second largest element
        for (int i = 0; i < n; i++) {
            if (arr[i] != large) {
                largest = max(largest, arr[i]);
            }
        }
        
        // If no second largest element was found
        if (largest == INT_MIN) return -1;
        
        return largest;
    }
};
