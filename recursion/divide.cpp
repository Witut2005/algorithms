
#include <bits/stdc++.h>

int tmp = 0;

int divide(int num, int divisor)
{

    num = abs(num);
    divisor = abs(divisor);


    if(num == 0)
    {
        return 0;
    }

    return divide(num - divisor, divisor) + 1;



}


int main(void)
{

    int num;
    int divisor;
    
    std::cout << "type your num and divisor: ";
    std::cin >> num >> divisor;

    std::cout << divide(num, divisor) << std::endl; 

}
