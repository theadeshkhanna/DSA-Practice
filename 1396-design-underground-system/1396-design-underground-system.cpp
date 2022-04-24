class UndergroundSystem {
private:
    unordered_map<int, pair<string, int>> m1;
    unordered_map<string, pair<int, int>> m2;
    
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        m1[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto c = m1[id];
        m1.erase(id);
        string key = c.first + "_" + stationName;
        m2[key].first += t - c.second;
        m2[key].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string a = startStation + "_" + endStation;
        
        return (double)m2[a].first / m2[a].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */