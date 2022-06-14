
#include <iostream>
#include <vector>

std::vector<int> merge(std::vector<int> vec)
{

    int mid = vec.size() / 2;


    auto first_begin = vec.begin();
    auto first_end = vec.begin() + mid - 1;

    auto second_begin = vec.begin() + mid;
    auto second_end = vec.end() - 1;

    std::vector<int> tmp;

    for(int i = 0; i < vec.size(); i++)
    {

        if(*first_begin <= *second_begin)
        {
            tmp.push_back(*first_begin);
            first_begin++;
        }

        else
        {
            tmp.push_back(*second_begin);
            second_begin++;
        }

    }
    return tmp;

}

int main(void)
{

    std::vector<int> vec;
    uint32_t n;
    std::cin >> n;

    for(int i = 0; i < n; i++ )
    {
        uint32_t tmp;
        std::cin >> tmp;
        vec.push_back(tmp);
    }


    for(auto a : merge(vec))
        std::cout << a << " ";
    std::cout << std::endl;

}
