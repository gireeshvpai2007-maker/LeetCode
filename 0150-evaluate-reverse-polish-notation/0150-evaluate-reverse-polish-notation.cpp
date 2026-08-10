class Solution {
    bool isoperator(string c)
    {
        return c == "+" || c == "-" || c == "*" || c == "/";
    }

public:
    int evalRPN(vector<string>& exp)
    {
        stack<int> st;

        for (int i = 0; i < exp.size(); i++)
        {
            if (!isoperator(exp[i]))
            {
                st.push(stoi(exp[i]));
            }
            else
            {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                if (exp[i] == "+")
                    st.push(a + b);

                else if (exp[i] == "-")
                    st.push(a - b);

                else if (exp[i] == "*")
                    st.push(a * b);

                else if (exp[i] == "/")
                    st.push(a / b);
            }
        }

        return st.top();
    }
};