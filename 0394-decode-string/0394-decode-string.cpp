class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> resultStack;
        string result = "";
        int i = 0;
        
        while (i < s.size()) {
            if (isdigit(s[i])) {
                int num = 0;
                while (isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }
                counts.push(num);
            } else if (s[i] == '[') {
                resultStack.push(result);
                result = "";
                i++;
            } else if (s[i] == ']') {
                string temp = resultStack.top();
                resultStack.pop();
                int repeat = counts.top();
                counts.pop();
                for (int j = 0; j < repeat; j++) {
                    temp += result;
                }
                result = temp;
                i++;
            } else {
                result += s[i];
                i++;
            }
        }
        
        return result;
    }
};
