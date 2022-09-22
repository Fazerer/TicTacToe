#include <bits/stdc++.h>
using namespace std;

int main() {


    // I made this program all by myself with no outside help
    // make playable tic tac toe with a win condition and no cheating
    int n;
    cin >> n;
    char board[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = ' ';
        }
    }
    int x, y;
    int turn = 0;
    while (true) {
        if (turn % 2 == 0) {
            cout << "X's turn" << endl;
        } else {
            cout << "O's turn" << endl;
        }
        cin >> x >> y;
        if (board[x][y] == ' ') {
            if (turn % 2 == 0) {
                board[x][y] = 'X';
            } else {
                board[x][y] = 'O';
            }
        } else {
            cout << "invalid move" << endl;
            continue;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << board[i][j];
            }
            cout << endl;
        }
        turn++;
        // check for win condition
        // check for horizontal win
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'X') {
                    count++;
                }
            }
            if (count == n) {
                cout << "X wins" << endl;
                return 0;
            }
        }
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O') {
                    count++;
                }
            }
            if (count == n) {
                cout << "O wins" << endl;
                return 0;
            }
        }
        // check for vertical win
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (board[j][i] == 'X') {
                    count++;
                }
            }
            if (count == n) {
                cout << "X wins" << endl;
                return 0;
            }
        }
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (board[j][i] == 'O') {
                    count++;
                }
            }
            if (count == n) {
                cout << "O wins" << endl;
                return 0;
            }
        }
        // check for diagonal win
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (board[i][i] == 'X') {
                count++;
            }
        }
        if (count == n) {
            cout << "X wins" << endl;
            return 0;
        }
        count = 0;
        for (int i = 0; i < n; i++) {
            if (board[i][i] == 'O') {
                count++;
            }
        }
        if (count == n) {
            cout << "O wins" << endl;
            return 0;
        }
        count = 0;
        for (int i = 0; i < n; i++) {
            if (board[i][n - i - 1] == 'X') {
                count++;
            }
        }
        if (count == n) {
            cout << "X wins" << endl;
            return 0;
        }
        count = 0;
        for (int i = 0; i < n; i++) {
            if (board[i][n - i - 1] == 'O') {
                count++;
            }
        }
        if (count == n) {
            cout << "O wins" << endl;
            return 0;
        }
    }

}
