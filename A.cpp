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

    // Letter A - Left and right diagonal lines
    for (i = 0; i <= 5; i++)
    {
        Sleep(100);
        gotoxy(20 - i, 2 + i);
        cout << "*";

        gotoxy(20 + i, 2 + i);
        cout << "*";
    }

    // Vertical lines
    for (i = 7; i <= 12; i++)
    {
        Sleep(100);
        gotoxy(14, i);
        cout << "*";

        gotoxy(26, i);
        cout << "*";
    }

    // Middle horizontal line
    for (j = 14; j <= 26; j++)
    {
        Sleep(100);
        gotoxy(j, 7);
        cout << "*";
    }

    // Move cursor and display exit message
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    gotoxy(2, 15);
    cout << "Press any key to exit...";

    _getch();
    return 0;
}
