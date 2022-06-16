

#include <bits/stdc++.h>

bool is_palindrome(uint32_t x)
{

    uint32_t tmpx, y = 0;

    tmpx = x;

    while(tmpx)
    {

        y *= 10;
        y += tmpx % 10; 
        tmpx /= 10;

    }

    return y == x;
    
}

int main(void)
{
    uint32_t x;
    std::cout << "type your number to check whether is it palindrome number: ";
    std::cin >> x;
    const char* states[] = {"false", "true"};
    std::cout << states[is_palindrome(x)] << std::endl;

}
