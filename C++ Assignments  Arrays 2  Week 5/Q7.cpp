#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,1};
    for (int i = 0, j = 3 - 1; i < j; i++, j--)
    {

        if (arr[i] != arr[j])
        {
            cout<<"False";
            break;
        }else{
            cout<<"True";
        }
    }
}
