
#include <bits/stdc++.h>

void reverse_str(std::string::iterator beg, std::string::iterator end)
{

    std::swap(*beg, *end);

    if(end <= beg)
    {
        std::swap(*beg, *end);
        return;
    }
    
    else
        reverse_str(beg + 1, end - 1);

    return;

}

int main(void)
{

    std::string str;
    std::cin >> str;

    reverse_str(str.begin(), str.end() - 1);

    std::cout << str << std::endl;
    


}

