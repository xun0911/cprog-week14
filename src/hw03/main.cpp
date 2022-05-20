#include <iostream>
#include <iomanip>

using namespace std;

// 參考 main() 函數補上所需的程式
int index(int arr[], int len, int val)
{
    for(int i=0; i<len; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }
    return -1;
}


// ==============================================
// -----vv----- 不得修改『以下』的程式 -----vv-----
// ==============================================

int main()
{
    int arr[100];
    int len = 0;
    while (cin >> arr[len++])
        ;
    len--;

    for(int i=0; i<10; i++)
        cout<<index(arr,len,i)<<" ";
    cout<<endl;

    return 0;
}
