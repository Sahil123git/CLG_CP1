class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int low = 0, high = nums.size() - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[low] <= nums[mid])
            { // if this side is not sorted then right side will be
                if (nums[low] <= target && nums[mid] > target)
                {                   // sorted  so move to tht side
                    high = mid - 1; // if this side is sorted but ele is not b/w this range
                }                   // then take low to mid+1
                else
                {
                    low = mid + 1;
                }
            }
            else
            { // if(nums[mid + 1] <= nums[high]){ (this will be sorted if lft side is not sorted)
                if (nums[mid] < target && nums[high] >= target)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            // cout << low <<" "<<mid<<" "<<high<<endl;
        }
        return -1;
    }
};