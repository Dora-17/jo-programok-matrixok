#include <iostream>

using namespace std;

int main()
{
    int v[100][100],n,i,j,Sf=0,Sm=0;
    cin >> n;
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            cin >> v[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
         if(i+j=n-1){
            Sm+=v[i][j];
         }
        }
        Sf+=v[i][j];
    }
    cout << Sf << " " << Sm << endl;
    return 0;
}
