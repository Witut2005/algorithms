
#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>

//parent (index-2)/2
//left (index * 2) + 1
//right (index * 2) + 1
//index

template <class T>
class Heap
{

    private:
        std::vector<T> heap;

    public:
        T parent(uint32_t index)
        {
            return heap[(index - 1) / 2]; 
        }

        T left(uint32_t index)
        {
            return heap[(index * 2) + 1]; 
        }

        T right(uint32_t index)
        {
            return heap[(index * 2) + 2];
        }

        uint32_t size()
        {
            return heap.size();
        }

        void add_element(T value)
        {
            if(size())
                
        }


};



int main(void)
{

    Heap<int> heap;

}
