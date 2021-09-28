#include <iostream>

using namespace std;

int main()
{
     int i,n,j,a[100][100];
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << "a[" << i << "][" << j <<"]=";
            cin >> a[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout << a[i][j] << " ";
        }
    }
    cout << endl;
    return 0;
}
