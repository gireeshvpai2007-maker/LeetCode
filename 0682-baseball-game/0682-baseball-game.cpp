
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int a = st.back();
                int b = st[st.size() - 2];
                st.push_back(a + b);
            }
            else if (operations[i] == "D") {
                st.push_back(2 * st.back());
            }
            else if (operations[i] == "C") {
                st.pop_back();
            }
            else {
                st.push_back(stoi(operations[i]));
            }
        }

        int sum = 0;
        for (int score : st) {
            sum += score;
        }

        return sum;
    }
};
