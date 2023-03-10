#include <iostream>

using std::cout;
using std::endl;

void print(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void selectsort(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        int minPos = i;
        for (int j = i + 1; j < length; j++)
            minPos = arr[j] < arr[minPos] ? j : minPos;
        // {
        //     if (arr[i] < arr[minPos])
        //         minPos = j;
        // }
        if (minPos != i)
            swap(arr, i, minPos);
        cout << i + 1 << "th iteration: ";
        print(arr, length);
    }
}

int main()
{
    int arr[] = {0, 3, 1, 2, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sort: ";
    print(arr, length);
    selectsort(arr, length);
    cout << "After Sorted: ";
    print(arr, length);
    return 0;
}