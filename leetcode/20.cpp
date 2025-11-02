class Solution {
public:
    bool isValid(string s) {
        stack<char> pilha;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                pilha.push(c);
            } else if (pilha.size() > 0) {
                switch (c) {
                    case ')':
                        if (pilha.top() == '(') {
                            pilha.pop();
                        } else return false;
                    break;
                    case ']':
                        if (pilha.top() == '[') {
                            pilha.pop();
                        } else return false;
                    break;
                    case '}':
                        if (pilha.top() == '{') {
                            pilha.pop();
                        } else return false;
                    break;
                }
            } else return false;
        }
        if (pilha.size() == 0) {
            return true;
        } else return false;
    }
};