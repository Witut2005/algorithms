#include <iostream>
#include <algorithm>

void quicksort(int* arr, int first, int last)
{
    int pivot = arr[(first + last) / 2];


    int p = first, q = last;
    
    //x

    while(p <= q)
    {
        while(arr[p] < pivot)
            p++;

        while(arr[q] > pivot)
            q--;

        if(p <= q)
        {
            std::swap(arr[p], arr[q]);
            p++;
            q--;
        }
    }


    if(q > first) 
        quicksort(arr, first, q);

    if(p < last) 
        quicksort(arr, p, last);
}

int main(void)
{

    int arr[] = {5,16,167,13,54};
    quicksort(arr, 0, 4);

    for(auto a : arr)
        std::cout << a << " ";
    std::cout << std::endl;
}
