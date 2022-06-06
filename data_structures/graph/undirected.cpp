
#include <vector>
#include <iostream>
#include <unordered_map>
#include <stack>

#define accessed true
#define unaccessed false

void visit_all(std::unordered_map<char, std::pair<bool, std::vector<char>>> graph, char start)
{

    std::stack<char> stack;

    graph[start].first = accessed;

    for(auto a : graph[start].second)
    {
        if(a)
            stack.push(a);
    }

    std::cout << start << " ";

    while(!stack.empty())
    {

        char tmp;

        tmp = stack.top();    
        stack.pop();

    
        if(graph[tmp].first != accessed)
            std::cout << tmp << " ";

        graph[tmp].first = accessed;

        for(auto a : graph[tmp].second)
        {
            if(a != '\0' && graph[a].first == unaccessed)
            {
                stack.push(a);
            }
        }
    }

    std::cout << std::endl;

}


int main(void)
{

    std::unordered_map<char, std::pair<bool, std::vector<char>>> graph = 
    {

        {'a',{false, {'b', 'c'}}},
        {'b',{false, {'a', 'c'}}},
        {'c',{false, {'a', 'b'}}}

    };

    visit_all(graph, 'a');

}
