
#include <stack>
#include <iostream>

struct node
{

    uint32_t value;
    node* right;
    node* left;

};

void invert(node& root)
{
    std::swap(root.right, root.left);
}

void traversal_depth(node root)
{
    std::stack<node*> stack;

    stack.push(root.left);
    stack.push(root.right);

    node* next;
    
    std::cout << root.value << " ";

    while(!stack.empty())
    {
        next = stack.top();
        stack.pop();

        if(next->right != nullptr)
            stack.push(next->right);

        if(next->left != nullptr)
            stack.push(next->left);

        std::cout << next->value << " " ;
        
    }

    std::cout << std::endl;

}

int main(void)
{

    
    node a = {4}; // 4
    node b = {2}; // 2
    node c = {7}; // 7
    node d = {1}; // 1
    node e = {3}; // 3
    node f = {6}; // 6
    node g = {9}; // 9

    a.left = &b;
    a.right = &c;

    b.left = &d;
    b.right = &e;

    c.left = &f;
    c.right = &g;

    traversal_depth(a);
    invert(a);
    traversal_depth(a);

}
