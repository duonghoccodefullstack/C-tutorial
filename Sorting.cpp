#include <iostream>
#include <cmath>
using namespace std;

void BubbleSort(int arr[], int n)
{

    int tmp = arr[0];
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // Tìm phần tử nhỏ nhất trong mảng chưa được sắp xếp
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }

        // Đổi chỗ phần tử đó với phần tử đầu tiên của mảng chưa được sắp xếp
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void LinearSearch(int arr[], int x, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "phan tu nay o vi tri  " << x << endl;
            return;
        }
    }
    cout << x << "khong co phan tu trong mang  " << endl;
}

void binary_search(const int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            cout << "Phần tử " << x << " được tìm thấy ở vị trí " << mid << endl;
            return; // Thoát khỏi hàm nếu tìm thấy phần tử
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Phần tử " << x << " không được tìm thấy trong mảng." << endl;
}

void input_and_sort(int arr[], int n)
{
    int x;
    cout << "Nhập số lượng phần tử: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Nhập phần tử thứ " << i + 1 << ": ";
        cin >> arr[i];
    }

    int chon;
    cout << "Bai1 :Hãy viết một hàm sắp xếp nổi bọt để sắp xếp một mảng số nguyên theo thứ tự tăng dần.\nBai2 : Sắp xếpchọn(Selection Sort) :Viết hàm sắp xếp chọn để sắp xếp một mảng số nguyên theo thứ tự giảm dần.\n Bai3 : Tìm kiếm tuyến tính(Linear Search)  \n  Bài4 :Tìm kiếm nhị phân (Binary Search)\n";
    cout << "Enter your :";
    cin >> chon;
    switch (chon)
    {
    case 1:
        BubbleSort(arr, n);
        cout << "Mảng sau khi sắp xếp: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
        break;
    case 2:

        selection_sort(arr, n);
        cout << "Mảng sau khi sắp xếp: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
        break;

    case 3:

        cout << "Nhap phan tu can tim";
        cin >> x;
        LinearSearch(arr, x, n);

        break;
    case 4:

        cout << "Nhập phần tử cần tìm: ";
        cin >> x;
        binary_search(arr, n, x);

        break;
    default:
        cout << "1 -4 ";
        break;
        cout << "Mảng sau khi sắp xếp: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int arr[10];
    int x;

    input_and_sort(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}
