class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {     
        char e = target + 1;
        while(find(letters.begin(), letters.end(), e) == letters.end()) {
            e = e + 1;
        }
        
        return e;
    }
};