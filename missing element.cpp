#include <iostream>
using namespace std;
int Smallest(int arr[], int n) 
{
    if (arr[0] != 1) 
	{
        return 1;
    }
    for (int i = 0; i < n - 1; i++) 
	{
        if (arr[i + 1] - arr[i] > 1) 
		{
            return arr[i] + 1;
        }
    }
    return arr[n - 1] + 1;
}
int main() 
{
    int arr[] = {1, 2, 3, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missingElement = Smallest(arr, n);
    cout << "The smallest missing element in the array is: " << missingElement << endl;
    return 0;
}