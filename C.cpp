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

    // Top horizontal line
    for (j = 22; j <= 30; j++)
    {
        Sleep(100);
        gotoxy(j, 2);
        cout << "*";
    }

    // Left vertical line
    for (i = 3; i <= 12; i++)
    {
        Sleep(100);
        gotoxy(21, i);
        cout << "*";
    }

    // Bottom horizontal line
    for (j = 22; j <= 30; j++)
    {
        Sleep(100);
        gotoxy(j, 13);
        cout << "*";
    }

    // Exit message
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    gotoxy(2, 16);
    cout << "Press any key to exit...";

    _getch();
    return 0;
}
