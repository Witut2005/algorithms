

#include <iostream>
#include <unordered_map>
#include <vector>


int main(void)
{

    std::unordered_map<uint32_t, std::pair<std::vector<uint32_t>, bool>> mapa;

    std::vector<uint32_t> vec;

    mapa.insert({1,{vec,true}});

}

