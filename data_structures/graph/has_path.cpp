

#include <iostream>
#include <unordered_map>
#include <vector>
#include <deque>

bool has_path(std::unordered_map<char, std::vector<char>> graph, char src, char dest)
{

    std::deque<char> queqe;

    for(auto a : graph[src])
    {
        if(a)
            queqe.push_back(a);
    }

    char tmp;

    while(!queqe.empty())
    {

        tmp = queqe.front();
        queqe.pop_front();
        
        if(tmp == dest)
            return true;

        for(auto a : graph[tmp])
        {
            if(a)
                queqe.push_back(a);
        }

    }

    return false;

}

int main(void)
{

    std::unordered_map<char, std::vector<char>> graph
    {
        
        {'f',{'g','i'}},
        {'g',{'h'}},
        {'h',{'\0'}},
        {'i', {'g', 'k'}},
        {'j', {'i'}},
        {'k', {'\0'}}
    };

    const char* result[] = {"false", "true"};

    std::cout << "has path?" << std::endl;
    std::cout << result[has_path(graph, 'f', 'k')] << std::endl << std::endl;

    std::cout << "has path?" << std::endl;
    std::cout << result[has_path(graph, 'f', 'j')] << std::endl << std::endl;

    std::cout << "has path?" << std::endl;
    std::cout << result[has_path(graph, 'i', 'h')] << std::endl << std::endl;


}
