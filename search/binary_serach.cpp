
#include <iostream>

int find_index(char* arr, char target, int start, int end)
{

    int middle = (start + end) / 2;
    
    if(start == end)
        return end;


    else if(target < arr[middle])
        find_index(arr, target, start, middle - 1);

    else if(target > arr[middle])
        find_index(arr, target, middle + 1, end);

    else 
        return middle;

}

int main(void)
{

    char arr[] = {'a', 'b', 'c', 'd', 'e'};
    char target = 'a';


    std::cout << "your index: " << find_index(arr, target, 0, 4) << std::endl;


}
