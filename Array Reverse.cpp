#include <iostream>
using namespace std;
void reverseArr(int &arr[], int n)
{
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
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    reverseArr(arr, n);
    return 0;
}