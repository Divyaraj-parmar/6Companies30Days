class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int ans = INT_MAX;
        int n = cards.size();
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<n;i++){
            adj[cards[i]].push_back(i); // storing indexex as list
        }
        for(auto &it:adj){
            if(it.second.size()>1){ //check if the element is appeared more than once
                
                for(int i=0;i<it.second.size()-1;i++){
                    ans=min(ans,it.second[i+1]-it.second[i]+1);
                }
            }
        }
        return (ans == INT_MAX) ? -1: ans;
    }
};