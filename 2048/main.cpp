#include <iostream>
using namespace std;
void Left(int a[4][4])
{
    int b[4][4];
    int c_a, c_b;
    for (int i=0;i<4;i++) //Xoa cac chu so 0 o giua
    {
        c_a =0, c_b=0;
        while (c_b <4 && c_a<4)
        {
            if(a[i][c_a] != 0)
            {
                b[i][c_b] = a[i][c_a];
                c_b++;
                c_a++;
            }
            else c_a++;

        }
        while (c_b <4)
        {
            b[i][c_b] =0;
            c_b++;
        }
    }
    for (int i=0; i<4; i++) //Cong don cac gia tri lien ke giong nhau
    {
        for (int j=0; j<3; j++)
        {
            if (b[i][j] == b[i][j+1] && b[i][j] !=0)
            {
                b[i][j] =2*b[i][j];
                b[i][j+1] =0;
            }
        }
    }
    for (int i=0;i<4;i++) //Gan tro lai mang A va xoa cac chu so 0 o giua
    {
        c_a =0, c_b=0;
        while (c_b <4 && c_a<4)
        {
            if(b[i][c_b] != 0)
            {
                a[i][c_a]= b[i][c_b];
                c_b++;
                c_a++;
            }
            else c_b++;

        }
        while (c_a<4)
        {
                a[i][c_a] = 0;
                c_a++;
        }
    }
}
void Right (int a[4][4])
{
    int b[4][4];
    int c_a, c_b;
    for (int i=3;i>=0;i--) //Xoa cac chu so 0 o giua
    {
        c_a =3, c_b=3;
        while (c_b >=0 && c_a>=0)
        {
            if(a[i][c_a] != 0)
            {
                b[i][c_b] = a[i][c_a];
                c_b--;
                c_a--;
            }
            else c_a--;
        }
        while (c_b >=0)
        {
            b[i][c_b] =0;
            c_b--;
        }
    }
    for (int i=3; i>=0; i--) //Cong don cac gia tri lien ke giong nhau
    {
        for (int j=3; j>=0; j--)
        {
            if (b[i][j] == b[i][j-1] && b[i][j] !=0)
            {
                b[i][j] =2*b[i][j];
                b[i][j-1] =0;
            }
        }
    }
    for (int i=3;i>=0;i--) //Gan tro lai mang A va xoa cac chu so 0 o giua
    {
        c_a =3, c_b=3;
        while (c_b >=0 && c_a>=0)
        {
            if(b[i][c_b] != 0)
            {
                a[i][c_a] = b[i][c_b];
                c_b--;
                c_a--;
            }
            else c_b--;
        }
        while (c_a >=0)
        {
            a[i][c_a] =0;
            c_a--;
        }
    }
}
void Up (int a[4][4])
{
    int b[4][4];
    int r_a, r_b;
    for (int i=0;i<=3;i++) //Xoa cac chu so 0 o giua
    {
        r_a =0, r_b=0;
        while (r_b <=3 && r_a<=3)
        {
            if(a[r_a][i] != 0)
            {
                b[r_b][i] = a[r_a][i];
                r_b++;
                r_a++;
            }
            else r_a++;
        }
        while (r_b <=3)
        {
            b[r_b][i] =0;
            r_b++;
        }
    }
    for (int i=0; i<4; i++) //Cong don cac gia tri lien ke giong nhau
    {
        for (int j=0; j<3; j++)
        {
            if (b[j][i] == b[j+1][i] && b[j][i] !=0)
            {
                b[j][i] =2*b[j][i];
                b[j+1][i] =0;
            }
        }
    }
    for (int i=0; i<4; i++) //Gan tro lai mang A va xoa cac chu so 0 o giua
    {
        r_a =0, r_b=0;
        while (r_b <4 && r_a<4)
        {
            if(b[r_b][i] != 0)
            {
                a[r_a][i] = b[r_b][i];
                r_b++;
                r_a++;
            }
            else r_b++;
        }
        while (r_a <4)
        {
            a[r_a][i] =0;
            r_a++;
        }
    }
}
void Down (int a[4][4])
{
    int b[4][4];
    int r_a, r_b;
    for (int i=0;i<4;i++) //Xoa cac chu so 0 o giua
    {
        r_a =3, r_b=3;
        while (r_b >=0 && r_a>=0)
        {
            if(a[r_a][i] != 0)
            {
                b[r_b][i] = a[r_a][i];
                r_b--;
                r_a--;
            }
            else r_a--;
        }
        while (r_b >=0)
        {
            b[r_b][i] =0;
            r_b--;
        }
    }
    for (int i=0; i<4; i++) //Cong don cac gia tri lien ke giong nhau
    {
        for (int j=3; j>0; j--)
        {
            if (b[j][i] == b[j-1][i] && b[j][i] !=0)
            {
                b[j][i] =2*b[j][i];
                b[j-1][i] =0;
            }
        }
    }
    for (int i=0; i<4; i++) //Gan tro lai mang A va xoa cac chu so 0 o giua
    {
        r_a =3, r_b=3;
        while (r_b >=0 && r_a>=0)
        {
            if(b[r_b][i] != 0)
            {
                a[r_a][i] = b[r_b][i];
                r_b--;
                r_a--;
            }
            else r_b--;
        }
        while (r_a >=0)
        {
            a[r_a][i] =0;
            r_a--;
        }
    }
}
int main()
{
    int a[4][4];
    for (int i=0; i<4;i++)
        for (int j=0; j<4;j++)
    {
        cin>>a[i][j];
    }
    char kytu;
    cin>>kytu;
    if (kytu == 'L') Left(a);
    if (kytu == 'R') Right(a);
    if (kytu == 'U') Up(a);
    if (kytu == 'D') Down(a);
    for (int i=0; i<4;i++)
    {
        for (int j=0; j<4;j++)
    {
        cout<<a[i][j]<<" ";
    }
        cout<<endl;
    }
    return 0;
}
