
#include <queue>
#include <iostream>
#include <vector>

int main(void)
{

    std::priority_queue<int, std::vector<int>, std::greater<int>> heap; //min heap

    for(int i = 0; i < 5; i++)
        heap.push(i);

    std::cout << "the lowest is: " << heap.top() << std::endl;

}
