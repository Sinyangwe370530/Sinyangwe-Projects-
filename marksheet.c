#include <stdio.h>
  
   // learning to get better day by day champwafye
// Function declarations
void inputMarks(int marks[], int n);
float calculateAverage(int marks[], int n);
int findHighest(int marks[], int n);
int findLowest(int marks[], int n);

int main() {
    int n, choice;

    do {
        printf("Enter number of students in the class: ");
        scanf("%d", &n);

        int marks[n];

        // Input marks
        inputMarks(marks, n);

        // Display all marks
        printf("\nMarks entered:\n");
        for (int i = 0; i < n; i++) {
            printf("Student %d: %d\n", i + 1, marks[i]);
        }

        // Display results
        printf("\nClass Results:\n");
        printf("Average mark: %.2f\n", calculateAverage(marks, n));
        printf("Highest mark: %d\n", findHighest(marks, n));
        printf("Lowest mark: %d\n", findLowest(marks, n));

        // Option to repeat
        printf("\nDo you want to enter marks for another class? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("\nProgram ended. Goodbye!\n");

    return 0;
}

// Function to input marks
void inputMarks(int marks[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

// Function to calculate average
float calculateAverage(int marks[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }
    return (float)sum / n;
}

// Function to find highest mark
int findHighest(int marks[], int n) {
    int highest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
    return highest;
}

// Function to find lowest mark
int findLowest(int marks[], int n) {
    int lowest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    return lowest;
}
