
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

    void setCurrentPosition(int currentPosition, int score) {

        Player::currentPosition = currentPosition;
    }


    void showPlayer() {
        cout << playerName << "\t" << currentPosition << '\t' << numberOfMoves << '\t' << state;
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


    int givePosition(int positionNumber, int score) {
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
    int temp, temp2;
    char R;
    cout << "Enter R TO roll Dice";
    cin >> R;
    GamePlay gamePlay;
    temp = gamePlay.rollDice();
    Player player1("Player 1", temp, 1, true);
    cout << "Enter R To roll Dice";
    temp2 = gamePlay.rollDice();
    Player player2("Player 2", temp2, 1, true);

}

int main() {
    char R;
    int temp, temp2;
    Board board;
    board.showBoard();
    GamePlay gamePlay;
    Square square;
    Player p1("Player 1", 0, 0, true);
    Player p2("Player 2", 0, 0, true);
    int result = 0;
    while (result <= 46) {
        cout << "Enter R to roll dice"<<endl;
        cin >> R;
        temp = gamePlay.rollDice();

        cout << "Score: " << temp<<endl;
        temp = square.givePosition(p1.currentPosition, temp);
        p1.currentPosition=temp;
        cout << "Position: " << temp<<endl;

        cout << "Enter R to roll Dice -2";
        cin>>R;
        temp2 = gamePlay.rollDice();
        cout << "Score: " << temp2<<endl;
        temp2 = square.givePosition(p2.currentPosition, temp);
        cout << "Position: " << temp2<<endl;
        p2.currentPosition=temp2;
        result = max(temp, temp2);


    }


    return 0;
}








