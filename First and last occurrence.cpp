// https://takeuforward.org/plus/dsa/problems/first-and-last-occurrence
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int f = -1, l = -1;
        int n = nums.size();
        int lo = 0, hi = n - 1;
        
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target)
            {
                f = mid;
                hi = mid - 1;
            }
            else if (nums[mid] < target)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        
        if (f == -1) return {-1, -1};
        
        lo = 0;
        hi = n - 1;
        
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target)
            {
                l = mid;
                lo = mid + 1;
            }
            else if (nums[mid] < target)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        
        return {f, l};
    }
};
