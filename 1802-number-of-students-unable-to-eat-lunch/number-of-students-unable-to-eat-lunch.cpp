class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> snd;
        for (int i=sandwiches.size()-1;i>=0;i--) {
            snd.push(sandwiches[i]);
        }
        queue<int> stud;
         for (int student : students) {
            stud.push(student);
        }
        int count = 0;
        while (!stud.empty()) {
            if (stud.front() == snd.top()) {
                snd.pop();
                stud.pop();
                count=0;
            } else {
                int x = stud.front();
                stud.pop();
                stud.push(x);
                count++;
            }
             if (count == stud.size()) {
                break;
            }
        }
        return count;
    }
};