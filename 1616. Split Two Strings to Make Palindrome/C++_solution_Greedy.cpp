class Solution {
public:
    bool checkPalindrome(string &s, int i, int j){
        while(i<j){
            if(s[i++]!=s[j--])  return false;
        }
        return true;
    }
    bool check(string &a, string &b){
        int i=0, j=a.length()-1;
        
        while(i<j){
            if(a[i]!=b[j]){
                return checkPalindrome(a, i, j) || checkPalindrome(b, i, j);
            }
            ++i, --j;
        }
        return true;
    }
    bool checkPalindromeFormation(string a, string b) {
        return check(a, b) || check(b, a);
    }
};