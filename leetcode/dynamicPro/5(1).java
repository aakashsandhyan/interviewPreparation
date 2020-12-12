class Solution {
    public String longestPalindrome(String s) {
        
        int n = s.length();
        String ans = "";
        boolean dp[][] = new boolean[n][n];
        
        //dp[i][j] represents if substring(i,j) is a palindrome or not
        int start = 0;
        int end = 0;
        int len = 1;
        for(int i = 0; i < n; i++)
        {
            dp[i][i] = true;
        }
        for(int i = 0;i < n - 1; i++)
        {
            dp[i][i+1] = (s.charAt(i) == s.charAt(i+1)) ? true : false;
            if(dp[i][i+1] == true && len!=2)
            {
                len++;
                start = i;
                end = i + 1;
            }
        }
        
        for(int i = 2;i < n;i++)
        {
            for(int j = 0; j + i < n;j++)
            {
                dp[j][j+i] = (s.charAt(j) == s.charAt(j+i) && dp[j+1][j+i-1]) ? true : false;
                if(dp[j][j+i] == true && i + 1 > len)
                {
                    len = i + 1;
                    start = j;
                    end = j + i;
                }
            }
        }
        
        
        return s.substring(start, end + 1);
    }
}