

#include <bits/stdc++.h>

bool is_palindrome(uint32_t num, uint32_t copy)
{

    copy *= 10;
    std::cout << num << " " << copy << std::endl;

    if(num > 9)
        if(!is_palindrome(num / 10, num % 10))
            return false;
    else
        return num == copy % 10; 
    
    return true;

}
    


int main(void)
{

    uint32_t tmp;
    std::cin >> tmp;
    std::cout << is_palindrome(tmp, 0) << std::endl;

}
