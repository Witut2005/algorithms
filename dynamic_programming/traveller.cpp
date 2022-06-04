

#include <iostream>
#include <map>


std::map<std::pair<uint64_t, uint64_t>, uint64_t> remember;

uint64_t how_many_ways(uint64_t x, uint64_t y)
{

    if(remember.find(std::make_pair(x,y)) != remember.end())
    {
        //std::cout << "i know it!" << std::endl;
        return remember[std::make_pair(x,y)];
    }

    if(remember.find(std::make_pair(y,x)) != remember.end())
    {
        //std::cout << "i know it!" << std::endl;
        return remember[std::make_pair(y,x)];
    }

    if(x == 0 || y == 0)
        return 0;

    if(x == 1 && y == 1)
        return 1;

    remember.insert( {std::make_pair(x,y), how_many_ways(x - 1, y) + how_many_ways(x, y - 1)} );
    return remember[std::make_pair(x,y)];

}


int main(void)
{


    uint64_t x,y;
    std::cout << "tell me your grid field: ";
    std::cin >> x >> y;

    std::cout << how_many_ways(x,y) << std::endl;

}
