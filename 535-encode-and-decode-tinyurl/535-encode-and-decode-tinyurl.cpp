class Solution {
private:
    unordered_map<string, int> m;
    int id = 1;
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        m[longUrl] = id;
        string ans = "http://tinyurl.com/"+to_string(id);
        id++;
        return ans;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string substr = shortUrl.substr(shortUrl.size() - (id - 1));
        for (auto c : m) {
            if (c.second == stoi(substr)) {
                return c.first;
            }
        }
        
        return "";
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));