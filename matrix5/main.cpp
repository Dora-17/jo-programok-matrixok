#include <iostream>

using namespace std;

int main()
{
   int v[100][100],n,S1=0,S2=0;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> v[i][j];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                 if(i+j>n-1){
                    S1=S1+v[i][j];
                  if(i+j<n-1) {
                    S2=S2+v[i][j];

                  }
                 }
                }
            }
        }
        cout << S1 << S2 << endl;
    }
    return 0;
}
