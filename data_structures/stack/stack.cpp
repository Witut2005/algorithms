

#include <iostream>

template<class T>
class Stack
{

    private:
    T* sp;
    uint32_t stack_size;

    public:

    Stack()
    {
        stack_size = 0;
        sp = (T*)malloc(sizeof(T));
    }

    void push(T value)
    {     
        stack_size++;
        sp = (T*)realloc(sp, sizeof(T) * stack_size);
        *(sp + stack_size - 1) = value;
    }

    void pop()
    {     
        stack_size--;
        sp = (T*)realloc(sp, sizeof(T) * stack_size);
    }

    T top()
    {
        return *(sp + stack_size - 1);
    }

    bool empty()
    {
        return stack_size == 0;
    }

    uint32_t size()
    {
        return stack_size;
    }


};


int main(void)
{

    Stack<int> x;
    
    for(int i = 0; i < 5; i++)
        x.push(i);


    while(!x.empty())
    {
        std::cout << x.top() << std::endl;
        x.pop();
    }


}
