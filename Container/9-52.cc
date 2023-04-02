#include <iostream>
#include <string>
#include <stack>

std::stack<char> del_brakets(const std::string &expression)
{
    std::stack<char> stk;
    int cnt = 0;
    for (auto i = expression.begin(); i < expression.end(); i++)
    {
        stk.push(*i);
        if (*i == '(')
            ++cnt;
        if (cnt && *i == ')')
        {
            while (stk.top() != '(')
                stk.pop();
            stk.pop();
            stk.push('$');
            --cnt;
        }
    }
    return stk;
}

int main()
{
    std::string expression("5x(3+1)-25/(2+3)+4");
    std::string result;
    std::cout << "expression: " << expression << std::endl;
    auto stk = del_brakets(expression);
    while (!stk.empty())
    {
        result.insert(result.begin(), stk.top());
        stk.pop();
    }
    std::cout << "result: " << result << std::endl;
    return 0;
}