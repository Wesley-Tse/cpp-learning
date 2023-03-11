#include <iostream>

using std::cout;
using std::endl;

void print(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

/*
    method of two pointers
*/
int partition1(int *arr, int left, int right, int length)
{
    int pivot = left;
    while (left < right)
    {
        while (left < right && arr[right] >= arr[pivot])
            right--;
        while (left < right && arr[left] <= arr[pivot])
            left++;
        if (left < right)
            swap(arr, left, right);
    }
    swap(arr, pivot, right); // left == right
    cout << "Iteration: ";
    print(arr, length);

    return left;
}
/*
    method of digging
*/
int partition2(int *arr, int left, int right, int length)
{
    int pivot = arr[left];
    while (left < right)
    {
        while (left < right && arr[right] >= pivot)
            right--;
        arr[left] = arr[right];
        while (left < right && arr[left] <= pivot)
            left++;
        arr[right] = arr[left];
    }
    arr[left] = pivot;
    cout << "Iteration: ";
    print(arr, length);

    return left;
}

/*
    method of
*/
int partition3(int *arr, int left, int right, int length)
{
    int pivot = arr[left];
    /*
        to be added
    */
    cout << "Iteration: ";
    print(arr, length);

    return left;
}

void quicksort(int *arr, int left, int right, int length)
{
    if (left >= right)
        return;
    int partition = partition1(arr, left, right, length);
    // int partition = partition2(arr, left, right, length);
    // int partition = partition3(arr, left, right, length);
    quicksort(arr, left, partition - 1, length);
    quicksort(arr, partition + 1, right, length);
}

int main()
{
    int arr[] = {5, 3, 1, 6, 2, 4, 9, 7, 8};
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sort: ";
    print(arr, length);
    quicksort(arr, 0, length - 1, length);
    cout << "After Sorted: ";
    print(arr, length);

    return 0;
}
