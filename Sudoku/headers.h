#ifndef HEADERS_H_INCLUDED
#define HEADERS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define LIN 9
#define COL 9
#define RANDOM (1 + ((rand()) % 9))
#define TRUE 1
#define FALSE 0

void createGame(int[LIN][COL]);
void initializeGame(int[LIN][COL]);
int checkPossibleNumber(int[LIN][COL], int, int, int);
int checkLine(int[LIN][COL], int, int, int);
int checkColumn(int[LIN][COL], int, int, int);
void showGame(int[LIN][COL]);

#endif // HEADERS_H_INCLUDED