#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float GPA;
};

int main() {
    FILE *file;

    // Write data to a text file
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Failed to open file for writing!\n");
        return 1;
    }

    struct Student s1 = {1, "John", 3.8};
    struct Student s2 = {2, "Ali", 3.5};

    fprintf(file, "%d %s %.1f\n", s1.id, s1.name, s1.GPA);
    fprintf(file, "%d %s %.1f\n", s2.id, s2.name, s2.GPA);
    fclose(file);

    // Read and update data in the text file
    file = fopen("students.txt", "r+");
    if (file == NULL) {
        printf("Failed to open file for updating!\n");
        return 1;
    }

    struct Student s_read;
    int line = 0;

    // Read the first student
    fscanf(file, "%d %s %f", &s_read.id, s_read.name, &s_read.GPA);
    printf("Initial Student Data: ID-%d, Name-%s, GPA-%.1f\n", s_read.id, s_read.name, s_read.GPA);
    line++;

    // Read the second student
    fscanf(file, "%d %s %f", &s_read.id, s_read.name, &s_read.GPA);
    printf("Initial Student Data: ID-%d, Name-%s, GPA-%.1f\n", s_read.id, s_read.name, s_read.GPA);
    line++;

    fclose(file);
    return 0;
}
