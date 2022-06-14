

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>


std::unordered_map<int32_t, std::pair<bool, std::vector<int32_t>>> results;

std::pair<bool, std::vector<int32_t>> can_sum(int32_t num, std::vector<int32_t> vec)
{
    if(results.count(num))
        return results[num];

    if(num == 0)
    {
        results.insert({num,{true,vec}});
        return {true,vec};
    }

    if(num < 0)
    {
        results.insert({num, {false, vec}});
        return {false,vec};
    }

    for(const auto& a : vec)
    {
        if(can_sum(num - a, vec).first)
        { 
            results.insert({num, {true, vec}});
            return {true,vec};
        }
    }

    results.insert({num, {false, vec}});
    return {false, vec};

}


int main(void)
{

    int32_t num;
    std::cin >> num;

    std::vector<int32_t> vec = {7,14};

    const char* state[] = {"false", "true"};


    std::cout << state[can_sum(num, vec).first] << std::endl;


}
