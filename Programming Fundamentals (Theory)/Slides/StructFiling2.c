#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float GPA;
};

int main() {
    FILE *file;
    file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Failed to open file for writing!\n");
        return 1;
    }

    struct Student s1 = {1, "John", 3.8};
    fwrite(&s1, sizeof(struct Student), 1, file);
    struct Student s2 = {1, "Ali", 3.5};
    fwrite(&s2, sizeof(struct Student), 1, file);
    fclose(file);

    file = fopen("students.dat", "rb+");
    if (file == NULL) {
        printf("Failed to open file for updating!\n");
        return 1;
    }

    struct Student s_read;

    fseek(file, 0, SEEK_SET);
    fread(&s_read, sizeof(struct Student), 1, file);
    printf("Initial Student Data: ID-%d, Name-%s, GPA-%.1f\n", s_read.id, s_read.name, s_read.GPA);

    // Read the second student
    fread(&s_read, sizeof(struct Student), 1, file);
    printf("Initial Student Data: ID-%d, Name-%s, GPA-%.1f\n", s_read.id, s_read.name, s_read.GPA);

    // Seek and write updated data
    fseek(file, sizeof(struct Student), SEEK_SET);
    struct Student s_update = {1, "Ali", 4.0};
    fwrite(&s_update, sizeof(struct Student), 1, file);

    // Read the updated student
    fseek(file, sizeof(struct Student), SEEK_SET);
    fread(&s_read, sizeof(struct Student), 1, file);
    printf("Updated Student Data: ID-%d, Name-%s, GPA-%.1f\n", s_read.id, s_read.name, s_read.GPA);

    fseek(file, 0, SEEK_SET);
    fread(&s_read, sizeof(struct Student), 1, file);
    printf("Updated Student Data: ID-%d, Name-%s, GPA-%.1f\n", s_read.id, s_read.name, s_read.GPA);

    fclose(file);
    return 0;
}
