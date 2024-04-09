#include <stdio.h>
#include "function.h"

int main() {
    int arraySize = 12;
    struct Movie moviesArray[arraySize];

    populateMovies(moviesArray, arraySize);

    printMovies(moviesArray, arraySize);

    return 0;
}

