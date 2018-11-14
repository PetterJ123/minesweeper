#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <string.h>

enum UpdateResult
{

};

void CreateMap(int gameMap[], int width = 9, int height = 9);

UpdateResult UpdatePosition(int gameMap[], bool takenSquares[], int xCoord, int yCoord, int width = 9, int height = 9);

bool CheckForEnd(int gameMap[], bool takenSquares[], int width = 9, int height = 9);

void PresentMap(int gameMap[], bool takenSquares[], int width = 9, int height = 9);

void ShuffleMines(int gameMap[], bool takenSquares[], int width, int height);

int Combine(int x, int y);

#endif // !FUNCTIONS_H