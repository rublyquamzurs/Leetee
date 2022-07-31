#include "CSolution.h"

using namespace std;


static bool isValid(string s) {
    stack<char> t_stack;
    string::iterator str_iter = s.begin();
    for (; str_iter != s.end(); str_iter++)
    {
        char& t_c = *str_iter;
        if (t_c == '(' || t_c == '{' || t_c == '[')
        {
            t_stack.push(t_c);
        }
        else if (t_c == ')' || t_c == '}' || t_c == ']')
        {
            if (t_stack.empty())
            {
                return false;
            }
            char& stack_top = t_stack.top();
            switch (t_c)
            {
            case ')':
                if (stack_top != '(')
                {
                    return false;
                }
                break;
            case '}':
                if (stack_top != '{')
                {
                    return false;
                }
                break;
            case ']':
                if (stack_top != '[')
                {
                    return false;
                }
                break;
            default:
                break;
            }
            t_stack.pop();
        }
    }
    if (!t_stack.empty())
    {
        return false;
    }
    return true;
}

void RunIsValid() {
    string s = "()[]{}";
    printf("%s\n", isValid(s) ? "true" : "false");
}
