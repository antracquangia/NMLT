#include <iostream>
using namespace std;
void hcn (int Top[], int Left[], int Bottom[], int Right[], int &dem, int L_Top, int L_Left, int L_Bottom, int L_Right)//hinh chu nhat
{
    for (int x1 =0; x1<L_Top; x1++)
    {
        for (int y1 =0; y1 < L_Left; y1++)//xet dinh top left
        {
            if (Top[x1] != Left[y1]) continue;
            for (int x2 = x1 +2; x2< L_Top; x2++)
            {
                for (int y2 =0; y2 < L_Right; y2++)//xet dinh top right
                {
                    if (Top[x2] != Right[y2]) continue;
                    int width = x2-x1;
                    for (int x3 =0; x3 < L_Bottom; x3++)//xet dinh bottom left
                    {
                        for (int y3 = y1+ 2; y3< L_Left; y3++)
                        {
                            if (Bottom[x3] != Left[y3]) continue;
                            int height = y3 - y1;
                            if ((x3 + width < L_Bottom) && (y2 + height < L_Right) && (Bottom[x3+width] == Right[y2+height])) dem++; //xet dinh bottom right
                        }
                    }
                }
            }
        }
    }
}
int main()
{
    int a1, a2, a3, a4;
    cin>>a1>>a2>>a3>>a4;
    int b1[100], b2[100], b3[100], b4[100];
    int i=0;
    int n1 =0, n2 =0, n3 =0, n4 =0;
    while (a1 >0)
    {
        b1[i] = a1%10;
        a1= a1/10;
        i++;
        n1++;
    }
    for (i =0; i<n1/2; i++)
    {
        int temp = b1[i];
        b1[i] = b1[n1-i-1];
        b1[n1-i-1] = temp;
    }
    i =0;
    while (a2 >0)
    {
        b2[i] = a2%10;
        a2= a2/10;
        i++;
        n2++;
    }
    for (i =0; i<n2/2; i++)
    {
        int temp = b2[i];
        b2[i] = b2[n2-i-1];
        b2[n2-i-1] = temp;
    }
    i =0;
    while (a3 >0)
    {
        b3[i] = a3%10;
        a3= a3/10;
        i++;
        n3++;
    }
    for (i =0; i<n3/2; i++)
    {
        int temp = b3[i];
        b3[i] = b3[n3-i-1];
        b3[n3-i-1] = temp;
    }
    i =0;
    while (a4 >0)
    {
        b4[i] = a4%10;
        a4= a4/10;
        i++;
        n4++;
    }
    for (i =0; i<n4/2; i++)
    {
        int temp = b4[i];
        b4[i] = b4[n4-i-1];
        b4[n4-i-1] = temp;
    }
    int dem =0;
    hcn(b1, b2, b3, b4, dem, n1, n2, n3, n4);
    hcn(b1, b2, b4, b3, dem, n1, n2, n4, n3);
    hcn(b1, b3, b2, b4, dem, n1, n3, n2, n4);
    hcn(b1, b3, b4, b2, dem, n1, n3, n4, n2);
    hcn(b1, b4, b2, b3, dem, n1, n4, n2, n3);
    hcn(b1, b4, b3, b2, dem, n1, n4, n3, n2);
    hcn(b2, b1, b3, b4, dem, n2, n1, n3, n4);
    hcn(b2, b1, b4, b3, dem, n2, n1, n4, n3);
    hcn(b2, b3, b1, b4, dem, n2, n3, n1, n4);
    hcn(b2, b3, b4, b1, dem, n2, n3, n4, n1);
    hcn(b2, b4, b1, b3, dem, n2, n4, n1, n3);
    hcn(b2, b4, b3, b1, dem, n2, n4, n3, n1);
    hcn(b3, b1, b2, b4, dem, n3, n1, n2, n4);
    hcn(b3, b1, b4, b2, dem, n3, n1, n4, n2);
    hcn(b3, b2, b1, b4, dem, n3, n2, n1, n4);
    hcn(b3, b2, b4, b1, dem, n3, n2, n4, n1);
    hcn(b3, b4, b1, b2, dem, n3, n4, n1, n2);
    hcn(b3, b4, b2, b1, dem, n3, n4, n2, n1);
    hcn(b4, b1, b2, b3, dem, n4, n1, n2, n3);
    hcn(b4, b1, b3, b2, dem, n4, n1, n3, n2);
    hcn(b4, b2, b1, b3, dem, n4, n2, n1, n3);
    hcn(b4, b2, b3, b1, dem, n4, n2, n3, n1);
    hcn(b4, b3, b1, b2, dem, n4, n3, n1, n2);
    hcn(b4, b3, b2, b1, dem, n4, n3, n2, n1);
    cout<<dem;
    return 0;
}
