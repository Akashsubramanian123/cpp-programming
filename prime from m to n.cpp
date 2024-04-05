#include <iostream>
using namespace std;
int Prime(int num) 
{
    if (num <= 1) 
	{
        return false;
    }
    for (int i = 2; i * i <= num; i++) 
	{
        if (num % i == 0) 
		{
            return false;
        }
    }
    return true;
}
int printPrime(int M, int N) 
{
    for (int num = M; num <= N; num++) 
	{
        if (Prime(num)) 
		{
            cout << num << " ";
        }
    }
}
int main() 
{
    int M, N;
    cout << "Enter the starting range M: ";
    cin >> M;
    cout << "Enter the ending range N: ";
    cin >> N;
    cout << "Prime numbers between " << M << " and " << N << " are: ";
    printPrime(M, N);
    return 0;
}