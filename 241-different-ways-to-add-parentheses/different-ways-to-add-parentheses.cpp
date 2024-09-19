class Solution {
public:
    vector<int> solve(string expression) {
        vector<int> result;
        for (int i = 0; i < expression.size(); i++) {
            if (expression[i] == '+' || expression[i] == '-' ||
                expression[i] == '*') {
                vector<int> leftSolve = solve(expression.substr(0, i));
                vector<int> rightSolve = solve(expression.substr(i + 1));
                for (auto &x : leftSolve) {
                    for (auto &j : rightSolve) {
                        if (expression[i] == '+') {
                            result.push_back(x + j);
                        }
                        else if (expression[i] == '*') {
                            result.push_back(x * j);
                        }
                        else {
                            result.push_back(x - j);
                        }
                    }
                }
            }
        }
        if (result.empty()) {
            result.push_back(stoi(expression));
        }
        return result;
    }
    vector<int> diffWaysToCompute(string expression) {
        return solve(expression);
    }
};