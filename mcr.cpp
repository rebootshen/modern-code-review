#include<iostream> 

using namespace std; 

char game[3][3] = {' '}; // Tic-tac-toe 

bool isWin(){ 

bool win = false; 

if (game[0][0] == game[0][1] && game[0][1] == game[0][2] && (game[0][0] == 'X' || game[0][0] == 'O')) win = true; 

if (game[1][0] == game[1][1] && game[1][1] == game[1][2] && (game[1][0] == 'X' || game[1][0] == 'O')) win = true; 

if (game[2][0] == game[2][1] && game[2][1] == game[2][2] && (game[2][0] == 'X' || game[2][0] == 'O')) win = true; 

// column 

if (game[0][0] == game[1][0] && game[1][0] == game[2][0] && (game[0][0] == 'X' || game[0][0] == 'O')) win = true; 

if (game[0][1] == game[1][1] && game[1][1] == game[2][1] && (game[0][1] == 'X' || game[0][1] == 'O')) win = true; 

if (game[0][2] == game[1][2] && game[1][2] == game[2][2] && (game[0][2] == 'X' || game[0][2] == 'O')) win = true; 

// diagonal 

if (game[0][0] == game[1][1] && game[1][1] == game[2][2] && (game[0][0] == 'X' || game[0][0] == 'O')) win = true; 

if (game[0][2] == game[1][1] && game[1][1] == game[2][0] && (game[0][2] == 'X' || game[0][2] == 'O')) win = true; 

return win; 

} 

  

char getInput(bool turn){ 

    int r,c; 

    while(cin >> r >> c){ 

    if( r>3||c>3||r<=0||c<=0){ 

        cout<<"Your input is illegal,input a new numebr again with range i={1,2,3} and j={1,2,3}"<<endl; 

    } 

    else{ 

        if(game[r-1][c-1]!=' '){ 

            cout<<"The place you want to take has already been taken, choose another one"<<endl; 

        } 

        else{ 

            if (turn == false) 

             //game[i][j] = 'X';//bug 

                 game[r-1][c-1]='X'; 

             else 

             //game[i][j] = 'O';//bug 

                 game[r-1][c-1]='O'; 

            break; 

        } 

  

    } 

} 

} 

  

  

int main(){ 

  

char player1 = 'X'; 

char player2 = 'O'; 

bool turn = true; // false for player 1's turn, true for player 2's turn. Player 1 first. 

cout << "X = Player 1" << endl << "O = Player 2" << endl; 

int n=0; 

for (n=0; n<9; n++){ 

turn = !turn;  // use the not-operator to change true to false or false to true. 

if (turn == false) 

cout << "Player 1: "; 

else{ 

cout << "Player 2: "; 

} 

cout << "Which cell to mark? i:[1..3], j:[1..3]: ";//bug 

getInput(turn); 

if (isWin()){ 

cout << "Win!" << endl; 

break; 

} 

else if(n=8){ 

    cout<<"Tie!"<<endl; 

} 

// need to terminate the problem 

} 

  

return 0; 


} 
