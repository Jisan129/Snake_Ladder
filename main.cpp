
#include <bits/stdc++.h>

using namespace std;

class Board {
public:

    void showBoard() {
        int a = 0;
        for (int i = 47; i >= 1; i--) {
            cout << i << "\t\t";
            a++;
            if (a == 5) {
                cout << endl;
                a = 0;
            }

        }
        cout << "Starting (P1)(P2)";
    }
};

class Player {
public:
    string playerName;
    int currentPosition;
    int numberOfMoves;

    Player(string playerName, int currentPosition, int numberOfMoves) {
        this->playerName = playerName;
        this->currentPosition = currentPosition;
        this->numberOfMoves = numberOfMoves;

    }

    void showPlayer() {
        cout << playerName << currentPosition << numberOfMoves;
    }
};

class GamePlay {

};

class Square {
public:
    int positionNumber;
    int score;

    Square(int positionNumber, int score) {
        this->positionNumber = positionNumber;
        this->score = score;
    }

    int givePosition() {
        int temp = positionNumber + score;

        switch (temp) {
            case 4:
                temp = 17;
                break;

            case 6:
                temp = 20;
                break;
                
            case 10:
                temp=23;
                break;
                
            case 12:
                temp=5;
                break;
                
            case 13:
                temp=27;
                break;
                
            case 15:
                temp=7;
                break;
                
            case 21:
                temp=7;
                break;
                
            case 25:
                temp=14;
                break;
                
            case 26:
                temp=41;
                break;
            case 28:
                temp=16;
                break;
                
            case 32:
                temp=13;
                break;
                
            case 34:
                temp=32;
                break;
                
            case 35:
                temp=38;
                break;
                
            case 45:
                temp=9;
                break;

            default:
                temp=temp;
                break;

        }
        return temp;
    }

};

int main() {
    Board board;
    board.showBoard();
    Player p1("jisan", 2, 3);
    Square square(1,3);
    cout<<endl;
    cout<<square.givePosition();
    return 0;
}








