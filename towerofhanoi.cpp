#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void TOH(int n, char A, char B, char C)
{

    if (n >= 1)
    {
        TOH(n - 1, A, C, B);
        cout << A << " to " << C << endl;
        TOH(n - 1, B, A, C);
    }
}
int main()
{
    int n = 6;
    TOH(n, 'A', 'B', 'C');
    return 0;
}
