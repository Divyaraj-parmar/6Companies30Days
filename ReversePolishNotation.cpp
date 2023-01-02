class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         stack<string> s;
        int a=0;
         for(auto it:tokens)
         { 
             if (it!="+" && it!="-" && it!="*" && it!="/")
             s.push(it);
             else{
            
             int s2 = stoi(s.top());
             s.pop();
             int s1 = stoi(s.top());
             s.pop();
             if(it=="+")
             a = s1+s2;
            if(it=="-")
             a = s1-s2;
             if(it=="*")
             a = s1*s2;
            if(it=="/")
             a = s1/s2;
             s.push(to_string(a));

             }
         }
         return stoi(s.top());

    }
};