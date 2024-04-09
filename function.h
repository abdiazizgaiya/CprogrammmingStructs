#ifndef FUNCTION_H
#define FUNCTION_H

struct Movie {
    char title[100];
    char type[50];
    char starring[100];
    char director[100];
};

void populateMovies(struct Movie *moviesArray, int arraySize);
void printMovies(struct Movie *moviesArray, int arraySize);

#endif

