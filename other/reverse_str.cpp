
#include <bits/stdc++.h>

std::string reverse_str(std::string str)
{

    std::string::iterator beg = str.begin();
    std::string::iterator endd = str.end() - 1;

    while(beg != endd && beg < endd)
    {
        std::swap(*beg, *endd);

        beg++;
        endd--;
    }


    return str;
}

int main(void)
{
    std::string str;
    std::cin >> str;
    std::cout << reverse_str(str) << std::endl;
     

}
