class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> s1; 
        queue<int> s2; 

        for (int student : students) {
            s1.push(student);
        }
        for (int sandwich : sandwiches) {
            s2.push(sandwich);
        }
        int i = 0;
        while (!s1.empty() && i  < s2.size()) {
            if (s1.front() == s2.front()){  //if both 1st elements are equal then pop the 1st elements
                s1.pop();
                s2.pop();
                i=0;      //i is the key here,if none of the student take the 1st sandwich then loop will end
            } else {
                int student = s1.front();
                s1.pop();
                s1.push(student);
                i++;
            }
        }
        return s1.size();
    }
};
//seconf approach is more efficient - 100%
vector<int> counts(2, 0);
        for (int student : students)
            counts[student]++;

        int remaining = sandwiches.size();
        for (int sandwich : sandwiches) {
            if (counts[sandwich] == 0)
                break;
            if (remaining == 0)
                break;
            counts[sandwich]--;
            remaining--;
        }

        return remaining;
