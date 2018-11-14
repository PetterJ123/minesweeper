#include "Functions.h"

void CreateMap(int gameMap[], int width, int height){
    
    bool takenSquares[81];
    
    ShuffleMines(gameMap, takenSquares, width, height);
    
    PresentMap(gameMap, takenSquares, width, height);
}

/*UpdateResult UpdatePosition(int map[], bool takenSquares[], int xCoord, int yCoord, int width, int height){
    // TODO Stub for UpdatePosition
}
*/
bool CheckForEnd(int gameMap[], bool takenSquares[], int xCoord, int yCoord){
    int indexPos = Combine(xCoord, yCoord);
    for(int i = 0; i < 81; i++){
        if(indexPos == (takenSquares[i] == -1)){
            std::cout << "You hit a mine\n";
            system("pause");
        }
    }
}

void PresentMap(int gameMap[], bool takenSquares[], int width, int height){
    
    int arraySize = width * height;
    
    for(int i = arraySize - 1; i >= 0; i--){    // Displays the game-map
    
        if(i % 9 == 0){
            std::cout << "\n";
        }

        std::cout << "-";
        std::cout << " ";
    }
    int xCoord, yCoord;
    std::cout << "Choose x and y coordinate (space seperated): ";
    std::cin >> xCoord >> yCoord;

    CheckForEnd(gameMap, takenSquares, xCoord, yCoord);
}

void ShuffleMines(int gameMap[], bool takenSquares[], int width, int height){
    int RandIndex;
    srand(time(NULL));
    int choises = 81;
    for(int i = 0; i < 10; i++){
        RandIndex = rand() % choises;       // Randomizes a index
        choises--;                          // Removes one from the possible places a mine can be placed
       
        gameMap[RandIndex] = -1;            // Puts a mine (-1) in randomized index
        takenSquares[RandIndex] = true;     // Tells if a index contains a mine

        // Output which indexes are mines
        //std::cout << "Mine in gameMap:   " << RandIndex << " " << gameMap[RandIndex] << "\n";
        std::cout << "Mine in boolArray: " << RandIndex << " " << takenSquares[RandIndex] << " (true) \n";
    }
}

int Combine(int x, int y){  // Combines the x- and y coordinates
    int times = 1;
    while(times <= y){
        times *= 10;
    }
    return x*times + y;
}