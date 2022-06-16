

#include <bits/stdc++.h>

uint32_t add(uint32_t n)
{

    if(n)
        return n + add(n - 1);

    else
        return 0;
}


int main(void)
{

    uint32_t n;
    std::cin >> n;
    std::cout << add(n) << std::endl;

}

