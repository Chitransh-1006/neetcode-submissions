class Solution {
   public:
    stack<double> st;
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        int count = 0;
        vector<pair<int, int>> car;
        for (int i = 0; i < n; i++) {
            car.push_back({position[i], speed[i]});
        }
        sort(car.begin(), car.end(), greater<pair<int, int>>());
        for (int i = 0; i < n; i++) {
            double time = (double)(target - car[i].first) / car[i].second;
            if (st.empty()) {
                count++;
                st.push(time);
            } else if (st.top() >= time)
                continue;
            else {
                count++;
                st.push(time);
            }
        }
        return count;
    }
};
