class Twitter {

private:
int time;
unordered_map<int,unordered_set<int>>following;
unordered_map<int,vector<pair<int,int>>>tweets;

public:
    Twitter() {
        time=0;

    }
    
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time++,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>>pq;
        int mtc=tweets[userId].size();
        for(int i=max(0,mtc-10);i<mtc;++i)pq.push(tweets[userId][i]);
for (int followeeId : following[userId]) {
            int followeeTweetsCount = tweets[followeeId].size();
            
            for (int i = max(0, followeeTweetsCount - 10); i < followeeTweetsCount; ++i) {
                pq.push(tweets[followeeId][i]);
            }
        }
        vector<int>result;
        int ct=0;
        while(!pq.empty() && ct<10){
            result.push_back(pq.top().second);
            pq.pop();
            ct++;
        }
        return result;
    }
    
    void follow(int followerId, int followeeId) {
        if (followerId != followeeId) {
            following[followerId].insert(followeeId);
        }
    }
    
    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */