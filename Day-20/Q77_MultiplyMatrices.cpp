#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout<<"Enter rows and columns: ";
    cin>>r>>c;
    int a[r][c], b[r][c];
    cout<<"Enter first matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin>>a[i][j];

    cout<<"Enter second matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin>>b[i][j];

    cout<<"Product matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int sum = 0;
            for (int k = 0; k < c; k++)
                sum += a[i][k] * b[k][j];

            cout<<sum<<" ";
        }
        cout<<endl;
    }

    return 0;
}