
#include <iostream>
#include <algorithm>


void qsort(int* arr, int first, int last)
{

    if(first >= last)
        return;

    int p = first;
    int q = last;
    int pivot = arr[(first + last) / 2];

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

    qsort(arr, first, q);    
    qsort(arr, p, last);


}

int main(void)
{

    int arr[] = {0,4, 5,1,3,2};
    
    qsort(arr, 0, 5);

    for(auto a : arr)
        std::cout << a << " ";
    std::cout << std::endl;


}
