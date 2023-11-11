#include <iostream>
using namespace std;
int main()
{
    int a[5] = {7, 2, 32, 5, 20};
    int sum = 0;
    int sum1 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
            sum += a[i];
        else
            sum1 += a[i];
    }
    cout << abs(sum - sum1);
    return 0;
}