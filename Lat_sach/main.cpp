#include <iostream>
using namespace std;
int main()
{
    int n, p; cin >> n >> p;
    int ans;
    int ans2;
    ans = p/2; //lat tu trang 1
    if (n%2 ==0 && p%2 == 1) ans2 = (n-p+1)/2; //lat tu trang cuoi trong truong hop n chan, p le
    else ans2 = (n-p)/2;
    if (ans > ans2) ans = ans2;
    cout << ans;
    return 0;
}