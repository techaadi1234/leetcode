class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>fm;
        for(int k:nums)fm[k]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minheap;
        for(auto it:fm){
              minheap.push({it.second,it.first});
            if(minheap.size()>k)minheap.pop();
          
        }
        vector<int>result;
        while(!minheap.empty()){
            result.push_back(minheap.top().second);
            minheap.pop();
        }
        return result;
    }
};