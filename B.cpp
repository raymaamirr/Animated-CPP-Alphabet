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
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);

    // Vertical line of B
    for (i = 2; i <= 14; i++)
    {
        Sleep(100);
        gotoxy(20, i);
        cout << "*";
    }

    // Top horizontal line
    for (j = 21; j <= 27; j++)
    {
        Sleep(100);
        gotoxy(j, 2);
        cout << "*";
    }

    // Upper right vertical line
    for (i = 3; i <= 7; i++)
    {
        Sleep(100);
        gotoxy(28, i);
        cout << "*";
    }

    // Middle horizontal line
    for (j = 21; j <= 27; j++)
    {
        Sleep(100);
        gotoxy(j, 8);
        cout << "*";
    }

    // Lower right vertical line
    for (i = 9; i <= 13; i++)
    {
        Sleep(100);
        gotoxy(28, i);
        cout << "*";
    }

    // Bottom horizontal line
    for (j = 21; j <= 27; j++)
    {
        Sleep(100);
        gotoxy(j, 14);
        cout << "*";
    }

    // Exit message
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    gotoxy(2, 17);
    cout << "Press any key to exit...";

    _getch();
    return 0;
}
