class Solution {
public:
    int countSubstrings(string s) {
       int n =s.size(), count =n;
		//Case 1: ODD Length Palindrome
        for(int i=1,left=0,right=2;i<n;i++,left=i-1,right=i+1)
            while(left>=0 && right<n && s[left] == s[right]) left--,right++,count++;
		//Case 2: EVEN Length Palindrome
        for(int i =1,left=0,right=1;i<n;i++,left=i-1,right=i)
            while(left >=0 && right<n && s[left] == s[right]) left--,right++,count++;
        return count;
    }
};