#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}

int main()
{
    int i, j;
    system("color 0F");

    // =============== LETTER R ===============
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);

    for (i = 2; i <= 10; i++)
    {
        Sleep(80);
        gotoxy(34, i);
        cout << "*";
    }

    for (j = 35; j <= 39; j++)
    {
        Sleep(80);
        gotoxy(j, 2);
        cout << "*";
    }

    for (i = 3; i <= 5; i++)
    {
        Sleep(80);
        gotoxy(40, i);
        cout << "*";
    }

    for (j = 35; j <= 39; j++)
    {
        Sleep(80);
        gotoxy(j, 6);
        cout << "*";
    }

    for (i = 1; i <= 4; i++)
    {
        Sleep(80);
        gotoxy(35 + i, 6 + i);
        cout << "*";
    }

    // =============== LETTER A ===============
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

    for (i = 0; i <= 4; i++)
    {
        Sleep(80);
        gotoxy(48 - i, 2 + i);
        cout << "*";

        gotoxy(48 + i, 2 + i);
        cout << "*";
    }

    for (i = 6; i <= 10; i++)
    {
        Sleep(80);
        gotoxy(44, i);
        cout << "*";

        gotoxy(52, i);
        cout << "*";
    }

    for (j = 44; j <= 52; j++)
    {
        Sleep(80);
        gotoxy(j, 6);
        cout << "*";
    }

    // =============== LETTER Y ===============
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

    for (i = 0; i <= 4; i++)
    {
        Sleep(80);
        gotoxy(55 + i, 2 + i);
        cout << "*";

        gotoxy(63 - i, 2 + i);
        cout << "*";
    }

    for (i = 6; i <= 10; i++)
    {
        Sleep(80);
        gotoxy(59, i);
        cout << "*";
    }

    // =============== LETTER M ===============
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);

    for (i = 2; i <= 10; i++)
    {
        Sleep(80);
        gotoxy(66, i);
        cout << "*";

        gotoxy(74, i);
        cout << "*";
    }

    for (i = 0; i <= 4; i++)
    {
        Sleep(80);
        gotoxy(66 + i, 2 + i);
        cout << "*";

        gotoxy(74 - i, 2 + i);
        cout << "*";
    }

    // =============== SECOND A ===============
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);

    for (i = 0; i <= 4; i++)
    {
        Sleep(80);
        gotoxy(81 - i, 2 + i);
        cout << "*";

        gotoxy(81 + i, 2 + i);
        cout << "*";
    }

    for (i = 6; i <= 10; i++)
    {
        Sleep(80);
        gotoxy(77, i);
        cout << "*";

        gotoxy(85, i);
        cout << "*";
    }

    for (j = 77; j <= 85; j++)
    {
        Sleep(80);
        gotoxy(j, 6);
        cout << "*";
    }

    // =============== SECOND LINE: LETTER A ===============
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);

    for (i = 0; i <= 4; i++)
    {
        Sleep(80);
        gotoxy(38 - i, 15 + i);
        cout << "*";

        gotoxy(38 + i, 15 + i);
        cout << "*";
    }

    for (i = 19; i <= 23; i++)
    {
        Sleep(80);
        gotoxy(34, i);
        cout << "*";

        gotoxy(42, i);
        cout << "*";
    }

    for (j = 34; j <= 42; j++)
    {
        Sleep(80);
        gotoxy(j, 19);
        cout << "*";
    }

    // =============== SECOND A ===============
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);

    for (i = 0; i <= 4; i++)
    {
        Sleep(80);
        gotoxy(49 - i, 15 + i);
        cout << "*";

        gotoxy(49 + i, 15 + i);
        cout << "*";
    }

    for (i = 19; i <= 23; i++)
    {
        Sleep(80);
        gotoxy(45, i);
        cout << "*";

        gotoxy(53, i);
        cout << "*";
    }

    for (j = 45; j <= 53; j++)
    {
        Sleep(80);
        gotoxy(j, 19);
        cout << "*";
    }

    // =============== LETTER M ===============
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);

    for (i = 15; i <= 23; i++)
    {
        Sleep(80);
        gotoxy(56, i);
        cout << "*";

        gotoxy(64, i);
        cout << "*";
    }

    for (i = 0; i <= 4; i++)
    {
        Sleep(80);
        gotoxy(56 + i, 15 + i);
        cout << "*";

        gotoxy(64 - i, 15 + i);
        cout << "*";
    }

    // =============== LETTER I ===============
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);

    for (j = 67; j <= 73; j++)
    {
        Sleep(80);
        gotoxy(j, 15);
        cout << "*";

        gotoxy(j, 23);
        cout << "*";
    }

    for (i = 16; i <= 22; i++)
    {
        Sleep(80);
        gotoxy(70, i);
        cout << "*";
    }

    // =============== LETTER R ===============
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);

    for (i = 15; i <= 23; i++)
    {
        Sleep(80);
        gotoxy(76, i);
        cout << "*";
    }

    for (j = 77; j <= 81; j++)
    {
        Sleep(80);
        gotoxy(j, 15);
        cout << "*";

        gotoxy(j, 19);
        cout << "*";
    }

    for (i = 16; i <= 18; i++)
    {
        Sleep(80);
        gotoxy(82, i);
        cout << "*";
    }

    for (i = 1; i <= 4; i++)
    {
        Sleep(80);
        gotoxy(76 + i, 19 + i);
        cout << "*";
    }

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    gotoxy(2, 28);
    cout << "Press any key to exit...";

    _getch();
    return 0;
}
