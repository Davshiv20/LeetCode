class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
      unordered_map<int, int> mp;
        int l = 0;
        int mini = INT_MAX;
        bool found = false; // Flag to track if a pair is found
        
        for (int r = 0; r < cards.size(); ++r) {
            mp[cards[r]]++;
            
            // Check if the current card has appeared before
            while (mp[cards[r]] > 1) {
                found = true;
                mini = min(mini, r - l + 1); // Update minimum length if a pair is found
                mp[cards[l]]--; // Decrease count of cards[l] in the map
                l++; // Move left pointer to the right
            }
        }
        
        return found ? mini : -1;
    }
};
