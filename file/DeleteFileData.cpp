#include <stdio.h>

int main() {
   
    const char *filename = "example.txt";
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    fclose(file);

    printf("All data from the file has been deleted.\n");

    return 0;
}
