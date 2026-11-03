class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int n = players.size();
        int m = trainers.size();
        int i = 0;
        int j = 0;
        int cnt = 0;
        sort(trainers.begin(),trainers.end());
        sort(players.begin(),players.end());
        while(i < n && j < m){
            if(players[i] <= trainers[j]){
                i++;
                cnt++;
            }
            j++;
        }
        return cnt;
    }
};