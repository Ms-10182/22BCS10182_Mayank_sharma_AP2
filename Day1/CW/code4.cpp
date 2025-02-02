// Problem: Valid Palindrome
// Name: Mayank Sharma
// UID: 22BCS10182
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        string word;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                word+=s[i];
            }
            if(s[i]>=48 && s[i]<=57){
                word+=s[i];
            }
            
        }
        cout<<word;
        string temp = word;
        reverse(word.begin(),word.end());
        return word == temp ;
    }
};