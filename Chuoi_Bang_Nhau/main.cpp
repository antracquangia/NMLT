#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    int result =1;
    getline (cin, a);
    getline (cin, b);
    if (a.size() != b. size()) result =0;
    else
    {
        for (size_t k=0; k< a.length(); k++)
        {
            char x = a[k];
            char y = b[k];

        if (x == y) continue;
        bool chu_cai_x = (x>= 'A' && x<= 'Z') || (x>='a' && x<='z');
        bool chu_cai_y = (y>= 'A' && y<= 'Z') || (y>='a' && y<='z');
        if (chu_cai_x && chu_cai_y)
        {
            if (x == y+32 || x == y-32) continue;
        }
        if (chu_cai_x ==0 && chu_cai_y == 0) continue;
        else result =0;
        }
    }
    cout<<result<<endl;
    system("pause");
    return 0;
}
