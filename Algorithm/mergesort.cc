#include <iostream>

using std::cout;
using std::endl;

void print(int *arr, int length)
{
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void merge(int *arr, int left, int mid, int right)
{
    if (right - left < 1)
        return;
    int temp[right - left + 1];
    int i = left;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= right)
        temp[k++] = arr[i] < arr[j] ? arr[i++] : arr[j++];
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= right)
        temp[k++] = arr[j++];
    for (int n = 0; n < k; n++)
        arr[left++] = temp[n];
}
void mergesort(int *arr, int begin, int end)
{
    if (begin == end) // base case
        return;
    int mid = (begin + end) / 2;
    mergesort(arr, begin, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, begin, mid, end);
}

int main()
{
    int arr[] = {1, 3, 7, 5, 9, 0, 8, 2, 4, 6};
    int length = std::end(arr) - std::begin(arr);
    int begin = 0;
    int end = length - 1;
    cout << "Before Sort: ";
    print(arr, length);
    mergesort(arr, begin, end);
    cout << "After Sorted: ";
    print(arr, length);
    return 0;
}