#include "functions.c"

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int sudoku[LIN][COL];

    createGame(sudoku);

    initializeGame(sudoku);

    showGame(sudoku);

    return 0;
}