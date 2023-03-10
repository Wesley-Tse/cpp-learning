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
        {
            if (arr[i] > arr[j])
                minPos = j;
        }
        if (minPos != i)
            swap(arr, i, minPos);
    }
}

int main()
{
    int arr[] = {1, 3, 2, 6, 5, 4, 0};
    int length = sizeof(arr) / sizeof(arr[0]);

    print(arr, length);
    selectsort(arr, length);
    print(arr, length);
    return 0;
}