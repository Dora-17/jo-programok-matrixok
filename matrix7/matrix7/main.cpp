#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   int v[100][100],Se=1,Sd=1,i,n,j;
   ifstream in ("input.txt");
   in >> n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            in >> v[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i<j&&i+j<n-1){
                Se=Se+v[i][j];
            }
            if(i>j&&i+j>n-1){
               Sd=Sd+v[i][j];
        }
            }
            if(Se<Sd){
                cout << "Sd a nagyobb";
            }else{
                cout << "Se a nagyobb";

            }
    }
    return 0;
}
