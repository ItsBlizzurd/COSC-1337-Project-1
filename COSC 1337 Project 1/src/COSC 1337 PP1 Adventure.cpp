//Dang Doan
//COSC 1337 PP1 Adventure Program

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

//For blocking
bool playerBlock = false;

//For shop
bool playerShop = false;

//Game introduction
void gameIntro();

//Game continue confirmation
void gameContinueCheck();

//Shop enter check
void shopEnter();

//Story
void storyPart1();
void storyPart2();
void storyPart3();
void storyPart4();
void storyPart5();
void storyPart6();
void storyPart7();
void storyPart8();
void storyPart9();
void storyPart10();
void storyPart11();
void storyPart12();
void storyPart13();
void storyPart14();
void storyPart15();
void storyPart16();
void storyPart17();
void storyPart18();
void storyFinal();

//Game Over
void gameOver();

//For gear stats
struct playerGear
{
    string name;
    int damage;
    int defense;
    int price;
}
//Gear
//Weapons
brokenSword,
ironSword,
steelSword,
goldSword,
enchantedSword,
blackSword,
runeBlade,
//Armor
brokenArmor,
leatherArmor,
ironMesh,
plateArmor,
holyArmor,
darkArmor,
heroArmor;

//Player stats
    int playerHealth = 100;
    int playerDamage = 1;
    int playerArmor = 1;
    int playerGold = 0;

    //Potions held
    int smallPotionHeld = 0;
    int medPotionHeld = 0;
    int largePotionHeld = 0;

    //Bombs held
    int smallBombHeld = 0;
    int medBombHeld = 0;
    int largeBombHeld = 0;

int main()
{
    //Game stats

    //Potions held
    int smallPotionHeld = 0;
    int medPotionHeld = 0;
    int largePotionHeld = 0;

    //Bombs held
    int smallBombHeld = 0;
    int medBombHeld = 0;
    int largeBombHeld = 0;

    //Enemy stats
    int enemyHealth;
    int enemyDamage;
    int enemyArmor;
    int enemyGold;

    //Starting Items
    playerDamage = 2;
    playerArmor = 4;

    //Blocking math
    int blockingMove = playerArmor + float(playerArmor/2);

    //Weapon Values
    //Broken Sword values
    brokenSword.name = "Broken Sword";
    brokenSword.damage = 2;
    brokenSword.defense = 0;
    brokenSword.price = 0;

    //Iron Sword values
    ironSword.name = "Iron Sword";
    ironSword.damage = 8;
    ironSword.defense = 0;
    ironSword.price = 15;

    //Steel Sword values
    steelSword.name = "Steel Sword";
    steelSword.damage = 12;
    steelSword.defense = 0;
    steelSword.price = 30;

    //Gold Sword values
    goldSword.name = "Golden Blade";
    goldSword.damage = 18;
    goldSword.defense = 0;
    goldSword.price = 50;

    //Enchanted Sword values
    enchantedSword.name = "Enchanted Blade";
    enchantedSword.damage = 26;
    enchantedSword.defense = 0;
    enchantedSword.price = 75;

    //Black Sword values
    blackSword.name = "Dark Sword";
    blackSword.damage = 32;
    blackSword.defense = 0;
    blackSword.price = 100;

    //Rune Blade values
    runeBlade.name = "Rune Blade";
    runeBlade.damage = 40;
    runeBlade.defense = 0;
    runeBlade.price = 250;

    //Broken Armor values
    brokenArmor.name = "Broken Armor";
    brokenArmor.damage = 0;
    brokenArmor.defense = 4;
    brokenArmor.price = 0;

    //Leather Armor values
    leatherArmor.name = "Leather Armor";
    leatherArmor.damage = 0;
    leatherArmor.defense = 8;
    leatherArmor.price = 15;

    //Iron Mesh values
    ironMesh.name = "Iron Chain-Link Mesh";
    ironMesh.damage = 0;
    ironMesh.defense = 12;
    ironMesh.price = 30;

    //Plate Armor values
    plateArmor.name = "Knight Plate";
    plateArmor.damage = 0;
    plateArmor.defense = 16;
    plateArmor.price = 65;

    //Holy Armor values
    holyArmor.name = "Holy Knight Plate";
    holyArmor.damage = 0;
    holyArmor.defense = 24;
    holyArmor.price = 100;

    //Dark Armor values
    darkArmor.name = "Dark Knight Plate";
    darkArmor.damage = 0;
    darkArmor.defense = 30;
    darkArmor.price = 150;

    //Hero Armor values
    heroArmor.name = "Brave Gear";
    heroArmor.damage = 0;
    heroArmor.defense = 35;
    heroArmor.price = 250;

    //Introduction to the game
    gameIntro();

    //Story Part 1
    storyPart1();

    //First Battle
    //Spearman battle info
    enemyHealth = 3;
    enemyDamage = 6;
    enemyArmor = 1;
    enemyGold = 35;

    while (enemyHealth > 0)
    {
        int firstBattleChoice;

        //In case the when loop fails
        if (enemyHealth < 0)
        {
            break;
        }

        cout << "\n\nYour stats:\n"
             << "Health: "
             << playerHealth
             << "\nDamage: "
             << playerDamage
             << "\nArmor: "
             << playerArmor
             << "\n\nYou ready up for a strike.\n"
             << "\nType your choice.\n"
             << "1. Attack\n"
             << "2. Block\n"
             << "3. Inspect Enemy\n"
             << "4. Items\n"
             << "5. Run\n"
             << "Choice: ";
        cin >> firstBattleChoice;

        //Player choice
        switch (firstBattleChoice)
        {
            //Attack
            case 1:
                cout << "\nYou swing your blade at the enemy.\n"
                     << "You dealt "
                     << (playerDamage - enemyArmor)
                     << " damage!";
                playerBlock = false;
                enemyHealth = enemyHealth - (playerDamage - enemyArmor);
                break;

            //Defend
            case 2:
                cout << "\nYou raise your sword to anticipate the enemy's attack.\n"
                     << "Your defense increased to "
                     << blockingMove;
                playerBlock = true;
                break;

            //Inspect
            case 3:
                cout << "\nYou inspect your foe.\n"
                     << "Health: "
                     << enemyHealth
                     << "\nDamage: "
                     << enemyDamage
                     << "\nArmor: "
                     << enemyArmor
                     << "\nGold held: "
                     << enemyGold;
                playerBlock = false;
                break;

            //Items
            case 4:
                cout << "\nYou have no items in your pouch right now!";
                playerBlock = false;
                break;

            //Run
            case 5:
                cout << "\nYour ankle feels sprained, you can't escape this battle!";
                playerBlock = false;
                break;
        }

        //Enemy attack sequence
        cout << "\n\nThe enemy attacks you.\n"
             << "They deal ";

        //If player is blocking
        if (playerBlock == true)
        {
            cout << (enemyDamage - blockingMove);
            playerHealth = playerHealth - (enemyDamage - blockingMove);
            cout << " damage!";

            gameContinueCheck();
        }

        //If player isn't blocking
        if (playerBlock == false)
        {
            cout << (enemyDamage - playerArmor);
            playerHealth = playerHealth - (enemyDamage - playerArmor);
            cout << " damage!";

            gameContinueCheck();
        }

        //If you lose
        if (playerHealth < 0)
        {
            gameOver();
        }
    }

    cout << "\n\nThe spearman drops his weapon and falls to the ground.\n"
         << "You search the spearman to only find a small bag of gold coins.\n"
         << "You obtain "
         << enemyGold
         << " coins.\n";

    playerGold = playerGold + enemyGold;

    gameContinueCheck();

    //Story Part 2
    storyPart2();

    //Story Part 3
    storyPart3();

    //Shop
    shopEnter();

    //Story Part 4
    storyPart4();

    //Story Part 5
    storyPart5();

    //Battle 2
    //Bandit Stats
    enemyHealth = 8;
    enemyDamage = 10;
    enemyArmor = 3;
    enemyGold = 60;

    //Battle 2
    while (enemyHealth > 0)
    {
        int playerBattleChoice;
        int playerItemChoice;

        //In case the when loop fails
        if (enemyHealth < 0)
        {
            break;
        }

        cout << "\n\nYour stats:\n"
             << "Health: "
             << playerHealth
             << "\nDamage: "
             << playerDamage
             << "\nArmor: "
             << playerArmor
             << "\n\nYou ready up for a strike.\n"
             << "\nType your choice.\n"
             << "1. Attack\n"
             << "2. Block\n"
             << "3. Inspect Enemy\n"
             << "4. Items\n"
             << "5. Run\n"
             << "Choice: ";
        cin >> playerBattleChoice;

        //Player choice
        switch (playerBattleChoice)
        {
            //Attack
            case 1:
                cout << "\nYou swing your blade at the enemy.\n"
                     << "You dealt "
                     << (playerDamage - enemyArmor)
                     << " damage!";
                playerBlock = false;
                enemyHealth = enemyHealth - (playerDamage - enemyArmor);
                break;

            //Defend
            case 2:
                cout << "\nYou raise your sword to anticipate the enemy's attack.\n"
                     << "Your defense increased to "
                     << blockingMove;
                playerBlock = true;
                break;

            //Inspect
            case 3:
                cout << "\nYou inspect your foe.\n"
                     << "Health: "
                     << enemyHealth
                     << "\nDamage: "
                     << enemyDamage
                     << "\nArmor: "
                     << enemyArmor
                     << "\nGold held: "
                     << enemyGold;
                playerBlock = false;
                break;

            //Items
            case 4:
                cout << "\nYou reach into your pouch to use an item!\n"
                     << "Items held: \n"
                     << "1. Small potions: "
                     << smallPotionHeld
                     << "\n2. Medium potions:  "
                     << medPotionHeld
                     << "\n3. Large potions: "
                     << largePotionHeld
                     << "\n4. Small bombs: "
                     << smallBombHeld
                     << "\n5. Medium bombs: "
                     << medBombHeld
                     << "\n6. Large bombs: "
                     << largeBombHeld
                     <<endl;
                     cin >> playerItemChoice;

                     switch (playerItemChoice)
                     {
                         //Small potion
                        case 1:
                            if (smallPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (smallPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 25 HP!\n";
                                playerHealth = playerHealth + 25;
                                smallPotionHeld = smallPotionHeld - 1;
                                break;
                            }
                        //Med Potion
                        case 2:
                            if (medPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (medPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 50 HP!\n";
                                playerHealth = playerHealth + 50;
                                medPotionHeld = medPotionHeld - 1;
                                break;
                            }
                        //Large Potion
                        case 3:
                            if (largePotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (largePotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 75 HP!\n";
                                playerHealth = playerHealth + 75;
                                largePotionHeld = largePotionHeld - 1;
                                break;
                            }
                        case 4:
                            if (smallBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (smallBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 25 damage!\n";
                                enemyHealth = enemyHealth - 25;
                                break;
                            }
                        case 5:
                            if (medBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (medBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 50 damage!\n";
                                enemyHealth = enemyHealth - 50;
                                break;
                            }
                        case 6:
                            if (largeBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (largeBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 75 damage!\n";
                                enemyHealth = enemyHealth - 75;
                                break;
                            }
                     }
                playerBlock = false;
                break;

            //Run
            case 5:
                cout << "\nYou escaped the battle, skipping the encounter!";
                enemyHealth = 0;
                playerBlock = false;
                break;
        }

        if (enemyHealth == 0)
        {
            cout << "\nThe bandit falls into his own pool of blood.\n"
                 << "You gained 60 gold\n";
            playerGold = playerGold + enemyGold;
            break;
        }

        //Enemy attack sequence
        cout << "\n\nThe enemy attacks you.\n"
             << "They deal ";

        //If player is blocking
        if (playerBlock == true)
        {
            cout << (enemyDamage - blockingMove);
            playerHealth = playerHealth - (enemyDamage - blockingMove);
            cout << " damage!";

            gameContinueCheck();
        }

        //If player isn't blocking
        if (playerBlock == false)
        {
            cout << (enemyDamage - playerArmor);
            playerHealth = playerHealth - (enemyDamage - playerArmor);
            cout << " damage!";

            gameContinueCheck();
        }

        //If you lose
        if (playerHealth < 0)
        {
            gameOver();
        }
    }

    //Story Part 6
    storyPart6();

    enemyHealth = 8;
    enemyDamage = 10;
    enemyArmor = 3;
    enemyGold = 75;

    //Battle 3
    while (enemyHealth > 0)
    {
        int playerBattleChoice;
        int playerItemChoice;

        //In case the when loop fails
        if (enemyHealth < 0)
        {
            break;
        }

        cout << "\n\nYour stats:\n"
             << "Health: "
             << playerHealth
             << "\nDamage: "
             << playerDamage
             << "\nArmor: "
             << playerArmor
             << "\n\nYou ready up for a strike.\n"
             << "\nType your choice.\n"
             << "1. Attack\n"
             << "2. Block\n"
             << "3. Inspect Enemy\n"
             << "4. Items\n"
             << "5. Run\n"
             << "Choice: ";
        cin >> playerBattleChoice;

        //Player choice
        switch (playerBattleChoice)
        {
            //Attack
            case 1:
                cout << "\nYou swing your blade at the enemy.\n"
                     << "You dealt "
                     << (playerDamage - enemyArmor)
                     << " damage!";
                playerBlock = false;
                enemyHealth = enemyHealth - (playerDamage - enemyArmor);
                break;

            //Defend
            case 2:
                cout << "\nYou raise your sword to anticipate the enemy's attack.\n"
                     << "Your defense increased to "
                     << blockingMove;
                playerBlock = true;
                break;

            //Inspect
            case 3:
                cout << "\nYou inspect your foe.\n"
                     << "Health: "
                     << enemyHealth
                     << "\nDamage: "
                     << enemyDamage
                     << "\nArmor: "
                     << enemyArmor
                     << "\nGold held: "
                     << enemyGold;
                playerBlock = false;
                break;

            //Items
            case 4:
                cout << "\nYou reach into your pouch to use an item!\n"
                     << "Items held: \n"
                     << "1. Small potions: "
                     << smallPotionHeld
                     << "\n2. Medium potions:  "
                     << medPotionHeld
                     << "\n3. Large potions: "
                     << largePotionHeld
                     << "\n4. Small bombs: "
                     << smallBombHeld
                     << "\n5. Medium bombs: "
                     << medBombHeld
                     << "\n6. Large bombs: "
                     << largeBombHeld
                     <<endl;
                     cin >> playerItemChoice;

                     switch (playerItemChoice)
                     {
                         //Small potion
                        case 1:
                            if (smallPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (smallPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 25 HP!\n";
                                playerHealth = playerHealth + 25;
                                smallPotionHeld = smallPotionHeld - 1;
                                break;
                            }
                        //Med Potion
                        case 2:
                            if (medPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (medPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 50 HP!\n";
                                playerHealth = playerHealth + 50;
                                medPotionHeld = medPotionHeld - 1;
                                break;
                            }
                        //Large Potion
                        case 3:
                            if (largePotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (largePotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 75 HP!\n";
                                playerHealth = playerHealth + 75;
                                largePotionHeld = largePotionHeld - 1;
                                break;
                            }
                        case 4:
                            if (smallBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (smallBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 25 damage!\n";
                                enemyHealth = enemyHealth - 25;
                                break;
                            }
                        case 5:
                            if (medBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (medBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 50 damage!\n";
                                enemyHealth = enemyHealth - 50;
                                break;
                            }
                        case 6:
                            if (largeBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (largeBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 75 damage!\n";
                                enemyHealth = enemyHealth - 75;
                                break;
                            }
                     }
                playerBlock = false;
                break;

            //Run
            case 5:
                cout << "\nYou escaped the battle, skipping the encounter!";
                enemyHealth = 0;
                playerBlock = false;
                break;
        }

        if (enemyHealth == 0)
        {
            cout << "\nYou finish off the bandit and sheathe your sword.\n"
                 << "You gained 75 coins.\n";
            playerGold = playerGold + enemyGold;
            break;
        }
    }

    //Story Part 7
    storyPart7();

    //Shop
    shopEnter();

    //Story Part 8
    storyPart8();

    //Story Part 9
    storyPart9();

    //Battle 4
    enemyHealth = 15;
    enemyDamage = 15;
    enemyArmor = 6;
    enemyGold = 100;

    while (enemyHealth > 0)
    {
        int playerBattleChoice;
        int playerItemChoice;

        //In case the when loop fails
        if (enemyHealth < 0)
        {
            break;
        }

        cout << "\n\nYour stats:\n"
             << "Health: "
             << playerHealth
             << "\nDamage: "
             << playerDamage
             << "\nArmor: "
             << playerArmor
             << "\n\nYou ready up for a strike.\n"
             << "\nType your choice.\n"
             << "1. Attack\n"
             << "2. Block\n"
             << "3. Inspect Enemy\n"
             << "4. Items\n"
             << "5. Run\n"
             << "Choice: ";
        cin >> playerBattleChoice;

        //Player choice
        switch (playerBattleChoice)
        {
            //Attack
            case 1:
                cout << "\nYou swing your blade at the enemy.\n"
                     << "You dealt "
                     << (playerDamage - enemyArmor)
                     << " damage!";
                playerBlock = false;
                enemyHealth = enemyHealth - (playerDamage - enemyArmor);
                break;

            //Defend
            case 2:
                cout << "\nYou raise your sword to anticipate the enemy's attack.\n"
                     << "Your defense increased to "
                     << blockingMove;
                playerBlock = true;
                break;

            //Inspect
            case 3:
                cout << "\nYou inspect your foe.\n"
                     << "Health: "
                     << enemyHealth
                     << "\nDamage: "
                     << enemyDamage
                     << "\nArmor: "
                     << enemyArmor
                     << "\nGold held: "
                     << enemyGold;
                playerBlock = false;
                break;

            //Items
            case 4:
                cout << "\nYou reach into your pouch to use an item!\n"
                     << "Items held: \n"
                     << "1. Small potions: "
                     << smallPotionHeld
                     << "\n2. Medium potions:  "
                     << medPotionHeld
                     << "\n3. Large potions: "
                     << largePotionHeld
                     << "\n4. Small bombs: "
                     << smallBombHeld
                     << "\n5. Medium bombs: "
                     << medBombHeld
                     << "\n6. Large bombs: "
                     << largeBombHeld
                     <<endl;
                     cin >> playerItemChoice;

                     switch (playerItemChoice)
                     {
                         //Small potion
                        case 1:
                            if (smallPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (smallPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 25 HP!\n";
                                playerHealth = playerHealth + 25;
                                smallPotionHeld = smallPotionHeld - 1;
                                break;
                            }
                        //Med Potion
                        case 2:
                            if (medPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (medPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 50 HP!\n";
                                playerHealth = playerHealth + 50;
                                medPotionHeld = medPotionHeld - 1;
                                break;
                            }
                        //Large Potion
                        case 3:
                            if (largePotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (largePotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 75 HP!\n";
                                playerHealth = playerHealth + 75;
                                largePotionHeld = largePotionHeld - 1;
                                break;
                            }
                        case 4:
                            if (smallBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (smallBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 25 damage!\n";
                                enemyHealth = enemyHealth - 25;
                                break;
                            }
                        case 5:
                            if (medBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (medBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 50 damage!\n";
                                enemyHealth = enemyHealth - 50;
                                break;
                            }
                        case 6:
                            if (largeBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (largeBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 75 damage!\n";
                                enemyHealth = enemyHealth - 75;
                                break;
                            }
                     }
                playerBlock = false;
                break;

            //Run
            case 5:
                cout << "\nYou escaped the battle, skipping the encounter!";
                enemyHealth = 0;
                playerBlock = false;
                break;
        }

        if (enemyHealth == 0)
        {
            cout << "\nSlay the undead knight, dislodging his rotten head from his shoulders.\n"
                 << "You gained 100 coins.\n";
            playerGold = playerGold + enemyGold;
            break;
        }
    }

    //Story Part 10
    storyPart10();

    //Shop
    shopEnter();

    //Story Part 11
    storyPart11();

    enemyHealth = 20;
    enemyDamage = 30;
    enemyArmor = 10;
    enemyGold = 150;

    while (enemyHealth > 0)
    {
        int playerBattleChoice;
        int playerItemChoice;

        //In case the when loop fails
        if (enemyHealth < 0)
        {
            break;
        }

        cout << "\n\nYour stats:\n"
             << "Health: "
             << playerHealth
             << "\nDamage: "
             << playerDamage
             << "\nArmor: "
             << playerArmor
             << "\n\nYou ready up for a strike.\n"
             << "\nType your choice.\n"
             << "1. Attack\n"
             << "2. Block\n"
             << "3. Inspect Enemy\n"
             << "4. Items\n"
             << "5. Run\n"
             << "Choice: ";
        cin >> playerBattleChoice;

        //Player choice
        switch (playerBattleChoice)
        {
            //Attack
            case 1:
                cout << "\nYou swing your blade at the enemy.\n"
                     << "You dealt "
                     << (playerDamage - enemyArmor)
                     << " damage!";
                playerBlock = false;
                enemyHealth = enemyHealth - (playerDamage - enemyArmor);
                break;

            //Defend
            case 2:
                cout << "\nYou raise your sword to anticipate the enemy's attack.\n"
                     << "Your defense increased to "
                     << blockingMove;
                playerBlock = true;
                break;

            //Inspect
            case 3:
                cout << "\nYou inspect your foe.\n"
                     << "Health: "
                     << enemyHealth
                     << "\nDamage: "
                     << enemyDamage
                     << "\nArmor: "
                     << enemyArmor
                     << "\nGold held: "
                     << enemyGold;
                playerBlock = false;
                break;

            //Items
            case 4:
                cout << "\nYou reach into your pouch to use an item!\n"
                     << "Items held: \n"
                     << "1. Small potions: "
                     << smallPotionHeld
                     << "\n2. Medium potions:  "
                     << medPotionHeld
                     << "\n3. Large potions: "
                     << largePotionHeld
                     << "\n4. Small bombs: "
                     << smallBombHeld
                     << "\n5. Medium bombs: "
                     << medBombHeld
                     << "\n6. Large bombs: "
                     << largeBombHeld
                     <<endl;
                     cin >> playerItemChoice;

                     switch (playerItemChoice)
                     {
                         //Small potion
                        case 1:
                            if (smallPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (smallPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 25 HP!\n";
                                playerHealth = playerHealth + 25;
                                smallPotionHeld = smallPotionHeld - 1;
                                break;
                            }
                        //Med Potion
                        case 2:
                            if (medPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (medPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 50 HP!\n";
                                playerHealth = playerHealth + 50;
                                medPotionHeld = medPotionHeld - 1;
                                break;
                            }
                        //Large Potion
                        case 3:
                            if (largePotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (largePotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 75 HP!\n";
                                playerHealth = playerHealth + 75;
                                largePotionHeld = largePotionHeld - 1;
                                break;
                            }
                        case 4:
                            if (smallBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (smallBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 25 damage!\n";
                                enemyHealth = enemyHealth - 25;
                                break;
                            }
                        case 5:
                            if (medBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (medBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 50 damage!\n";
                                enemyHealth = enemyHealth - 50;
                                break;
                            }
                        case 6:
                            if (largeBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (largeBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 75 damage!\n";
                                enemyHealth = enemyHealth - 75;
                                break;
                            }
                     }
                playerBlock = false;
                break;

            //Run
            case 5:
                cout << "\nHe blocks your path!\n";
                playerBlock = false;
                break;
        }

        if (enemyHealth == 0)
        {
            cout << "\nYou narrowly dodge his axe swing and drive your blade through his throat.\n"
                 << "You gained 150 coins.\n";
            playerGold = playerGold + enemyGold;
            break;
        }
    }

    //Story Part 12
    storyPart12();

    //Shop
    shopEnter();

    //Story Part 13
    storyPart13();

    enemyHealth = 30;
    enemyDamage = 50;
    enemyArmor = 0;
    enemyGold = 200;

    while (enemyHealth > 0)
    {
        int playerBattleChoice;
        int playerItemChoice;

        //In case the when loop fails
        if (enemyHealth < 0)
        {
            break;
        }

        cout << "\n\nYour stats:\n"
             << "Health: "
             << playerHealth
             << "\nDamage: "
             << playerDamage
             << "\nArmor: "
             << playerArmor
             << "\n\nYou ready up for a strike.\n"
             << "\nType your choice.\n"
             << "1. Attack\n"
             << "2. Block\n"
             << "3. Inspect Enemy\n"
             << "4. Items\n"
             << "5. Run\n"
             << "Choice: ";
        cin >> playerBattleChoice;

        //Player choice
        switch (playerBattleChoice)
        {
            //Attack
            case 1:
                cout << "\nYou swing your blade at the enemy.\n"
                     << "You dealt "
                     << (playerDamage - enemyArmor)
                     << " damage!";
                playerBlock = false;
                enemyHealth = enemyHealth - (playerDamage - enemyArmor);
                break;

            //Defend
            case 2:
                cout << "\nYou raise your sword to anticipate the enemy's attack.\n"
                     << "Your defense increased to "
                     << blockingMove;
                playerBlock = true;
                break;

            //Inspect
            case 3:
                cout << "\nYou inspect your foe.\n"
                     << "Health: "
                     << enemyHealth
                     << "\nDamage: "
                     << enemyDamage
                     << "\nArmor: "
                     << enemyArmor
                     << "\nGold held: "
                     << enemyGold;
                playerBlock = false;
                break;

            //Items
            case 4:
                cout << "\nYou reach into your pouch to use an item!\n"
                     << "Items held: \n"
                     << "1. Small potions: "
                     << smallPotionHeld
                     << "\n2. Medium potions:  "
                     << medPotionHeld
                     << "\n3. Large potions: "
                     << largePotionHeld
                     << "\n4. Small bombs: "
                     << smallBombHeld
                     << "\n5. Medium bombs: "
                     << medBombHeld
                     << "\n6. Large bombs: "
                     << largeBombHeld
                     <<endl;
                     cin >> playerItemChoice;

                     switch (playerItemChoice)
                     {
                         //Small potion
                        case 1:
                            if (smallPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (smallPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 25 HP!\n";
                                playerHealth = playerHealth + 25;
                                smallPotionHeld = smallPotionHeld - 1;
                                break;
                            }
                        //Med Potion
                        case 2:
                            if (medPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (medPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 50 HP!\n";
                                playerHealth = playerHealth + 50;
                                medPotionHeld = medPotionHeld - 1;
                                break;
                            }
                        //Large Potion
                        case 3:
                            if (largePotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (largePotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 75 HP!\n";
                                playerHealth = playerHealth + 75;
                                largePotionHeld = largePotionHeld - 1;
                                break;
                            }
                        case 4:
                            if (smallBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (smallBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 25 damage!\n";
                                enemyHealth = enemyHealth - 25;
                                break;
                            }
                        case 5:
                            if (medBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (medBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 50 damage!\n";
                                enemyHealth = enemyHealth - 50;
                                break;
                            }
                        case 6:
                            if (largeBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (largeBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 75 damage!\n";
                                enemyHealth = enemyHealth - 75;
                                break;
                            }
                     }
                playerBlock = false;
                break;

            //Run
            case 5:
                cout << "\nYour feet waver, you can't run from this battle!\n";
                playerBlock = false;
                break;
        }

        if (enemyHealth == 0)
        {
            cout << "\nHe slams his greatsword downward, getting it stuck.\n"
                 << "In one swift motion, you jump on the blade and leap above him of the finishing blow.\n"
                 << "You gained 200 coins.\n";
            playerGold = playerGold + enemyGold;
            break;
        }
    }

    //Story Part 14
    storyPart14();

    //Shop
    shopEnter();

    //Story Part 15
    storyPart15();

    enemyHealth = 35;
    enemyDamage = 25;
    enemyArmor = 20;
    enemyGold = 250;

    while (enemyHealth > 0)
    {
        int playerBattleChoice;
        int playerItemChoice;

        //In case the when loop fails
        if (enemyHealth < 0)
        {
            break;
        }

        cout << "\n\nYour stats:\n"
             << "Health: "
             << playerHealth
             << "\nDamage: "
             << playerDamage
             << "\nArmor: "
             << playerArmor
             << "\n\nYou ready up for a strike.\n"
             << "\nType your choice.\n"
             << "1. Attack\n"
             << "2. Block\n"
             << "3. Inspect Enemy\n"
             << "4. Items\n"
             << "5. Run\n"
             << "Choice: ";
        cin >> playerBattleChoice;

        //Player choice
        switch (playerBattleChoice)
        {
            //Attack
            case 1:
                cout << "\nYou swing your blade at the enemy.\n"
                     << "You dealt "
                     << (playerDamage - enemyArmor)
                     << " damage!";
                playerBlock = false;
                enemyHealth = enemyHealth - (playerDamage - enemyArmor);
                break;

            //Defend
            case 2:
                cout << "\nYou raise your sword to anticipate the enemy's attack.\n"
                     << "Your defense increased to "
                     << blockingMove;
                playerBlock = true;
                break;

            //Inspect
            case 3:
                cout << "\nYou inspect your foe.\n"
                     << "Health: "
                     << enemyHealth
                     << "\nDamage: "
                     << enemyDamage
                     << "\nArmor: "
                     << enemyArmor
                     << "\nGold held: "
                     << enemyGold;
                playerBlock = false;
                break;

            //Items
            case 4:
                cout << "\nYou reach into your pouch to use an item!\n"
                     << "Items held: \n"
                     << "1. Small potions: "
                     << smallPotionHeld
                     << "\n2. Medium potions:  "
                     << medPotionHeld
                     << "\n3. Large potions: "
                     << largePotionHeld
                     << "\n4. Small bombs: "
                     << smallBombHeld
                     << "\n5. Medium bombs: "
                     << medBombHeld
                     << "\n6. Large bombs: "
                     << largeBombHeld
                     <<endl;
                     cin >> playerItemChoice;

                     switch (playerItemChoice)
                     {
                         //Small potion
                        case 1:
                            if (smallPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (smallPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 25 HP!\n";
                                playerHealth = playerHealth + 25;
                                smallPotionHeld = smallPotionHeld - 1;
                                break;
                            }
                        //Med Potion
                        case 2:
                            if (medPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (medPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 50 HP!\n";
                                playerHealth = playerHealth + 50;
                                medPotionHeld = medPotionHeld - 1;
                                break;
                            }
                        //Large Potion
                        case 3:
                            if (largePotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (largePotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 75 HP!\n";
                                playerHealth = playerHealth + 75;
                                largePotionHeld = largePotionHeld - 1;
                                break;
                            }
                        case 4:
                            if (smallBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (smallBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 25 damage!\n";
                                enemyHealth = enemyHealth - 25;
                                break;
                            }
                        case 5:
                            if (medBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (medBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 50 damage!\n";
                                enemyHealth = enemyHealth - 50;
                                break;
                            }
                        case 6:
                            if (largeBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (largeBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 75 damage!\n";
                                enemyHealth = enemyHealth - 75;
                                break;
                            }
                     }
                playerBlock = false;
                break;

            //Run
            case 5:
                cout << "\nYou cannot escape from your fate!\n";
                playerBlock = false;
                break;
        }

        if (enemyHealth == 0)
        {
            cout << "\nAs he goes in for a strike, you dodge it and smack him in the face with your hilt.\n"
                 << "While stunned, you go in for a finisher and skewer him through the heart, ending the battle.\n"
                 << "You gained 250 coins.\n";
            playerGold = playerGold + enemyGold;
            break;
        }
    }

    //Story Part 16
    storyPart16();

    //Shop
    shopEnter();

    //Story Part 17
    storyPart17();

    enemyHealth = 40;
    enemyDamage = 25;
    enemyArmor = 25;
    enemyGold = 500;

    while (enemyHealth > 0)
    {
        int playerBattleChoice;
        int playerItemChoice;

        //In case the when loop fails
        if (enemyHealth < 0)
        {
            break;
        }

        cout << "\n\nYour stats:\n"
             << "Health: "
             << playerHealth
             << "\nDamage: "
             << playerDamage
             << "\nArmor: "
             << playerArmor
             << "\n\nYou ready up for a strike.\n"
             << "\nType your choice.\n"
             << "1. Attack\n"
             << "2. Block\n"
             << "3. Inspect Enemy\n"
             << "4. Items\n"
             << "5. Run\n"
             << "Choice: ";
        cin >> playerBattleChoice;

        //Player choice
        switch (playerBattleChoice)
        {
            //Attack
            case 1:
                cout << "\nYou swing your blade at the enemy.\n"
                     << "You dealt "
                     << (playerDamage - enemyArmor)
                     << " damage!";
                playerBlock = false;
                enemyHealth = enemyHealth - (playerDamage - enemyArmor);
                break;

            //Defend
            case 2:
                cout << "\nYou raise your sword to anticipate the enemy's attack.\n"
                     << "Your defense increased to "
                     << blockingMove;
                playerBlock = true;
                break;

            //Inspect
            case 3:
                cout << "\nYou inspect your foe.\n"
                     << "Health: "
                     << enemyHealth
                     << "\nDamage: "
                     << enemyDamage
                     << "\nArmor: "
                     << enemyArmor
                     << "\nGold held: "
                     << enemyGold;
                playerBlock = false;
                break;

            //Items
            case 4:
                cout << "\nYou reach into your pouch to use an item!\n"
                     << "Items held: \n"
                     << "1. Small potions: "
                     << smallPotionHeld
                     << "\n2. Medium potions:  "
                     << medPotionHeld
                     << "\n3. Large potions: "
                     << largePotionHeld
                     << "\n4. Small bombs: "
                     << smallBombHeld
                     << "\n5. Medium bombs: "
                     << medBombHeld
                     << "\n6. Large bombs: "
                     << largeBombHeld
                     <<endl;
                     cin >> playerItemChoice;

                     switch (playerItemChoice)
                     {
                         //Small potion
                        case 1:
                            if (smallPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (smallPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 25 HP!\n";
                                playerHealth = playerHealth + 25;
                                smallPotionHeld = smallPotionHeld - 1;
                                break;
                            }
                        //Med Potion
                        case 2:
                            if (medPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (medPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 50 HP!\n";
                                playerHealth = playerHealth + 50;
                                medPotionHeld = medPotionHeld - 1;
                                break;
                            }
                        //Large Potion
                        case 3:
                            if (largePotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (largePotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 75 HP!\n";
                                playerHealth = playerHealth + 75;
                                largePotionHeld = largePotionHeld - 1;
                                break;
                            }
                        case 4:
                            if (smallBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (smallBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 25 damage!\n";
                                enemyHealth = enemyHealth - 25;
                                break;
                            }
                        case 5:
                            if (medBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (medBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 50 damage!\n";
                                enemyHealth = enemyHealth - 50;
                                break;
                            }
                        case 6:
                            if (largeBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (largeBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 75 damage!\n";
                                enemyHealth = enemyHealth - 75;
                                break;
                            }
                     }
                playerBlock = false;
                break;

            //Run
            case 5:
                cout << "\nYou cannot escape from your fate!";
                playerBlock = false;
                break;
        }

        if (enemyHealth == 0)
        {
            cout << "\nYou knock his spear away and cut off his left arm.\n"
                 << "He falls on one knee, giving you the perfect position to remove his head.\n"
                 << "You gained 500 coins.\n";
            playerGold = playerGold + enemyGold;
            break;
        }
    }

    //Story Part 18
    storyPart18();

    enemyHealth = 15;
    enemyDamage = 60;
    enemyArmor = 0;
    enemyGold = 500;

    while (enemyHealth > 0)
    {
        int playerBattleChoice;
        int playerItemChoice;

        //In case the when loop fails
        if (enemyHealth < 0)
        {
            break;
        }

        cout << "\n\nYour stats:\n"
             << "Health: "
             << playerHealth
             << "\nDamage: "
             << playerDamage
             << "\nArmor: "
             << playerArmor
             << "\n\nYou ready up for a strike.\n"
             << "\nType your choice.\n"
             << "1. Attack\n"
             << "2. Block\n"
             << "3. Inspect Enemy\n"
             << "4. Items\n"
             << "5. Run\n"
             << "Choice: ";
        cin >> playerBattleChoice;

        //Player choice
        switch (playerBattleChoice)
        {
            //Attack
            case 1:
                cout << "\nYou swing your blade at the enemy.\n"
                     << "You dealt "
                     << (playerDamage - enemyArmor)
                     << " damage!";
                playerBlock = false;
                enemyHealth = enemyHealth - (playerDamage - enemyArmor);
                break;

            //Defend
            case 2:
                cout << "\nYou raise your sword to anticipate the enemy's attack.\n"
                     << "Your defense increased to "
                     << blockingMove;
                playerBlock = true;
                break;

            //Inspect
            case 3:
                cout << "\nYou inspect your foe.\n"
                     << "Health: "
                     << enemyHealth
                     << "\nDamage: "
                     << enemyDamage
                     << "\nArmor: "
                     << enemyArmor
                     << "\nGold held: "
                     << enemyGold;
                playerBlock = false;
                break;

            //Items
            case 4:
                cout << "\nYou reach into your pouch to use an item!\n"
                     << "Items held: \n"
                     << "1. Small potions: "
                     << smallPotionHeld
                     << "\n2. Medium potions:  "
                     << medPotionHeld
                     << "\n3. Large potions: "
                     << largePotionHeld
                     << "\n4. Small bombs: "
                     << smallBombHeld
                     << "\n5. Medium bombs: "
                     << medBombHeld
                     << "\n6. Large bombs: "
                     << largeBombHeld
                     <<endl;
                     cin >> playerItemChoice;

                     switch (playerItemChoice)
                     {
                         //Small potion
                        case 1:
                            if (smallPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (smallPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 25 HP!\n";
                                playerHealth = playerHealth + 25;
                                smallPotionHeld = smallPotionHeld - 1;
                                break;
                            }
                        //Med Potion
                        case 2:
                            if (medPotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (medPotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 50 HP!\n";
                                playerHealth = playerHealth + 50;
                                medPotionHeld = medPotionHeld - 1;
                                break;
                            }
                        //Large Potion
                        case 3:
                            if (largePotionHeld <= 0)
                            {
                                cout << "\nYou have no potions!\n";
                                break;
                            }
                            if (largePotionHeld > 0)
                            {
                                cout << "\nYou used a potion and healed 75 HP!\n";
                                playerHealth = playerHealth + 75;
                                largePotionHeld = largePotionHeld - 1;
                                break;
                            }
                        case 4:
                            if (smallBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (smallBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 25 damage!\n";
                                enemyHealth = enemyHealth - 25;
                                break;
                            }
                        case 5:
                            if (medBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (medBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 50 damage!\n";
                                enemyHealth = enemyHealth - 50;
                                break;
                            }
                        case 6:
                            if (largeBombHeld <= 0)
                            {
                                cout << "\nYou have no bombs!\n";
                                break;
                            }
                            if (largeBombHeld > 0)
                            {
                                cout << "\nYou threw a bomb and dealt 75 damage!\n";
                                enemyHealth = enemyHealth - 75;
                                break;
                            }
                     }
                playerBlock = false;
                break;

            //Run
            case 5:
                cout << "\nYou cannot escape from your fate!";
                playerBlock = false;
                break;
        }

        if (enemyHealth == 0)
        {
            cout << "\nYou took his head off his shoulders in one swing.\n"
                 << "The tyrant is no more, the has been saved.\n"
                 << "You gained 500 coins.\n";
            playerGold = playerGold + enemyGold;
            break;
        }
    }

    //Story Final
    storyFinal();
}

//Makes sure the game doesn't go too fast
void gameContinueCheck()
{
    string gameContinue;

    cout << "\n\nType N to continue\n";
    cin >> gameContinue;
    if (gameContinue == "N" or "n")
    {
        return;
    }
}

//Shop
void shopEnter()
{
    string shopEnterCheck;
    int shopChoice;

    cout << "\n\nType Y to enter shop\n";
    cin >> shopEnterCheck;
    if (shopEnterCheck == "Y" or "y")
    {
        playerShop = true;
    }

    while (playerShop == true)
    {
        cout << "What would you like to buy?\n"
             << "Your current gold held: "
             << playerGold

             << "\n\nWeapons:"

             //Iron Sword
             << "\n1. "
             << ironSword.name
             << " Damage: "
             << ironSword.damage
             << " Defense: "
             << ironSword.defense
             << " Cost: "
             << ironSword.price

             //Steel Sword
             << "\n2. "
             << steelSword.name
             << " Damage: "
             << steelSword.damage
             << " Defense: "
             << steelSword.defense
             << " Cost: "
             << steelSword.price

             //Gold Sword
             << "\n3. "
             << goldSword.name
             << " Damage: "
             << goldSword.damage
             << " Defense: "
             << goldSword.defense
             << " Cost: "
             << goldSword.price

             //Enchanted Sword
             << "\n4. "
             << enchantedSword.name
             << " Damage: "
             << enchantedSword.damage
             << " Defense: "
             << enchantedSword.defense
             << " Cost: "
             << enchantedSword.price

             //Black Sword
             << "\n5. "
             << blackSword.name
             << " Damage: "
             << blackSword.damage
             << " Defense: "
             << blackSword.defense
             << " Cost: "
             << blackSword.price

             //Rune Blade
             << "\n6. "
             << runeBlade.name
             << " Damage: "
             << runeBlade.damage
             << " Defense: "
             << runeBlade.defense
             << " Cost: "
             << runeBlade.price


             //Armor
             << "\n\nArmor:"

             //Leather Armor
             << "\n7. "
             << leatherArmor.name
             << " Damage: "
             << leatherArmor.damage
             << " Defense: "
             << leatherArmor.defense
             << " Cost: "
             << leatherArmor.price

             //Iron Mesh
             << "\n8. "
             << ironMesh.name
             << " Damage: "
             << ironMesh.damage
             << " Defense: "
             << ironMesh.defense
             << " Cost: "
             << ironMesh.price

             //Plate Armor
             << "\n9. "
             << plateArmor.name
             << " Damage: "
             << plateArmor.damage
             << " Defense: "
             << plateArmor.defense
             << " Cost: "
             << plateArmor.price

             //Holy Armor
             << "\n10. "
             << holyArmor.name
             << " Damage: "
             << holyArmor.damage
             << " Defense: "
             << holyArmor.defense
             << " Cost: "
             << holyArmor.price

             //Dark Armor
             << "\n11. "
             << darkArmor.name
             << " Damage: "
             << darkArmor.damage
             << " Defense: "
             << darkArmor.defense
             << " Cost: "
             << darkArmor.price

             //Hero Armor
             << "\n12. "
             << heroArmor.name
             << " Damage: "
             << heroArmor.damage
             << " Defense: "
             << heroArmor.defense
             << " Cost: "
             << heroArmor.price

             //Items
             << "\n\nItems: "

             //Small Potion
             << "\n13. Heals 25 HP Cost: 15"

             //Med Potion
             << "\n14. Heals 50 HP Cost: 30"

             //Large Potion
             << "\n15. Heals 75 HP Cost: 45"

             //Small Bomb
             << "\n16. Deals 25 Damage Through Armor Cost: 25"

             //Medium Bomb
             << "\n17. Deals 50 Damage Through Armor Cost: 50"

             //Large Bomb
             << "\n18. Deals 75 Damage Through Armor Cost: 75"

             //Leave Shop
             << "\n19. Leave Shop.\n";

             cin >> shopChoice;

             switch (shopChoice)
             {
                case 1:
                    if (playerGold < ironSword.price)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > ironSword.price)
                    {
                        cout << "\nThank you for your purchase!";
                        playerDamage = ironSword.damage;
                        playerGold = playerGold - ironSword.price;
                        gameContinueCheck();
                        break;
                    }
                case 2:
                    if (playerGold < steelSword.price)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > steelSword.price)
                    {
                        cout << "\nThank you for your purchase!";
                        playerDamage = steelSword.damage;
                        playerGold = playerGold - steelSword.price;
                        gameContinueCheck();
                        break;
                    }
                case 3:
                    if (playerGold < goldSword.price)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > goldSword.price)
                    {
                        cout << "\nThank you for your purchase!";
                        playerDamage = goldSword.damage;
                        playerGold = playerGold - goldSword.price;
                        gameContinueCheck();
                        break;
                    }
                case 4:
                    if (playerGold < enchantedSword.price)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > enchantedSword.price)
                    {
                        cout << "\nThank you for your purchase!";
                        playerDamage = enchantedSword.damage;
                        playerGold = playerGold - enchantedSword.price;
                        gameContinueCheck();
                        break;
                    }
                case 5:
                    if (playerGold < blackSword.price)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > blackSword.price)
                    {
                        cout << "\nThank you for your purchase!";
                        playerDamage = blackSword.damage;
                        playerGold = playerGold - blackSword.price;
                        gameContinueCheck();
                        break;
                    }
                case 6:
                    if (playerGold < runeBlade.price)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > runeBlade.price)
                    {
                        cout << "\nThank you for your purchase!";
                        playerDamage = runeBlade.damage;
                        playerGold = playerGold - runeBlade.price;
                        gameContinueCheck();
                        break;
                    }
                case 7:
                    if (playerGold < leatherArmor.price)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > leatherArmor.price)
                    {
                        cout << "\nThank you for your purchase!";
                        playerArmor = leatherArmor.defense;
                        playerGold = playerGold - leatherArmor.price;
                        gameContinueCheck();
                        break;
                    }
                case 8:
                    if (playerGold < ironMesh.price)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > ironMesh.price)
                    {
                        cout << "\nThank you for your purchase!";
                        playerArmor = ironMesh.defense;
                        playerGold = playerGold - ironMesh.price;
                        gameContinueCheck();
                        break;
                    }
                case 9:
                    if (playerGold < plateArmor.price)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > plateArmor.price)
                    {
                        cout << "\nThank you for your purchase!";
                        playerArmor = plateArmor.defense;
                        playerGold = playerGold - plateArmor.price;
                        gameContinueCheck();
                        break;
                    }
                case 10:
                    if (playerGold < holyArmor.price)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > holyArmor.price)
                    {
                        cout << "\nThank you for your purchase!";
                        playerArmor = holyArmor.defense;
                        playerGold = playerGold - holyArmor.price;
                        gameContinueCheck();
                        break;
                    }
                case 11:
                    if (playerGold < darkArmor.price)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > darkArmor.price)
                    {
                        cout << "\nThank you for your purchase!";
                        playerArmor = darkArmor.defense;
                        playerGold = playerGold - darkArmor.price;
                        gameContinueCheck();
                        break;
                    }
                case 12:
                    if (playerGold < heroArmor.price)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > heroArmor.price)
                    {
                        cout << "\nThank you for your purchase!";
                        playerArmor = heroArmor.defense;
                        playerGold = playerGold - heroArmor.price;
                        gameContinueCheck();
                        break;
                    }
                case 13:
                    if (playerGold < 15)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > 15)
                    {
                        cout << "\nThank you for your purchase!";
                        smallPotionHeld = smallPotionHeld + 1;
                        playerGold = playerGold - 15;
                        gameContinueCheck();
                        break;
                    }
                case 14:
                    if (playerGold < 30)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > 30)
                    {
                        cout << "\nThank you for your purchase!";
                        medPotionHeld = medPotionHeld + 1;
                        playerGold = playerGold - 30;
                        gameContinueCheck();
                        break;
                    }
                case 15:
                    if (playerGold < 45)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > 45)
                    {
                        cout << "\nThank you for your purchase!";
                        largePotionHeld = largePotionHeld + 1;
                        playerGold = playerGold - 45;
                        gameContinueCheck();
                        break;
                    }
                case 16:
                    if (playerGold < 25)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > 25)
                    {
                        cout << "\nThank you for your purchases!";
                        smallBombHeld = smallBombHeld + 1;
                        playerGold = playerGold - 25;
                        gameContinueCheck();
                        break;
                    }
                case 17:
                    if (playerGold < 50)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > 50)
                    {
                        cout << "\nThank you for your purchase!";
                        medBombHeld = medBombHeld + 1;
                        playerGold = playerGold - 50;
                        gameContinueCheck();
                        break;
                    }
                case 18:
                    if (playerGold < 75)
                    {
                        cout << "\nYou don't have enough money!";
                        gameContinueCheck();
                        break;
                    }
                    if (playerGold > 75)
                    {
                        cout << "\nThank you for your purchase!";
                        largeBombHeld = largeBombHeld + 1;
                        playerGold = playerGold - 75;
                        gameContinueCheck();
                        break;
                    }
                case 19:
                    cout << "\nYou decided to leave the shop";
                    playerShop = false;
                    gameContinueCheck();
                    break;
             }

    }

}

//Game Over
void gameOver()
{
    cout << "\n\nYou welt over in pain and fall to the ground\n"
         << "As the light fade from your body, thunderclouds form as the hero disappears from this world.\n"
         << "The world has fallen into the dark ages as men fight one another in pointless wars, destroying each other.\n"
         << "This is the end, maybe another hero will take up the sword and continue the fight against the darkness.\n"
         << "\nGame Over\n\n";

    abort();
}

//Game introduction
void gameIntro()
{
    cout << "\n\nWelcome to Final Blade\n"
         << "If your health reaches 0, it will be game over\n"
         << "Player stats are increased through gear\n"
         << "Gear can be bought through towns\n"
         << "Gold drops from beating enemies and chests"
         << "The journey will be hard, but if you persevere, you'll reach the end\n"
         << "May fortune smile upon you on your path\n";

    gameContinueCheck();
}


//Story part 1
void storyPart1()
{
    cout << "\n\nYou awaken to the sounds of blades cashing.\n"
         << "A man in full knight armor, covered in blood, grabs you by the arm.\n"
         << "He yells at you to get up on your feet and focus on fighting the enemy rather than staying on the ground.\n"
         << "The knight mounts a horse and rides into the most intense part of the battle.\n"
         << "A roaring yell comes from your side as you look for your sword.\n"
         << "Barely dodging a charge from the spearman, you quickly grab a broken sword nearby.\n"
         << "You reposition yourself and prepare for battle.\n";

    gameContinueCheck();
}

//Story part 2
void storyPart2()
{
    cout << "\n\nThe battlefield stands silent with only the cries of ravens above and the howls of wolves in the distance.\n"
         << "As rain begins to fall, the rainclouds part and a beam of light shines upon you.\n"
         << "A voice fills your head, telling you that must defeat the tyrant king of Gallan.\n"
         << "As the light fades, darkness rises and the skies are eclipsed with storm clouds.\n"
         << "You cover yourself in a cloak and head towards the town of Blyavika.\n";

    gameContinueCheck();
}

//Story part 3
void storyPart3()
{
    cout << "\n\nYou enter the war ravaged town of Blyavika.\n"
         << "There are nearly no one in the streets and most shops seem closed.\n"
         << "The only shop open seems to be a merchant's store.\n"
         << "Do you wish to enter?\n";
}

//Story part 4
void storyPart4()
{
    cout << "\n\nYou leave the town and head North towards the duchy of Hellan.\n"
         << "The merchant from the town warned you that North of the village is filled with desperate scavengers.\n"
         << "There was a massive battle there two weeks ago so it isn't too unexpected.\n"
         << "Hopefully the path ahead isn't too troublesome...\n";

    gameContinueCheck();
}

//Story part 5
void storyPart5()
{
    cout << "\n\nA bandit comes running towards you without thought!\n"
         << "You prepare for battle...\n";

    gameContinueCheck();
}

//Story part 6
void storyPart6()
{
    cout << "\n\nJust when you thought you were safe, another bandit jumps you from behind.\n"
         << "You narrowly dodged the attack and repositioned yourself";

    gameContinueCheck();
}

//Story part 7
void storyPart7()
{
    cout << "\n\nYou make it to the duchy of Hellan without issue.\n"
         << "The gates was closed so you had to slip through a crack nearby.\n"
         << "Although a major security issue, it didn't really matter much at this moment.\n"
         << "Do you wish to shop?\n";
}

//Story part 8
void storyPart8()
{
    cout << "\n\nBells are rung and the common folk around you run in panic.\n"
         << "The knights scramble towards the Southern gate.\n"
         << "You got a hold of a woman and asked her whats happening.\n"
         << "She exclaims that the undead are amassing at the Southern gate.\n"
         << "You make your way there...\n";

    gameContinueCheck();
}

//Story part 9
void storyPart9()
{
    cout << "\n\nYou arrive to the Southern gate to find an army of undead attacking the guards.\n"
         << "The armor looks similar to your allies back from the battle East of Blyavika.\n"
         << "An undead knight attacks you from behind.\n"
         << "You avoided the attack and ready up.\n";

    gameContinueCheck();
}

//Story part 10
void storyPart10()
{
    cout << "\n\nIn the distance, you can make out the tyrant of Hellan himself, gleaming on top of his throne.\n"
         << "You spot his three royal guards fighting alone, making it easier to fight them one on one.\n"
         << "Would you like to go to the field merchant?\n";
}

//Story part 11
void storyPart11()
{
    cout << "\n\nYou head towards the weakest of the guards, the Night Phantom.\n"
         << "You sneaked up on him and managed to get a good hit on hits back.\n"
         << "He turns around to show his white expressionless mask.\n"
         << "The Night Phantom raises his axe and prepares to strike.\n";

    gameContinueCheck();
}

//Story part 12
void storyPart12()
{
    cout << "\n\nWith one guard down, two more to go...\n"
         << "Do you wish to visit the shop.\n";
}

//Story part 13
void storyPart13()
{
    cout << "\n\nYou head towards the second guard, the Blade of Hellan.\n"
         << "You arrive to find him already waiting for you.\n"
         << "He raises his blacken greatsword and prepares to strike.\n";

    gameContinueCheck();
}

//Story part 14
void storyPart14()
{
    cout << "\n\nWith the second guard down, only one awaits you.\n"
         << "Do you wish to go to the shop?\n";
}

//Story part 15
void storyPart15()
{
    cout << "\n\nYou head straight towards the tyrant of Hellan himself.\n"
         << "You find the tyrant on his throne and the last guard in front.\n"
         << "You charge in to get the first blow.\n";

    gameContinueCheck();
}

//Story part 16
void storyPart16()
{
    cout << "\n\nWith the last guard down, the tyrant applauds you and asks if you are ready for the final duel.\n"
         << "Do you wish to go to the shop? This is your last chance.\n";
}

//Story part 17
void storyPart17()
{
    cout << "\n\nThe tyrant steps off his throne and grabs his spear.\n"
         << "Time for the ultimate battle.\n";

    gameContinueCheck();
}

//Story part 18
void storyPart18()
{
    cout << "\n\nBefore you can execute him, he deflects your blade with his golden sword.\n"
         << "Time to finish this once and for all...\n";

    gameContinueCheck();
}

//Story Finish
void storyFinal()
{
    cout << "\\With the tyrant of Hellan slain, the world is once again in peace.\n"
         << "With the threat gone, the hero vanished into the horizon...\n"
         << "The End";
}
