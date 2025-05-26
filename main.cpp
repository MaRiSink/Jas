#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <fstream>


using namespace std;



void death_prisoner()
{
    cout << endl << endl << endl;
    cout << "  So you're dead... You don't exist anymore. Wait a second..." << endl;
    cout << " You see a light and walk towards it, adjusting your prison uniform." << endl;
    cout << " Turning around, you see a huge shell casing rolling towards you, " << endl;
    cout << "which is clearly a good motivator to go faster. Then even faster." << endl;
    cout << " And now you're running, after which you find yourself in a white corridor, " << endl;
    cout << "after which you see something that looks like a polish uzhond. " << endl;
    cout << " You take a ticket and have to wait..." << endl; //loading

}

void death_old_age() //domohozajka; pisatel; wrach-detektiwnyj
{
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << " And so Jas, surrounded by loving people, left this world. " << endl;
    cout << " You feel that your joints no longer hurt, " << endl;
    cout << " that arthritis is as if it never happened and you are twenty years old again." << endl;
    cout << " Two little angels meet you and lead you to the white light." << endl;
    cout << " Without hurrying, you can look around, admire the beauty of these places." << endl;
    cout << " After which you are led to the building of the polish uzhond." << endl;
    cout << " Since you are a pensioner and have lived a good, correct life, you are allowed to skip the line. " << endl;
    cout << " Now your task is to go and see what will happen next" << endl;

}

void death_pretty_kitties()
{
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "  Nothing, then fear. You see three tigers in front of you, carrying you on a throne. " << endl;
    cout << " At first you think it's a hallucination. You're young, beautiful, and it couldn't be like this. " << endl;
    cout << " You're brought to a snow-white building of the uzhond, where you stand and wait in line." << endl;
    cout << " Then you hand over the documents that appeared out of nowhere and they stamp them with the word (Rebirth)" << endl;

}

void death_arabic_sheikh()
{
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "  Having fallen asleep peacefully, you went to Allah. At least that was how it was planned." << endl;
    cout << " But when you opened your eyes, you were being driven by an unfamiliar driver in your Lamborghini, some model. " << endl;
    cout << " You were brought to a large building and left there, " << endl;
    cout << " after which you were dropped off and gently asked to wait in the Polish uzhond." << endl;
    cout << " Soon it was your turn and you were given a ticket to the sanatoriums of Allah" << endl;

}

void death_spaceman()
{
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "  It seemed like you were dead, but you saw that you were in a rocket." << endl;
    cout << " It was carrying you somewhere far away, leaving the earth far behind. " << endl;
    cout << " Unexpectedly, the landing, which should have been sharp, turned out to be gentle, like a jump up a mountain of pillows." << endl;
    cout << " At the exit, there was only one building waiting for you. HE… Uzhond. Well." << endl;
    cout << " You had to wait, and then it was your turn and you received a death certificate and a pass to heaven. " << endl;
    cout << " Welcome to a world of peace and light, a world where you will continue to be a hero to many." << endl;
}

void death_uzhond()
{
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "  So… You seem to have come to work leisurely. But what is this? " << endl;
    cout << " Why should you sit and wait for your turn?" << endl;
    cout << " Knowing your colleagues, you understand that it will take forever. " << endl;
    cout << endl;
    cout << " Tap to skip time" << endl;

    cout << " ETERNAL WAITING" << endl; //loading
}

void death_librian()
{
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "  Opening your eyes, you feel like you've fallen asleep in the library. " << endl;
    cout << " Getting up, you frame your beloved possessions at your disposal, then step inside the book corridors and go get a coffee." << endl;
    cout << " But there's one problem... Everywhere are -one second break books-; -one second break- books and more books." << endl;
    cout << " Finally, you reach your desk, where lies... OH MIRACLE!" << endl;
    cout << "  Another book.  " << endl;
    cout << " It says 'Your Death.' When you open it, you were sucked inside. " << endl;
    cout << " You find yourself in a uzhond, wait in line, and then you get it: a ticket to heaven." << endl;
    cout << " A creaky voice says: " << endl;
    cout << "    - Go straight ahead and enter this corridor. That's where you need to go." << endl;
    cout << " Finally, silence…." << endl;
}

void death_historical()
{
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "  Darkness..." << endl;
    cout << " The smell of earth..." << endl;
    cout << " Then a harsh light and..." << endl;
    cout << " Moles?" << endl;
    cout << " No, seriously. You were riding on a mole while other moles crawled along holding your recorder and a piece of paper." << endl;
    cout << endl;
    cout << " So, this Uber Business Class taxi finally got you somewhere..." << endl;
    cout << " The white building of the office where you met your history group. " << endl;
    cout << " Then the accounting department..." << endl;
    cout << " A death certificate and direction to where you'd better go." << endl;
}

void death_0_kidneys()
{
    cout << "  Drying... Strong..." << endl;
    cout << " You woke up in the middle of the desert and it seemed like you had been wandering for some time. " << endl;
    cout << " Tired and clearly irritated. Soon the withdrawal began. " << endl;
    cout << " Strong and creating a sour taste of aggression in your mouth. " << endl;
    cout << " You wanted to drink, but at the same time it seemed like you couldn’t sober up." << endl;
    cout << " Here it is. A building in the middle of the desert. Uzhond. " << endl;
    cout << " You crawled up the stairs, but then a guard stopped you, who said in a deep voice:" << endl;
    cout << "     -You have no right to enter a government institution while drunk." << endl;
    cout << " You tried to object, but they wouldn't let you in. Drunk, you were forced to wander the desert for eternity... " << endl;
    cout << " Without a goal... Without alcohol, but forever drunk... Without kidneys..." << endl;
    cout << endl;
    cout << "   GAME OVER :(  " << endl;
}

void bootle()
{
    HANDLE std_out = GetStdHandle(STD_OUTPUT_HANDLE);

    srand(time(NULL));
    int random = rand() % 2;

    if (random == 0)
    {
        int bottleofbear[10][13] =
        {
            { 119, 119, 119, 119, 119, 60, 60, 119, 119, 119, 119, 119, 119 },
            { 119, 119, 119, 119, 119, 65, 65, 119, 119, 119, 119, 119, 119 },
            { 119, 119, 119, 119, 119, 65, 65, 119, 119, 119, 119, 119, 119 },
            { 119, 119, 119, 65, 65, 65, 65,  65, 65, 119, 119, 119, 119 },
            { 119, 119, 119, 46, 65, 65, 65,  65, 46, 119, 119, 119, 119 },
            { 119, 119, 119, 46, 46, 46,  46, 46, 46, 119, 119, 119, 119 },
            { 119, 119, 119, 65, 0, 46,  46, 0, 65, 119, 119, 119, 119 },
            { 119, 119, 119, 65, 65, 46,  46, 65, 65, 119, 119, 119, 119 },
            { 119, 119, 119, 65, 65, 65,  65, 65, 65, 119, 119, 119, 119 },
            { 119, 119, 119, 65, 65, 65,  65, 65, 65, 119, 119, 119, 119 }
        };

        for (int i=0; i<10; i++)
        {
            for (int j=0; j<13; j++)
            {
                SetConsoleTextAttribute(std_out, bottleofbear[i][j]);
                cout << " ";
            }
            cout << endl;
        }
        cout <<endl << endl << endl;

        int bear[6][19] =
        {
            {0,65,65,65,0,65,65,65,0,0,65,0,0,65,65,0,0,0,0},
            {0,65,0,65,0,65,0,0,0,65,0,65,0,65,0,65,0,0,0},
            {0,65,65,0,0,65,65,65,0,65,65,65,0,65,65,0,0,0,0},
            {0,65,0,65,0,65,0,0,0,65,0,65,0,65,0,65,0,0,0},
            {0,65,0,65,0,65,0,0,0,65,0,65,0,65,0,0,65,0,0},
            {0,65,65,0,0,65,65,65,0,65,0,65,0,65,0,0,65,0,0},

        };

        for (int i=0; i<6; i++)
        {
            for (int j=0; j<19; j++)
            {
                SetConsoleTextAttribute(std_out, bear[i][j]);
                cout << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << " ETERNAL WAITING " << endl;
    }

    SetConsoleTextAttribute(std_out, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
    cout << endl << "Press any key to continue";
    getch();
}




void death_dantist()
{
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "  Opening your eyes, you experience mixed feelings... there is a huge set of false teeth with eyes next to you. " << endl;
    cout << " It is not aggressive, but what the hell is going on?? " << endl;
    cout << " Then, after a loud sound, you see a gypsy camp. " << endl;
    cout << " You are suddenly lifted up together with this jaw and carried away somewhere with loud exclamations." << endl;
    cout << " Eh... As Alexander Sergeevich Pushkin wrote" << endl;
    cout << "'Gypsies roam noisily in crowds across Bessarabia" << endl;
    cout << " Today they spend the night in tattered tents above the river'" << endl;
    cout << "   (Translation)   " << endl;
    cout << " But this time no one spent the night. You (unlike the false jaw) were suddenly laid down. " << endl;
    cout << "  You realized that you were near the uzhond. Since there was nothing around, you decided to go in anyway." << endl;
    cout << " You were pleased with the sterility as in your favorite dentistry." << endl;
    cout << " A small queue is also a common sight. After that, you got your ticket to heaven" << endl;
}


void draw(int tabload[3][20])
{
    HANDLE std_out = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD coord;

    //system("cls");
    coord.X = 0;
    coord.Y = 0;
    SetConsoleCursorPosition(std_out, coord);

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<20; j++)
        {
            SetConsoleTextAttribute(std_out, tabload[i][j]);
            cout << " ";
        }
        cout << endl;
    }

    SetConsoleTextAttribute(std_out, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
}


void loading()
{
    int pos = 1;            // Starting position
    int tabload[3][20] =
    {
        {51, 51, 51, 51, 51, 51, 51, 51, 51,51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51 },
        {51, 68, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 119, 51},
        {51, 51, 51, 51, 51, 51, 51, 51, 51,51, 51, 51, 51, 51, 51, 51, 51, 51, 51, 51 }
    };

    // Initial screen
    draw(tabload);
    ofstream IHateLoadings ("LitteOne.txt");

    for (;;)
    {
        char ch = getch();

        // Exit
        if (27 == ch)
        {
         IHateLoadings << endl << "Exit";
            break;
        }

        // Move right (convert input to uppercase)
        if ('D' == toupper(ch))
        {
            if (pos >= 18)
                continue;
            tabload[1][pos] = 119;
            pos++;
            tabload[1][pos] = 68;
            IHateLoadings << 'D' << ' ';
        }

        // Move left
        if ('A' == toupper(ch))
        {
            if (pos <= 1)
                continue;
            tabload[1][pos] = 119;
            pos--;
            tabload[1][pos] = 68;
            IHateLoadings << 'A' << ' ';
        }

        draw(tabload);
    }
}


void drawmap(int tabmap[10][10])
{

    HANDLE std_out = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD coord;

    coord.X = 0;
    coord.Y = 0;
    SetConsoleCursorPosition(std_out, coord);


    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            SetConsoleTextAttribute(std_out, tabmap[i][j]);
            cout << " ";
        }
        cout << endl;
    }

    SetConsoleTextAttribute(std_out, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED);
}


void mapp()
{
    int posX = 1;
    int posY = 8;           // Starting position
    int tabmap[10][10] =
    {
        {51, 51, 51, 51, 119, 119, 51, 51, 51, 51 },
        {51, 119, 119, 119, 119, 119, 119, 119, 119, 51},
        {51, 119, 119, 119, 119, 119, 119, 119, 119, 51},
        {51, 119, 119, 119, 119, 119, 119, 119, 119, 51},
        {51, 119, 119, 119, 119, 119, 119, 119, 119, 51},
        {51, 119, 119, 119, 119, 119, 119, 119, 119, 51},
        {51, 119, 119, 119, 119, 119, 119, 119, 119, 51},
        {51, 119, 119, 119, 119, 119, 119, 119, 119, 51},
        {51, 68, 119, 119, 119, 119, 119, 119, 119, 51},
        {51, 51, 51, 51, 51, 51, 51, 51, 51, 51 }
    };

    ofstream moveitmoveit ("BigOne.txt");

    // Initial screen
    drawmap(tabmap);

    for (;;)
    {
        char ch = getch();

        // Exit
        if (27 == ch)
        {
            moveitmoveit << endl << "Exit";
            break;
        }

        // Move right (convert input to uppercase)
        if ('D' == toupper(ch))
        {
            if (posX >= 8)
                continue;
            tabmap[posY][posX] = 119;
            posX++;
            tabmap[posY][posX] = 68;
            moveitmoveit << 'D' << ' ';
        }

        // Move left
        if ('A' == toupper(ch))
        {
            if (posX <= 1)
                continue;
            tabmap[posY][posX] = 119;
            posX--;
            tabmap[posY][posX] = 68;
            moveitmoveit << 'A' << ' ';
        }

        // Move up
        if ('W' == toupper(ch))
        {
            if (posY <= 1)
            {
                if ((posX < 4) || (posX > 5))
                    continue;

                if (0 == posY)
                    break;
            }

            tabmap[posY][posX] = 119;
            posY--;
            tabmap[posY][posX] = 68;
            moveitmoveit << 'W' << ' ';
        } // if ('W' == toupper(ch))

        // Move down
        if ('S' == toupper(ch))
        {
            if (posY >= 8 )
                continue;
            tabmap[posY][posX] = 119;
            posY++;
            tabmap[posY][posX] = 68;
            moveitmoveit << 'S' << ' ';
        }

        drawmap(tabmap);
    } // for (;;)
}


int main()
{
    char answer;

    cout << "So..." << endl;
    cout << "You are Jas, aren't you?" << endl;
    cout << "As we know, Yas always dies. That's life. Anything can happen. But where did we end up?" << endl;
    cout << "It all depends on how exactly you died. You had a huge number of opportunities." << endl;
    cout << "So, which of the options did you choose to die? What kind of Jas were you? Write the letter." << endl;
    cout << endl;
    cout << "a) Death in prison" << endl;
    cout << "b) The fate of a housewife, leading to death from old age." << endl;
    cout << "c) Teacher-writer, natural death" << endl;
    cout << "d) Doctor, detective writer, natural death" << endl;
    cout << "e) Death from affection (fear) because of cute cats" << endl;
    cout << "f) Arab sheikh, death from old age" << endl;
    cout << "g) The fate of the astronaut, death on Mars or death by natural causes" << endl;
    cout << "h) Missing employee of the Uzhond" << endl;
    cout << "i) The fate of a librarian, a happy death from old age" << endl;
    cout << "j) The fate of a historian, disappearance and friendship with moles" << endl;
    cout << "k) Famous and unique (better not to repeat this) JAS 0 KIDNEYS" << endl;
    cout << "l) Dentist missing in Turkey" << endl;

    cin >> answer;

    system("cls");

    HANDLE std_out = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;

    ofstream history ("Your end.txt");

    switch (answer)
    {
    case 'a':
        history << "death like a prisoner";
        death_prisoner();
        Sleep(3000);
        cout << " ETERNAL WAITING " << endl;

        coord.X = 20;
        coord.Y = 1;
        SetConsoleCursorPosition(std_out, coord);

        cout << " LOADING... " << endl;
        loading();

        break;

    case 'b':
        history << "death like a old happy man";
        death_old_age();
        Sleep (3000);
        mapp();
        break;

    case 'c':;
        history <<"death like a really old man";
        death_old_age();
        Sleep (3000);
        mapp();;
        break;

    case 'd':
        history << "death like a old happy man";
        death_old_age();
        Sleep (3000);
        mapp();
        break;

    case 'e':
        history << "death from heart attak, but come on, you just love cute kitties too much";
        death_pretty_kitties();
        Sleep (3000);
        mapp();
        break;

    case 'f':
        history << "death like a old gold man";
        death_arabic_sheikh();
        Sleep (3000);
        mapp();
        break;

    case 'g':
        history << "death like a big sigma hero";
        death_spaceman();
        Sleep (3000);
        mapp();
        break;

    case 'h':
        history << "Are you really die?";
        death_uzhond();
        Sleep(3000);
        cout << " ETERNAL WAITING " << endl;

        coord.X = 20;
        coord.Y = 1;
        SetConsoleCursorPosition(std_out, coord);

        cout << " LOADING... " << endl;
        loading();
        break;

    case 'i':
        history << "death, but peace";
        death_librian();
        Sleep(3000);
        mapp();
        break;

    case 'j':
        history << "Take your adventure with the moles";
        death_historical();
        Sleep(3000);
        mapp();
        break;

    case 'k':
        history << "XD" << endl << "I do not envy";
        death_0_kidneys();
        bootle();

        break;

    case 'l':
        history << " Do you like gypsies? Well. Now you will, troll of dentist's world ";
        death_dantist();
        Sleep(3000);
        mapp();
        break;

    default:
        cout << " Try again";
    } // switch (answer)

    system("cls");

    return 0;
}

