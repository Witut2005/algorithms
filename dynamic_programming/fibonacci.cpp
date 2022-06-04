
#include <iostream>
#include <map>

std::map<uint64_t, uint64_t> fib_map;

uint64_t fib(uint64_t index)
{
    if(fib_map.find(index) != fib_map.end())
    {
        std::cout << "i know it!"<< std::endl;
        return fib_map[index];
    }

    if(index <= 2)
        return 1;
    

    fib_map.insert({index, fib(index - 1) + fib(index - 2) });
    return fib_map[index];

}


int main(void)
{
    
    uint64_t index;
    std::cin >> index;

    std::cout << fib(index) << std::endl;


}
