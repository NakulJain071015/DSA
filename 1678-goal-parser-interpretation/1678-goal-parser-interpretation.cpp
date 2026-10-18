class Solution {
public:
    string interpret(string command) {
        string ans;
        int n = command.length();
        for(int i = 0; i < n; i++){
            if(command[i] == '(' && command[i+1] == ')'){
                ans += 'o';
            }
            else if(command[i] == '(' && command[i+1] != ')'){
                ans += 'a';
            }
            else if(command[i] == 'G' || command[i] == 'l') ans += command[i];
        }
        return ans;
    }
};