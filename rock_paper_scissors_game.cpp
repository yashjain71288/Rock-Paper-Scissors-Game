#include<iostream>
#include<ctime>

using namespace std;

char getUserChoice();
char getPcChoice();
void showChoice(char choice);
void choosewinner(char player, char pc);



int main(){
    char pc;
    char player;

    player = getUserChoice();
    cout << "Your Choice : ";
    showChoice(player);

    pc = getPcChoice();
    cout << "Pc Choice : ";
    showChoice(pc);

    choosewinner(player, pc);
}
    

char getUserChoice(){
    char player;

    cout << "Welcome to the Rock - Paper - Scissors Game \n";

    do
    {
        cout << "***************** RULES *******************\n";
        cout << "Choose one of the following\n";
        cout << "R : Rock \n";
        cout << "P : Paper \n";
        cout << "S : Scissors \n";
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');
    
    
    return player;

}


char getPcChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num){
    case 1 : return 'r';
    case 2 : return 'p';
    case 3 : return 's';
    }
}


void showChoice(char choice){
    switch (choice)
    {
    case 'r' : cout << "Rock\n";
        break;
    case 's' : cout << "Sicissors\n";
        break;
    case 'p' : cout << "paper\n";
        break;
    }

}


void choosewinner(char player, char pc){
    switch (player)
    {
    case 'r' : if (pc == 'r'){
        cout << "Tie, Retry ! \n";
        }
        else if (pc == 's'){
            cout << "You Win ! \n";
        }
        else {
            cout << "You Lose, Retry \n";
        }
        
     

    case 's' : if (pc == 's'){
        cout << "Tie, Retry ! \n";
        }
        else if (pc == 'p'){
            cout << "You Win ! \n";
        }
        else {
            cout << "You Lose, Retry \n";
        }
        break;

    case 'p' : if (pc == 'p'){
        cout << "Tie, Retry ! \n";
        }
        else if (pc == 'r'){
            cout << "You Win ! \n";
        }
        else {
            cout << "You Lose, Retry \n";
        }
        break;
    }
    

}
