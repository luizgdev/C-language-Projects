#include "headers.h"

void createGame(int sudoku[LIN][COL])
{
    int i, j;

    for (i = 0; i < LIN; i++)
        for (j = 0; j < COL; j++)
            sudoku[i][j] = 0;
}

void initializeGame(int sudoku[LIN][COL])
{
    int i, j;

    for (i = 0; i < LIN; i++)
        for (j = 0; j < COL; j++)
            do
            {
                sudoku[i][j] = RANDOM;
               // showGame(sudoku);
               // printf("\n");
            } while (checkPossibleNumber(sudoku, i, j, sudoku[i][j]) == FALSE);
}

int checkPossibleNumber(int sudoku[LIN][COL], int line, int column, int number)
{
    if (checkLine(sudoku, line, column, number) == TRUE)
    {
        if (checkColumn(sudoku, line, column, number) == TRUE)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int checkLine(int sudoku[LIN][COL], int line, int column, int number)
{
    int j;

    if (column > 0)
    {
        for (j = 0; j < column; j++)
        {
            if (sudoku[line][j] == number)
                return FALSE;
        }
        return TRUE;
    }
    else
    {
        return TRUE;
    }
}

int checkColumn(int sudoku[LIN][COL], int line, int column, int number)
{
    int i;

    if (line > 0)
    {
        for (i = 0; i < line; i++)
        {
            if (sudoku[i][column] == number)
                return FALSE;
        }
        return TRUE;
    }
    else
    {
        return TRUE;
    }
}

void showGame(int sudoku[LIN][COL])
{
    int i, j;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d ", sudoku[i][j]);
        }
        printf("\n");
    }
}
