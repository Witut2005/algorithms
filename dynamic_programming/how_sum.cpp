

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <iomanip>

std::vector<int32_t> result_num;
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
            result_num.push_back(a);
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


    std::cout << "can make sum? "<< state[can_sum(num, vec)] << std::endl;

    std::cout.width(14);
    std::cout.fill(' ');

    std::cout << std::left << "how sum? "; 
    
    if(result_num.empty())
    {
        std::cout << "null" << std::endl;
        return -1;
    }

    for(auto a : result_num)
    {
        std::cout << a << " ";
    }
        
    std::cout << std::endl;

}
