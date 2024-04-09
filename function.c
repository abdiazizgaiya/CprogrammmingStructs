#include <stdio.h>
#include "function.h"

// Function to populate the structure array
void populateMovies(struct Movie *moviesArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Movie %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", moviesArray[i].title);
        printf("Type: ");
        scanf("%s", moviesArray[i].type);
        printf("Starring: ");
        scanf("%s", moviesArray[i].starring);
        printf("Director: ");
        scanf("%s", moviesArray[i].director);
    }
}

// Function to print the structure elements
void printMovies(struct Movie *moviesArray, int arraySize) {
    printf("\nMovie Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Movie %d:\n", i + 1);
        printf("Title: %s\n", moviesArray[i].title);
        printf("Type: %s\n", moviesArray[i].type);
        printf("Starring: %s\n", moviesArray[i].starring);
        printf("Director: %s\n", moviesArray[i].director);
    }
}

