#include<bits/stdc++.h>
using namespace std;

int main() {
    int patternSize;
    cin >> patternSize;
    int firstTimes = patternSize / 2;
    
    // Upper pattern
    int fBeforeSpace = 0;
    int fAfterSpace = patternSize - 2;
    for (int i = 1; i <= firstTimes; i++) {
        for (int j = 1; j <= fBeforeSpace; j++) {
            cout << " ";
        }
        cout << "\\";
        for (int k = 1; k <= fAfterSpace; k++) {
            cout << " ";
        }
        cout << "/" << endl;
        fBeforeSpace++;
        fAfterSpace -= 2;
    }

    // Print space with X
    for (int i = 1; i <= firstTimes; i++) {
        cout << " ";
    }
    cout << "X" << endl;

    // Lower pattern
    int sBeforeSpace = firstTimes - 1;
    int sAfterSpace = 1;
    for (int i = 1; i <= firstTimes; i++) {
        for (int j = 1; j <= sBeforeSpace; j++) {
            cout << " ";
        }
        cout << "/";
        for (int k = 1; k <= sAfterSpace; k++) {
            cout << " ";
        }
        cout << "\\" << endl;
        sBeforeSpace--;
        sAfterSpace += 2;
    }

    return 0;
}
