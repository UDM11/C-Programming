#include <stdio.h>
struct Movie {
    char title[100];
    float rating;
    char director[50];
};
int main() {
    struct Movie movies[5];
    printf("Enter details of 5 movies:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nMovie %d:\n", i + 1);
        printf("Enter title: ");
        getchar(); 
        fgets(movies[i].title, sizeof(movies[i].title), stdin);
        printf("Enter rating (out of 10): ");
        scanf("%f", &movies[i].rating);
        printf("Enter director: ");
        getchar();  
        fgets(movies[i].director, sizeof(movies[i].director), stdin);
    }
    printf("\nMovies Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nMovie %d:\n", i + 1);
        printf("Title: %s", movies[i].title);
        printf("Rating: %.1f/10\n", movies[i].rating);
        printf("Director: %s", movies[i].director);
    }
    return 0;
}

