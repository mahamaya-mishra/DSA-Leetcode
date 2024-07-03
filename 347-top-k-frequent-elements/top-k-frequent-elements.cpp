class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n =nums.size();
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        //when u find largets max or top use min heap
        //by deafault we hv max heap

        for(auto i = mp.begin(); i!= mp.end(); i++){ //
           pair<int, int> p ={i->second, i->first}; //
           pq.push(p);
           if(pq.size()>k){
            pq.pop();
           } 
        }
vector<int> v;
while(!pq.empty()){
v.push_back(pq.top().second);
pq.pop();
}
        return v;




    }
};