#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct student *s1[3];

    // Allocate memory for each student
    for (int i = 0; i < 3; i++) {
        s1[i] = (struct student *)malloc(sizeof(struct student));
        if (s1[i] == NULL) {
            printf("Memory allocation failed for student %d\n", i + 1);
            return 1;
        }
    }

    // Input details for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter the name of student number %d: ", i + 1);
        scanf("%s", s1[i]->name);

        // Consume any leftover newline character
        while (getchar() != '\n');

        printf("Enter the roll number of student number %d: ", i + 1);
        scanf("%d", &s1[i]->roll);

        printf("Enter the marks of student number %d: ", i + 1);
        scanf("%f", &s1[i]->marks);

        // Consume any leftover newline character
        while (getchar() != '\n');
    }

    // Display details of each student
    printf("\nStudent details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Name: %s\n", s1[i]->name);
        printf("  Roll No.: %d\n", s1[i]->roll);
        printf("  Marks: %.2f\n", s1[i]->marks);
    }

    // Free allocated memory
    for (int i = 0; i < 3; i++) {
        free(s1[i]);
    }

    return 0;
}
