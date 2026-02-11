#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum =0;
    int check=0;
    int dem =0;
    cin>>n;
    for (int i=0; i<n;i++)
    {
        char a;
        cin>>a;
        if (a == 'U') sum++;
        if (a == 'D') sum--;
        if (sum <0) check =1;
        if (sum ==0 && check == 1)
        {
            dem++;
            check =0;
        }
    }
    cout<<dem;
    return 0;
}