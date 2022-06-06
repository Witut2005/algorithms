
#include <iostream>
#include <stack>

struct node_t
{
    int value;
    node_t* next;
};

node_t* insert_before_head(node_t* head, int val)
{

    node_t* tmp = new node_t;
    tmp->next = head;
    tmp->value = val;

    return tmp;

}

node_t* insert_after(node_t* start, int val)
{

    node_t* tmp = new node_t;
    start->next = tmp;
    tmp->value = val;

    return tmp;

}


void print_list(node_t* start)
{

    while(start->next != nullptr)
    {
        std::cout << start->value << " ";
        start = start->next;
    }

    std::cout << start->value << std::endl;


}

void reverse_list(node_t* start)
{
    node_t* last = start;
    
    std::stack<node_t*> stack;

    while(last->next != nullptr)
    {
        stack.push(last);
        last = last->next;
    }


    while(!stack.empty())
    {

        last->next = stack.top();
        stack.pop();
        last = last->next;

    }

    last->next = nullptr;


}

int main(void)
{
    node_t* head = new node_t;
    head->next = nullptr;
    head->value =999;

    node_t* jeden = insert_after(head, 500);
    
    
    reverse_list(head);


    print_list(jeden);



}
