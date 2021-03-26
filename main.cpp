
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
    bool state;

    Player(string playerName, int currentPosition, int numberOfMoves, bool state) {
        this->playerName = playerName;
        this->currentPosition = currentPosition;
        this->numberOfMoves = numberOfMoves;
        this->state = state;


    }


    void showPlayer() {
        cout << playerName <<"\t"<< currentPosition <<'\t'<< numberOfMoves <<'\t'<< state;
    }
};

class GamePlay {
public:
    int random = 1 + rand() % 3;

    int rollDice() {
        return random;
    }


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
                temp = 23;
                break;

            case 12:
                temp = 5;
                break;

            case 13:
                temp = 27;
                break;

            case 15:
                temp = 7;
                break;

            case 21:
                temp = 7;
                break;

            case 25:
                temp = 14;
                break;

            case 26:
                temp = 41;
                break;
            case 28:
                temp = 16;
                break;

            case 32:
                temp = 13;
                break;

            case 34:
                temp = 32;
                break;

            case 35:
                temp = 38;
                break;

            case 45:
                temp = 9;
                break;

            default:
                temp = temp;
                break;

        }
        return temp;
    }

};

void start_game() {

    char roll_one, roll_two;
    int temp;
    cout << "Player 1:" << endl << "Enter R To Roll Dice ";
    cin >> roll_one;
    GamePlay gamePlay;
    temp = gamePlay.rollDice();
    if (temp == 1) {

        Player p1("Player 1", 0, 1, true);
        p1.showPlayer();
    } else {
        Player p1("Player 1", 0, 1, false);
        p1.showPlayer();
    }

    cout << "Player 2:" << endl << "Enter R To Roll Dice ";
    cin >> roll_two;


    GamePlay gamePlay2;
    temp = gamePlay2.rollDice();
    if (temp == 1) {

        Player p2("Player 2", 0, 1, true);
        p2.showPlayer();
    } else {
        Player p2("Player 2", 0, 1, false);
        p2.showPlayer();
    }


}

int main() {
    Board board;
    board.showBoard();

    start_game();



    /* Player p1("jisan", 2, 3);
    Square square(1,3);
    cout<<endl;
    cout<<square.givePosition();*/
    return 0;
}








