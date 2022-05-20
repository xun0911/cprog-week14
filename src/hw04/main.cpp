#include <iostream>
#include <iomanip>

using namespace std;

// 參考 main() 函數補上所需的程式
void dump(int arr[], int len)
{
    for(int i=0; i<len; i++)
    {
        cout << setw(4) << arr[i];
    }
}

void bbsort(int arr[], int len)
{
    for (int i=0; i<len; i++)
    {
        for (int n=i; n<len; n++)
        {
            if(arr[i] > arr[n])
            {
                int a = arr[i];
                arr[i] = arr[n];
                arr[n] = a;
            }
        }
    }
}

// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================


int main()
{
    int arr[100];
    int i = 0;
    while(cin>>arr[i++]);
    i--;
    bbsort(arr,i);
    dump(arr,i);

    return 0;
}
