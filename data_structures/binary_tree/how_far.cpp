
#include <vector>
#include <iostream>
#include <algorithm>

enum direction
{

    right = 1,
    left = 0

};

struct node_t
{
    uint32_t id;
    uint32_t left;
    uint32_t right;
};

class node
{

    private:
        std::vector<node_t> nodes;

    public:

    node()
    {
        nodes.push_back({0xffff,0xffff,0xffff});
        nodes.push_back({1,0xffff,0xffff});
    }

    void insert(uint32_t id)
    {

        if(id % 2 == 1)
        {
            nodes[id / 2].right = id;
            nodes.push_back({id,0,0});
        }

        else
        {
            nodes[id / 2].left = id;
            nodes.push_back({id,0,0});
        }
    }

    void print()
    {
        for(auto it = nodes.begin() + 1; it != nodes.end(); it++)
        {
            std::cout << it->id << " ";
        }
        std::cout << std::endl;
    }

};

uint32_t how_far(uint32_t id_first, uint32_t id_second)
{

    uint32_t result = 0;
    
    while(id_first != id_second)
    {
        if(id_first != 1)
        {
            id_first = id_first / 2;
            result++;
        }

        if(id_second != 1)
        {
            id_second = id_second / 2;
            result++;
        }
    }

    return result;

}

int main(void)
{

    node tree;

    
    uint32_t id_first, id_second;

    std::cout << "id first: ";
    std::cin >> id_first;

    std::cout << "id second: ";
    std::cin >> id_second;

    for(int i = 2; i < std::max(id_first, id_second); i++)
        tree.insert(i);


    std::cout << "id_second first is " << how_far(id_first,id_second) << " units away from id_second" << std::endl;

}
