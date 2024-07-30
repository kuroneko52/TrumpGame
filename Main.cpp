#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int totalScore(int a, int b, int c, int d) {
    return sum(a, b) + sum(c, d);
}

void showResult(int aliceScore, int bobScore, int& aliceWins, int& bobWins) {
    if (aliceScore == bobScore) {
        cout << "draw" << endl;
    } else if (aliceScore > bobScore) {
        cout << "alice win" << endl;
        aliceWins++;
    } else {
        cout << "bob win" << endl;
        bobWins++;
    }
}

bool isValidTotal(int total) {
    return total >= 4 && total <= 52;
}

void processGame(int& aliceWins, int& bobWins) {
    int a, b, c, d;
    while (true) {
        cin >> a >> b >> c >> d;
        int total = totalScore(a, b, c, d);

        if (total == 0) {
            break;
        }

        if (!isValidTotal(total)) {
            cout << "error" << endl;
            continue;
        }

        showResult(sum(a, b), sum(c, d), aliceWins, bobWins);
    }
}

int main() {
    int aliceWins = 0, bobWins = 0;
    processGame(aliceWins, bobWins);
    cout << "awc " << aliceWins << " bwc " << bobWins << endl;
    return 0;
}
