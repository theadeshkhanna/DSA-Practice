class MyHashSet {
private:
    unordered_map<int, int> m;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        if (m.count(key) == 0) {
            m[key] = 1;
        }
    }
    
    void remove(int key) {
        if (m.count(key) != 0) {
            m.erase(key);
        }
    }
    
    bool contains(int key) {
        if (m.count(key) != 0) return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */