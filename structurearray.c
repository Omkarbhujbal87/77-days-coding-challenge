#include <stdio.h>

struct student {
    int roll;              // Roll number
    char name[20];         // Name of the student
    float marks[5];        // Array of marks for 5 subjects
};

int main() {
    struct student s[3]; // Array of 3 students
    char sub[5][10]={"c","cloud","Data","stat","HTML"};
    // Input details for all students
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);
        while(getchar() !='\n');
        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) {
            printf("Subject %s: ",sub[j]);
            scanf("%f", &s[i].marks[j]);
        }
    }

    // Display details for all students
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks:\n");
        for (int j = 0; j < 5; j++) {
            printf("  Subject %d: %.2f\n", j + 1, s[i].marks[j]);
        }
    }

    return 0;
}
