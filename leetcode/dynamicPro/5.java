class Solution {
    public String longestPalindrome(String s) 
    {
        int n = s.length();
        
        int best_len = 1;
        int best_start = 0;
        
        //odd
        for(int mid = 1; mid < n; mid++)
        {
            for(int i = 1; mid - i >=0 && mid + i < n; i++)
            {
                
                if(s.charAt(mid - i) != s.charAt(mid + i))
                    break;
                
                if(2*i + 1 > best_len)
                {
                    best_len = 2 * i + 1;
                    best_start = mid - i;
                }
            }
        }
        
        for(int mid = 1; mid < n ; mid++)
        {
            // System.out.println("hello" + mid);
            for(int  i = 0; mid - i - 1 >= 0 && mid + i < n; i++)
            {
                // int start = mid - i - 1;
                // int end = mid + i;
                // System.out.println(start + " " + end);
                if(s.charAt(mid - i - 1) != s.charAt(mid + i))
                    break;
                
                if(2*(i + 1) > best_len)
                {
                    best_len = 2 * (i + 1);
                    best_start = mid - i - 1;
                    // System.out.println("Hello");
                }
                
            }
        }
        
        // System.out.println(best_start + " " + best_len);
        return s.substring(best_start, best_start + best_len );
    }
}