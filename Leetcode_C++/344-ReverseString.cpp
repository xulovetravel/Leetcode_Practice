class Solution {
public:
    void reverseString(vector<char>& s) {
        char tmp;
        vector<char>result;
        int len= s.size()-1;
        for(int i =0; i<len; i++) {
            char temp = s[i];
            s[i] = s[len];
            s[len] = temp;
            len--;
        }
    }
};