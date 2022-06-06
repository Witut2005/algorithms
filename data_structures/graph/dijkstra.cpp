
#include <iostream>
#include <stack>
#include <vector>
#include <unordered_map>

using Graph = std::unordered_map<char, std::vector<std::pair<char, uint16_t>>>;

uint32_t shortest_path(Graph q, char start, uint16_t n)
{

    Graph s; //<- processed by algorithm
    //Graph q <-- not processed yet 

    uint16_t* d = new uint16_t [n]; //<-- minimal move cost to given vertex
    char* p = new char[n];          //<-- previous vertex

    for(int i = 0; i < n; i++)
    {
        d[i] = 0xFFFF;
        p[i] = -1;
    }

    d[0] = 0;

}

int main(void)
{

    std::unordered_map<char, std::vector<std::pair<char, uint16_t>>> graph =
    {

        {'0', {{'1', 3}}},
        {'1', {{'2', 1}}},
        {'2', {{'3', 3}, {'5',1}}},
        {'3', {{'1', 3}}},
        {'4', {{'5', 2}}},
        {'5', {{'0', 6}, {'3',1}}}

    };

}
