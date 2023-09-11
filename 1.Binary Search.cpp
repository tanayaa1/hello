#include <iostream>
using namespace std;
int Binary_Search(int start, int finish, int a[], int x)
{

    while (start <= finish)
    {
        int mid = start + (finish - start) / 2;
        if (x == a[mid])

            return mid;

        else if (x < a[mid])
            finish = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
int main()
{
    int start = 0, finish, a[20], x, Size;
    cout << "enter the size of array:";
    cin >> Size;
    finish = Size - 1;
    cout << "enter elements of array:";
    for (int i = 0; i < Size; i++)
    {
        cin >> a[i];
    }
    cout << "enter the element to be searched:";
    cin >> x;
    cout << "hello1";
    int index = Binary_Search(start, finish, a, x);
    cout << "hello" << endl;
    cout << "element is found at index : " << index;

}
