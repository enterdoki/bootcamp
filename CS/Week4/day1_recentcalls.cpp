class RecentCounter {
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        time.push(t);
        while(t - 3000 > time.front())
            time.pop();
        return time.size();
    }
private:
    queue<int> time;
};