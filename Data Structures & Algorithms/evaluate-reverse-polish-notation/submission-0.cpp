class Solution {
    stack<int> t;
public:
    int evalRPN(vector<string>& tokens) {
        for(int i=0;i<tokens.size();i++){
            string c=tokens[i];
            
            if(c=="+"){
                int a=(t.top());
                t.pop();
                int b=(t.top());
                t.pop();
                int c=a+b;
                t.push(c);
            }
             else if(c=="*"){
                int a=(t.top());
                t.pop();
                int b=(t.top());
               t.pop();
                int c=a*b;
                t.push(c);
            }
            else if(c=="/"){
                int a=(t.top());
                t.pop();
                int b=(t.top());
                t.pop();
                int c=b/a;
                t.push(c);
            }
            else if(c=="-"){
                int a=(t.top());
                t.pop();
                int b=(t.top());
                t.pop();
                int c=b-a;
                t.push(c);
            }
            else{
                t.push(stoi(c));
            }

        }
        return (t.top());
    }
};
