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

void insertsort(int arr[], int length)
{
    if (length == 1)
        return;
    for (int i = 1; i < length; i++)
    {
        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr, j, j - 1);
        }
        cout << i << "th iteration: ";
        print(arr, length);
    }
}
int main()
{
    int arr[] = {5, 3, 1, 0, 2, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sort: ";
    print(arr, length);
    insertsort(arr, length);
    cout << "After Sorted: ";
    print(arr, length);
    return 0;
}