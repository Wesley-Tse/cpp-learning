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

void bubblesort(int arr[], int length)
{
    if (length == 1)
        return;
    int flag = 1;
    for (int i = length - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr, j, j + 1);
                flag = 0;
            }
        }
        cout << length - i << "th iteration: ";
        print(arr, length);
        if (flag)
            return;
    }
}

int main()
{
    // int arr[] = {5, 4, 1, 0, 2, 3};
    int arr[] = {0, 1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sort: ";
    print(arr, length);
    bubblesort(arr, length);
    cout << "After Sorted: ";
    print(arr, length);
    return 0;
}