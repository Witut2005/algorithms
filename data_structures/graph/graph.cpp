
#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
#include <deque>

void graph_depth_print(std::unordered_map<char, std::vector<char>> graph, char start)
{

    std::stack<char> stack;


    for(auto a = graph[start].end() - 1; a >= graph[start].begin(); a--)
    {
        if(*a)
            stack.push(*a);
    }

    std::cout <<  start << " ";


    while(!stack.empty())
    {
        char tmp = stack.top();
        stack.pop();
        std::cout << tmp << " ";

        for(auto a : graph[tmp])
        {
            if(a)
                stack.push(a);
        }
    }
}

void graph_breadth_print(std::unordered_map<char, std::vector<char>> graph, char start)
{

    std::deque<char> queue;
    std::cout << start << " ";

    for(auto a : graph[start])
    {
        if(a)
            queue.push_back(a);
    }

    while(!queue.empty())
    {
        start = queue.front();
        queue.pop_front();

        for(auto a : graph[start])
        {
            if(a)
                queue.push_back(a);
        }

        std::cout << start << " ";
    }

    

}


int main(void)
{

    std::unordered_map<char, std::vector<char>> graph = 
    { 
        {'a', {'b','c'}}, 
        {'b', {'d'}}, 
        {'c', {'e'}}, 
        {'d', {'f'}}, 
        {'e', {'\0'}},
        {'f', {'\0'}}
    };
    
    std::cout << "depth first: ";
    graph_depth_print(graph, 'a');
    std::cout << std::endl;

    std::cout << "breadth first: ";
    graph_breadth_print(graph, 'a');

    std::cout << std::endl;
}
