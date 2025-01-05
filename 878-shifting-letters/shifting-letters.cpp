class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        string str = s;
        long long sum = 0;  // Use long long for cumulative sum

        // Calculate the total sum of shifts
        for (int i = 0; i < shifts.size(); i++) {
            sum += shifts[i];
        }

        // Create the vector with cumulative shifts
        vector<long long> vec(shifts.size(), sum);  // Use long long for vec
        for (int i = 1; i < shifts.size(); i++) {
            vec[i] = sum - shifts[i - 1];
            sum -= shifts[i - 1];
        }

        // Apply the shifts to the string
        for (int i = 0; i < s.size(); i++) {
            str[i] = 'a' + (str[i] - 'a' + vec[i] % 26) % 26;  // Handle large shifts with mod
        }

        return str;
    }
};
