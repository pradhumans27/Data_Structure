#include <iostream>
using namespace std;
int find(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != arr[i] + 1)
        {
            return arr[i] + 1;
        }
       
    }
    
}
int main()
{
    int arr[] = {2,4,5,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << find(arr, size);
    return 0;
}