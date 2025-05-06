#include <iostream>

using namespace std;
// implement calculate factorial function in here

// Hàm tính giai thừa
long calculateFactorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    long factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main(int narg, char **argv)
{
    int N;
    cin >> N;
    long result;

    // Gọi hàm tính giai thừa và gán giá trị vào biến result
    result = calculateFactorial(N);

    cout << result << endl;
    return 0;
}