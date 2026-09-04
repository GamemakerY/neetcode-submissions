#import <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i=0; i<=(s.length()-1); i++){
            char current_char = s[i];
            //opennig bracket
            //closing bracket
            if(current_char=='(' || current_char=='{' || current_char=='['){
                stk.push(current_char);
            }
            if(current_char==')' || current_char=='}' || current_char==']'){
                switch(current_char){
                    case ')':{
                        if(!stk.empty()){
                            if(stk.top()=='('){
                            stk.pop();
                            }
                        else{
                            return false;
                        }
                        }
                        else{
                            return false;
                        }

                        break;
                    }
                    case '}':{
                        if(!stk.empty()){
                            if(stk.top()=='{'){
                            stk.pop();
                            }
                        else{
                            return false;
                        }
                        }
                        else{
                            return false;
                        }

                        break;
                    case ']':{
                        if(!stk.empty()){
                            if(stk.top()=='['){
                            stk.pop();
                            }
                        else{
                            return false;
                        }
                        }
                        else{
                            return false;
                        }
                        break;
                    }
                }
            }
        }
    }
    if(stk.empty()){
        return true;
    }
    else{
        return false;
    }

}
};
