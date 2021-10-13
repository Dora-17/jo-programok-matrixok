#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int a[100][100], i, j, n, s1=0, s2=0, lkkt;

    ifstream in("input.txt");
    ofstream out("lkkt.out");

    in >> n;

    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
in >> a[i][j];
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i < j)
                s1 = s1 + a[i][j];

    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            if(i > j)
                s2 = s2 + a[i][j];

    lkkt = s1 * s2;

    while (s1 != s2) {
        if (s1 > s2)
            s1 = s1 - s2;
        else
            s2 = s2 - s1;
    }

    out << lkkt / s1;

    return 0;
}
