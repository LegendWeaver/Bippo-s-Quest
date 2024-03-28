//Alexia Smith
# include <iostream>
// #include <SFML/Graphics.hpp>

using namespace std;

int main() {
    string start, playerName;
    float bipHunger, bipFilth, bipBoredom, action;
    bool gameStart;
    gameStart = false;
    bipHunger = 0;
    bipFilth = 0;
    bipBoredom = 0;
    cout <<"Welcome to Bippo's Quest! You are Bippo's new guardian, correct?\n\n"<< endl;
    cin >> start;

    if (start == "yes" || start == "sure" || start == "YES"|| start == "Yes"){
        //start game
        cout << "\n\nI'm happy to hear it. Bippo has been waiting for you";
        gameStart = true;

    } else if (start == "no" || start == "NO" ||start == "No") {
        //close application
        cout <<"\n\nOk then";
        exit(0);
    } else {
        cout<<"\nError. Invalid input.";
        start = "";
        cin >> start;
    }

    if (gameStart == true){
        cout << "Bippo is a small creature, but believe it or not, he's going to save the world! But not yet. He needs your guidance. Crazy amount of pressure right? Trust me, I know.\n\n Baby steps first. Teach him his first word. Enter your name!\n\n";
        cin >> playerName;
    }

    if (gameStart == true && playerName != "") {
        cout << playerName << "? Alright. It seems he's learned your name. You have a few choices now! Do you feed him (enter 1)? Play with him (enter 2)? Or wash him (enter 3)? I'll leave you to it!\n\n";
        cin >> action;
    }
}