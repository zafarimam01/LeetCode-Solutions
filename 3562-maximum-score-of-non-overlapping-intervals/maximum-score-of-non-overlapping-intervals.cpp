#include <vector>
#include <array>
#include <algorithm>

using namespace std;

class Solution {
    struct Interval {
        int l, r, w, id;
    };

    struct State {
        long long weight = -1;
        vector<int> indices;

        bool operator<(const State& other) const {
            if (weight != other.weight) {
                return weight < other.weight;
            }
            return indices > other.indices; // Lexicographically smaller indices preferred
        }
    };

public:
    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<Interval> a(n);
        for (int i = 0; i < n; ++i) {
            a[i] = {intervals[i][0], intervals[i][1], intervals[i][2], i};
        }

        sort(a.begin(), a.end(), [](const Interval& x, const Interval& y) {
            return x.r < y.r;
        });

        // dp[i][k]: best state considering first i intervals taking exactly k intervals
        vector<array<State, 5>> dp(n + 1);
        for (int i = 0; i <= n; ++i) {
            dp[i][0].weight = 0;
            dp[i][0].indices = {};
        }

        for (int i = 1; i <= n; ++i) {
            const auto& cur = a[i - 1];

            // Find last non-overlapping interval
            int low = 0, high = i - 1, p = 0;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (mid > 0 && a[mid - 1].r < cur.l) {
                    p = mid;
                    low = mid + 1;
                } else if (mid == 0) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            for (int k = 1; k <= 4; ++k) {
                // Option 1: Do not include current interval
                dp[i][k] = dp[i - 1][k];

                // Option 2: Include current interval
                if (dp[p][k - 1].weight != -1) {
                    State candidate;
                    candidate.weight = dp[p][k - 1].weight + cur.w;
                    candidate.indices = dp[p][k - 1].indices;
                    candidate.indices.push_back(cur.id);
                    sort(candidate.indices.begin(), candidate.indices.end());

                    if (dp[i][k] < candidate) {
                        dp[i][k] = candidate;
                    }
                }
            }
        }

        State best;
        for (int k = 1; k <= 4; ++k) {
            if (best < dp[n][k]) {
                best = dp[n][k];
            }
        }

        return best.indices;
    }
};