

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


std::unordered_map<int32_t, bool> results;

bool can_sum(int32_t num, std::vector<int32_t> vec)
{
    if(results.count(num))
        return results[num];

    if(num == 0)
    {
        results.insert({num,true});
        return true;
    }

    if(num < 0)
    {
        results.insert({num,false});
        return false;
    }

    for(const auto& a : vec)
    {
        if(can_sum(num - a, vec))
        { 
            results.insert({num, true});
            return true;
        }
    }

    results.insert({num, false});
    return false;

}


int main(void)
{

    int32_t num;
    std::cin >> num;

    std::vector<int32_t> vec = {7,14};

    const char* state[] = {"false", "true"};


    std::cout << state[can_sum(num, vec)] << std::endl;


}
