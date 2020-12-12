class Solution {
    public int lengthOfLIS(int[] nums) {
        
        int n = nums.length;
        int[] lis = new int[n];
        
        int ans = 1;
        if(n == 0)
            return 0;
        
    
        for(int i = 0; i < n; i++)
        {
            lis[i] = 1;
            for(int j = 0; j < i; j++)
            lis[i] = nums[i] > nums[j] ? Math.max(lis[j] + 1, lis[i]) : lis[i];
            
            ans = Math.max(lis[i], ans);
        }
        
        return ans;
    }
}