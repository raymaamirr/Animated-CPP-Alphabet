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
    SetConsoleTextAttribute(
        GetStdHandle(STD_OUTPUT_HANDLE), 11);

    // LEFT VERTICAL LINE
    for (i = 2; i <= 14; i++)
    {
        Sleep(80);
        gotoxy(20, i);
        cout << "*";
    }

    // TOP HORIZONTAL LINE
    for (j = 20; j <= 30; j++)
    {
        Sleep(80);
        gotoxy(j, 2);
        cout << "*";
    }

    // MIDDLE HORIZONTAL LINE
    for (j = 20; j <= 28; j++)
    {
        Sleep(80);
        gotoxy(j, 8);
        cout << "*";
    }

    // BOTTOM HORIZONTAL LINE
    for (j = 20; j <= 30; j++)
    {
        Sleep(80);
        gotoxy(j, 14);
        cout << "*";
    }

    // EXIT MESSAGE
    SetConsoleTextAttribute(
        GetStdHandle(STD_OUTPUT_HANDLE), 15);

    gotoxy(2, 17);
    cout << "Press any key to exit...";

    _getch();
    return 0;
}

