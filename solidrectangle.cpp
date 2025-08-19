#include <iostream>
using namespace std;
int main() {
    cout << "row " ;
    int n, m;
    cin >> n;
    cout << "column ";
    cin >> m;

    for(int i=0;i<n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}