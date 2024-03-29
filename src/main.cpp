//Alexia Smith
# include <iostream>
// #include <SFML/Graphics.hpp>

using namespace std;

int main() {
    char start;
    string playerName;
    int bipHunger, bipFilth, bipBoredom, action;
    bool gameStart;
    gameStart = false;
    bipHunger = 1;
    bipFilth = 1;
    bipBoredom = 1;
    cout <<"Welcome to Bippo's Quest! You are Bippo's new guardian, correct? Y for yes, N for no\n\n"<< endl;
    cin >> start;
    tolower(start);

    if (start == 'y'){
        //start game
        cout << "\n\nI'm happy to hear it. Bippo has been waiting for you";
        gameStart = true;

    } else if (start == 'n') {
        //close application
        cout <<"\n\nOk then";
        exit(0);

    } else {
        cout<<"\nError. Invalid input.";
        cin >> start;
    }

    if (gameStart == true){
        cout << "Bippo is a small creature, but believe it or not, he's going to save the world! But not yet. He needs your guidance. Crazy amount of pressure right? Trust me, I know.\n\n Baby steps first. Teach him his first word. Enter your name!\n\n";
        cin >> playerName;
    }

    if (gameStart == true && playerName != "") {
        cout << "\n" << playerName << "? Alright. It seems he's learned your name. You have a few choices now! Do you feed him (enter 1)? Play with him (enter 2)? Or wash him (enter 3)? I'll leave you to it!\n\n";
        cin >> action;
    }

    //taking care of Bippo
    //stardard scenarios
    if (action == 1 && bipHunger >> 0) {
        bipHunger -= 1;
        bipFilth += 1;
        action = 0;
        cout << "\n\n *Bippo looks at you excitedly as you toss him a treat.*\n\n What next, Guardian" << playerName << "? Feed him (1)? Play with him (2)? Wash him (3)?\n";
        cin >> action;
    } else if (action == 2 && bipBoredom >> 0) {
        bipBoredom -= 1;
        bipFilth += 2;
        bipHunger += 1;
        action = 0;
        cout << "\n\n *Bippo looks at you with glee as you play an exhilerating game of stick throw.*\n\n What next, Guardian" << playerName << "? Feed him (1)? Play with him (2)? Wash him (3)?\n";
    } else if (action == 3 && bipFilth >> 0) {
        bipFilth = 0;
        bipHunger += 1;
        action = 0;
        cout << "\n\n *Bippo begrudgingly lets you scrub all the gunk off of him *\n\n What next, Guardian" << playerName << "? Feed him (1)? Play with him (2)? Wash him (3)?\n";

        //Redundant scenarios
    } else if (action == 1 && bipHunger << 0) {
        bipHunger -= 1;
        bipFilth += 1;
        action = 0;
        cout << "\n\n * Bippo eats the treat but he doesn't eat it with the same thrill as before. He doesn't seem to being hungry*\n\n What next, Guardian" << playerName << "? Feed him (1)? Play with him (2)? Wash him (3)?\n";
        cin >> action;
    } else if (action == 2 && bipBoredom << 0) {
        bipBoredom -= 1;
        bipFilth += 2;
        bipHunger += 1;
        action = 0;
        cout << "\n\n *Bippo looks at you with almost frightening levels of excitement as you play a game of stick throw.*\n\n What next, Guardian" << playerName << "? Feed him (1)? Play with him (2)? Wash him (3)?\n";
    } else if (action == 3 && bipFilth << 0) {
        bipFilth -= 2;
        bipHunger += 1;
        action = 0;
        cout << "\n\n *Bippo let's you bathe him again, despite the fact he's already spotless.*\n\n What next, Guardian" << playerName << "? Feed him (1)? Play with him (2)? Wash him (3)?\n";
    }
}