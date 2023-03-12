#include <iostream>

using std::cout;
using std::endl;

void print(int *arr, int length)
{
    for (int i = 0; i < length; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void heapify(int *arr, int i, int n)
{
    if (i < 0)
        return;
    int lchild = 2 * i + 1;
    int rchild = 2 * i + 2;
    int max = i;
    if (lchild < n && arr[max] < arr[lchild])
        max = lchild;
    if (rchild < n && arr[max] < arr[rchild])
        max = rchild;
    if (max != i)
        swap(arr, i, max);
    heapify(arr, i - 1, n);
}
void heapsort(int *arr, int n)
{
    if (n <= 1)
        return;
    int last = n - 1;
    int i = (last - 1) / 2;
    heapify(arr, i, n);
    swap(arr, 0, last);
    print(arr, 10);
    heapsort(arr, n - 1);
}
int main()
{
    int arr[] = {1, 3, 7, 5, 9, 0, 8, 2, 4, 6};
    int length = std::end(arr) - std::begin(arr);
    cout << "Before Sort: ";
    print(arr, length);
    heapsort(arr, length);
    cout << "After Sorted: ";
    print(arr, length);
    return 0;
}