class Solution {
public:
    string interpret(string command) {
        
        string pa="";
        for(int i=0; i<command.size(); i++)
        {
            if(command[i] == '(' and command[i+1]==')')
            {
                pa.push_back('o');
                i++;
            }
            else if(command[i]==')' or command[i]=='(')
            {
                continue;
            }
            else pa.push_back(command[i]);
        }
        
        return pa;
    }
};