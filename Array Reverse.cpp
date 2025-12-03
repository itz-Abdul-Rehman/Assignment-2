#include <iostream>
using namespace std;

void reverseArr(int *arr, int n)
{
    int a, b;
    for (int i = 0; i < n; i++)
    {
        if ((n - (i + 1)) - i >= 0)
        {
            a = arr[i];
            b = arr[n - (i + 1)];
            a = a * b; // a=2*3=6
            b = a / b; // b=6/3=2
            a = a / b; // a=6/2=3
            arr[i] = a;
            arr[n - (i + 1)] = b;
        }
        else
        {
            break;
        }
    }
    cout << "Reversed Array: \n";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}
int main()
{
    int n;
    cout << "How many values do you wanna store in array: ";
    cin >> n;
    int arr[n];
    cout << "Ok! Start entering values (Integers): \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Actual Array";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
    reverseArr(arr, n);
    return 0;
}