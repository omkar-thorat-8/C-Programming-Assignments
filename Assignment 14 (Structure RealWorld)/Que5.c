#include <stdio.h>
#include <string.h>

typedef struct 
{
    char title[100];
    char director[100];
    int releaseYear;
    char genre[50];
    
} Movie;

int AddMovie(Movie* movies, int movieCount);
void DisplayMovies(Movie* movies, int movieCount);

int main() 
{
    Movie movies[50];
    int movieCount = 0;
    int choice = 0;

    while (choice != 3) 
	{
        printf("\nMovie Database Menu:\n");
        printf("1. Add Movie\n");
        printf("2. Display Movies\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        
        scanf("%d", &choice);

        if (choice == 1) 
		{
            movieCount = AddMovie(movies, movieCount);
        } 
		else if (choice == 2) 
		{
            DisplayMovies(movies, movieCount);
        } 
		else if (choice == 3) 
		{
            printf("Exiting program...\n");
        } 
		else 
		{
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

int AddMovie(Movie* movies, int movieCount) 
{
    if (movieCount >= 50) 
	{
        printf("Database is full! Cannot add more movies.\n");
        
        return movieCount;
    }

    printf("Enter movie title: ");
    scanf(" %s", movies[movieCount].title);
    
    printf("Enter director name: ");
    scanf(" %s", movies[movieCount].director);
    
    printf("Enter release year: ");
    scanf("%d", &movies[movieCount].releaseYear);
    
    printf("Enter genre: ");
    scanf(" %s", movies[movieCount].genre);

    printf("Movie added successfully!\n");
    return movieCount + 1;
}

void DisplayMovies(Movie* movies, int movieCount) 
{
    if (movieCount == 0) 
	{
        printf("No movies in the database.\n");
        return;
    }
	int i;
    for (i = 0; i < movieCount; i++) 
	
	{
        printf("\nMovie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Director: %s\n", movies[i].director);
        printf("Release Year: %d\n", movies[i].releaseYear);
        printf("Genre: %s\n", movies[i].genre);
    }
}

