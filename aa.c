#include<bits/stdc++.h>
using namespace std;
   int c[100][100];
main()
{
   int m,n,h;
   cout <<" matritsalarning o'lchamini kiriting\n";
   cout << "m = ";
   cin >> m;
   cout << "n = ";
   cin >> n;
   cout << "p = ";
   cin >> h;
   int a[m + 1][n + 1];
   int b[n + 1][h + 1];
   cout << "a matritsa elementlarini kiriting\n";
   for(int i = 1; i <= m; i ++)
   {
       for(int j = 1; j <= n; j ++)
       {
           cin >> a[i][j];
       }
   }
   cout << "b matritsa elementlarini kiriting\n";
   for(int i = 1; i <= n; i ++)
   {
       for(int j = 1; j <= h; j++)
       {
           cin >> b[i][j];
       }
   }
   #pragma omp parallel for
   for(int i = 1; i <= m; i ++)
   {
       for(int j = 1; j <= n; j ++)
       {
           for(int k = 1; k <= h; k ++)
           {
               c[i][k] += (a[i][j] * b[j][k]);
           }
       }
   }
   for(int i = 1; i <= m; i ++)
   {
       for(int j = 1; j <= h; j ++)
       {
           cout << c[i][j] << " ";
       }
       cout << "\n";
   }
}

