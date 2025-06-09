#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for Student
typedef struct Student {
    char name[50];
    int roll;
    char grade;
} std;

int main() {
    int n, i;

    // Ask the user how many students to input
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of structures
    std students[n];

    // Input data for each student
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        printf("Name: ");
        /*fgets(students[i].name, sizeof(students[i].name), stdin);
        int len = strlen(students[i].name);
        if (len>0 && students[i].name[len-1] == '\n') {
            students[i].name[len-1] = '\0';
        }*/
        // To avoid issues with fgets and scanf, we can use:
        // scanf(" %[^\n]", students[i].name); // Uncomment this line if you want to use scanf instead of fgets
        // Note: If you use scanf, it will not read spaces correctly, so fgets is preferred for names.
        scanf(" %[^\n]", students[i].name);

        printf("Roll number: ");
        scanf("%d", &students[i].roll);

        printf("Grade: ");
        scanf(" %c", &students[i].grade);
    }

    // Display the entered data
    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Grade: %c\n", students[i].grade);
        printf("\n");
    }

    return 0;
}

// Created by Arkadip on 09-06-25.

