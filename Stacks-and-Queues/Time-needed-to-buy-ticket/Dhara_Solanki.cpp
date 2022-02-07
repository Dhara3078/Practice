class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        deque<pair<int,int>>dq;
        for(int i = 0;  i < tickets.size(); i++) {
            dq.push_back({tickets[i] , i});
        }
        int ans = 0;
        while(!dq.empty()) {
            int val = dq.front().first;
            int idx = dq.front().second;
            val--;
            ans++;
            if(idx == k && val == 0) {
                break;
            }
            if(val == 0) {
                dq.pop_front();
            } else {
                dq.pop_front();
                dq.push_back({val, idx});
            }
        }
        return ans;
    }
};
