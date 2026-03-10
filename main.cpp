#include "colors.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main()
{
    string guildName;

    cout << CYAN << "=========================================" << endl;
    cout << "        ELDORIA GUILD MANAGEMENT         " << endl;
    cout << "=========================================" << endl << RESET;

    cout << BRIGHTBLUE << "Enter Guild Name: " << RESET;
    getline(cin, guildName);

    Guild g(guildName);

    int choice;

    while(true)
    {
        cout << CYAN << endl;
        cout << "=========================================" << endl;
        cout << "                MAIN MENU                " << endl;
        cout << "=========================================" << endl << RESET;

        cout << GREEN << "1. Recruit Warrior" << endl;
        cout << "2. Recruit Knight" << endl;
        cout << "3. Recruit Spellblade" << endl;
        cout << "4. Show Guild Roster" << endl;
        cout << "5. Compare Two Heroes" << endl;
        cout << "6. Combined Vitality of Two Heroes" << endl;
        cout << "7. Display Guild Staus" << endl;
        cout << YELLOW << "8. Exit" << endl << RESET;

        cout << BRIGHTBLUE << endl << "Enter choice: " << RESET;
        cin >> choice;

        if(choice == 1) {
            string name;
            int health, power, armor;

            cout << BRIGHTCYAN << "Warrior Name: " << RESET;
            cin >> name;

            cout << BRIGHTCYAN << "Health: " << RESET;
            cin >> health;

            cout << BRIGHTCYAN << "Base Power: " << RESET;
            cin >> power;

            cout << BRIGHTCYAN << "Armor Rating: " << RESET;
            cin >> armor;

            Hero* w = new Warrior(name, health, power, armor);
            g += w;

            cout << GREEN << "Warrior recruited!" << endl << RESET;
        } else if(choice == 2) {
            string name;
            int health, power, armor, charge;

            cout << BRIGHTCYAN << "Knight Name: " << RESET;
            cin >> name;

            cout << BRIGHTCYAN << "Health: " << RESET;
            cin >> health;

            cout << BRIGHTCYAN << "Base Power: " << RESET;
            cin >> power;

            cout << BRIGHTCYAN << "Armor Rating: " << RESET;
            cin >> armor;

            cout << BRIGHTCYAN << "Charge Bonus: " << RESET;
            cin >> charge;

            Hero* k = new Knight(name, health, power, armor, charge);
            g += k;

            cout << GREEN << "Knight recruited!" << endl << RESET;
        } else if(choice == 3) {
            string name;
            int health, power, spell;

            cout << BRIGHTCYAN << "Spellblade Name: " << RESET;
            cin >> name;

            cout << BRIGHTCYAN << "Health: " << RESET;
            cin >> health;

            cout << BRIGHTCYAN << "Base Power: " << RESET;
            cin >> power;

            cout << BRIGHTCYAN << "Spell Power: " << RESET;
            cin >> spell;

            Hero* s = new Spellblade(name, health, power, spell);
            g += s;

            cout << GREEN << "Spellblade recruited!" << endl << RESET;
        } else if(choice == 4) {
            cout << BLUE << endl << "===== GUILD ROSTER =====" << endl << RESET;
            cout << g << endl;
        } else if(choice == 5) {
            cout << BLUE << endl << "===== GUILD ROSTER =====" << endl << RESET;
            cout << g << endl;

            if(!(g.getMemberCount() == 0) && (g.getMemberCount() > 1)) {
                int h1, h2;

                cout << BRIGHTBLUE << "Enter first hero index: " << RESET;
                cin >> h1;

                cout << BRIGHTBLUE << "Enter second hero index: " << RESET;
                cin >> h2;

                Hero* hero1 = g.getHero(h1);
                Hero* hero2 = g.getHero(h2);

                if(hero1 == nullptr || hero2 == nullptr)
                {
                    cout << RED << "Invalid selection!" << endl << RESET;
                }
                else
                {
                    if(*hero1 > *hero2)
                    {
                        cout << GREEN << hero1->getName()
                            << " is stronger than "
                            << hero2->getName() << "!" << endl << RESET;
                    }
                    else
                    {
                        cout << GREEN << hero2->getName()
                            << " is stronger than "
                            << hero1->getName() << "!" << endl << RESET;
                    }
                }
            } else if(g.getMemberCount() == 1) {
                cout << YELLOW << "Only 1 Member in Guild!" << endl << RESET;
            } else {
                cout << RED << "No Member in Guild!" << endl << RESET;
            }
        } else if(choice == 6) {
            cout << BLUE << endl << "===== GUILD ROSTER =====" << endl << RESET;
            cout << g << endl;

            cout << "Total guild Power: " << g.calculateTotalGuildPower() << endl;
        } else if(choice == 7) {
            cout << BRIGHTBLUE << "===== GUILD STATS =====" << endl << RESET;
            g.displayGuildStats();
        } else if(choice == 8) {
            cout << YELLOW << endl << "Exiting Guild System..." << endl << RESET;
            break;
        } else {
            cout << RED << "Invalid choice! Try again." << endl << RESET;
        }
    }

    return 0;
}