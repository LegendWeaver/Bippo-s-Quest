// Alexia Smith
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Bippo
{
public:
    int hunger = 1, filth = 1, boredom = 1;
    bool starve, bloat, gunked, blinding, dull, overexcited;
};

void interactBippo(int &hunger, int &filth, int &boredom, int &action, const string &playerName)
{
    // feed
    if (action == 1)
    {
        if (4 > hunger && hunger > 0)
        {
            hunger -= 1;
            filth += 1;
            cout << "\n\n *Bippo looks at you excitedly as you toss him a treat.*\n\n What next, Guardian " << playerName << "? Feed him (1)? Play with him (2)? Wash him (3)?\n";
        }
        else
        {
            hunger -= 1;
            filth += 1;
            cout << "\n\n * Bippo eats the treat but he doesn't eat it with the same thrill as before. He doesn't seem to being hungry*\n\n What next, Guardian " << playerName << "? Feed him (1)? Play with him (2)? Wash him (3)?\n";
        }
        action = 0;
    }

    else if (action == 2)
    {
        // play
        if (4 > boredom && boredom > 0)
        {
            hunger -= 1;
            filth += 1;

            cout << "\n\n *Bippo looks at you excitedly leaps in the air as you throw him a stick.*\n\n What next, Guardian " << playerName << "? Feed him (1)? Play with him (2)? Wash him (3)?\n";
        }
        else
        {
            boredom -= 1;
            filth += 2;
            hunger += 1;
            cout << "\n\n *Bippo looks at you with almost frightening levels of excitement as you play a game of stick throw.*\n\n What next, Guardian " << playerName << "? Feed him (1)? Play with him (2)? Wash him (3)?\n";
        }
        action = 0;
    }

    else if (action == 3)
    {
        // wash
        if (4 > filth && filth > 0)
        {
            filth = 0;
            hunger += 1;

            cout << "\n\n *Bippo begrudgingly lets you scrub all the gunk off of him *\n\n What next, Guardian " << playerName << "? Feed him (1)? Play with him (2)? Wash him (3)?\n";
        }
        else
        {
            filth -= 2;
            hunger += 1;
            cout << "\n\n *Bippo let's you bathe him again, despite the fact he's already spotless.*\n\n What next, Guardian " << playerName << "? Feed him (1)? Play with him (2)? Wash him (3)?\n";
        }
        action = 0;
    }
    else
    {
        cout << "\n\n Apologies, guardian, but that is not a valid input. What next, Guardian " << playerName << "? Feed him (1)? Play with him (2)? Wash him (3)?\n";
        action = 0;
    }
    action = 0;
}

void bippoWarning(int &hunger, int &filth, int &boredom, int &action, const string &playerName)
{
    bool warning = false;
    string issue = "Warning! Bippo is looking too";

    if (hunger >= 3)
    {
        issue += " hungry ";
        warning = true;
    }

    if (boredom >= 3)
    {
        issue += " bored ";
        warning = true;
    }

    if (filth >= 3)
    {
        issue += " dirty ";
        warning = true;
    }

    if (hunger <= -3)
    {
        issue += " full ";
        warning = true;
    }

    if (boredom <= -3)
    {
        issue += " excited ";
        warning = true;
    }

    if (filth <= -3)
    {
        issue += " clean ";
        warning = true;
    }

    if (warning)
    {
        cout << "\n\n"
             << issue << "Keep that in mind before you do anything, Guardian " << playerName << ".\n";
    }
}

int main()
{
    char start;
    string playerName;
    int action;
    bool gameStart = false;
    Bippo b1;

    cout << "Welcome to Bippo's Quest! You are Bippo's new guardian, correct? Enter y for yes, n for no\n\n";
    cin >> start;
    tolower(start);

    while (!gameStart)
    {
        if (start == 'y')
        {
            // start game
            cout << "\n\nI'm happy to hear it. Bippo has been waiting for you. ";
            gameStart = true;
        }
        else if (start == 'n')
        {
            // close application
            cout << "\n\nOk then";
            exit(0);
        }
        else
        {
            cout << "\nError. Invalid input.";
        }
        break;
    }

    bool actionTaken = false;

    while (gameStart)
    {
        if (playerName.empty() && !actionTaken)
        {
            cout << "Bippo is a small creature, but believe it or not, he's going to save the world! But not yet. He needs your guidance. Crazy amount of pressure right? Trust me, I know.\n\n Baby steps first. Teach him his first word. Enter your name!\n\n";
            cin >> playerName;
            cin.ignore();
            getline(cin, playerName);
            cout << "\n"
                 << playerName << "? Alright. It seems he's learned your name. You have a few choices now! Do you feed him (enter 1)? Play with him (enter 2)? Or wash him (enter 3)? I'll leave you to it!\n\n";
        }

        while (!playerName.empty())
        {

            // game over conditons

            if (b1.hunger > 4)
            {
                b1.starve = true;
            }

            if (b1.hunger < -4)
            {
                b1.bloat = true;
            }

            if (b1.filth > 4)
            {
                b1.gunked = true;
            }

            if (b1.filth < -4)
            {
                b1.blinding = true;
            }

            if (b1.boredom > 4)
            {
                b1.dull = true;
            }

            if (b1.boredom < -4)
            {
                b1.overexcited = true;
            }

            actionTaken = true;
            cin >> action;
            int days = 0;
            if (days = 7) {
            cout "Congratulations! You have successfully taken care of Bippo for a week"

            } else {
            // taking care of Bippo
            if (!b1.blinding && !b1.gunked && !b1.dull && !b1.overexcited && !b1.bloat && !b1.starve)
            {
                interactBippo(b1.hunger, b1.filth, b1.boredom, action, playerName);
                bippoWarning(b1.hunger, b1.filth, b1.boredom, action, playerName);
                days = +1
            }

            if (b1.blinding || b1.gunked || b1.dull || b1.overexcited || b1.bloat || b1.starve)
            {
                cout << "Oh no! It seems as though you have not properly taken care of Bippo! You have ";

                if (b1.blinding)
                {
                    cout << "overwashed Bippo, to the point where he blinds everyone he looks at him! You have failed to raise the world's savior. Game over.";
                }
                else if (b1.gunked)
                {
                    cout << "not washed Bippo enough, to the point where he has been consumed by the gunk that coats him! You can no longer find Bippo among the filth. You have failed to raise the world's savior. Game over.";
                }
                else if (b1.dull)
                {
                    cout << "not played with Bippo enough, to the point where he has become so bored he turned to stone! You have failed to raise the world's savior. Game over.";
                }
                else if (b1.overexcited)
                {
                    cout << "played with Bippo too much, to the point where he exploded from overexcitement! You have failed to raise the world's savior. Game over.";
                }
                else if (b1.bloat)
                {
                    cout << "overfed Bippo, to the point where he can no longer move and has taken a aftermeal nap that will last a thousand years! You have failed to raise the world's savior. Game over.";
                }
                else if (b1.starve)
                {
                    cout << "not fed Bippo enough, to the point where he took food into his own hands and broke into a Walmart! Bippo now has a life sentence for eating all the frozen microwaveable meals at Walmart! You have failed to raise the world's savior. Game over.";
                }
                exit(0);
            }
            }
        }
    }

    return 0;
}