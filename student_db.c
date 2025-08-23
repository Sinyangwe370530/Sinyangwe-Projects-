#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[100];
    int id;
    float marks;
};

struct Student *s = NULL;
int n = 0;

void add() {
    s = realloc(s, (n + 1) * sizeof(struct Student));
    printf("Name: "); scanf(" %[^\n]", s[n].name);
    printf("ID: "); scanf("%d", &s[n].id);
    printf("Marks: "); scanf("%f", &s[n].marks);
    n++;
}

void show() {
    if (n == 0) {
        printf("No records.\n");
        return;
    }
    for (int i = 0; i < n; i++)
        printf("Name: %s\nID: %d\nMarks: %.2f\n---\n", s[i].name, s[i].id, s[i].marks);
}

void find() {
    int id, found = 0;
    printf("Enter ID: "); scanf("%d", &id);
    for (int i = 0; i < n; i++) {
        if (s[i].id == id) {
            printf("Found: %s, %.2f\n", s[i].name, s[i].marks);
            found = 1;
            break;
        }
    }
    if (!found) printf("Not found.\n");
}

void del() {
    int id, i;
    printf("Enter ID to delete: "); scanf("%d", &id);
    for (i = 0; i < n; i++) if (s[i].id == id) break;
    if (i == n) {
        printf("Not found.\n");
        return;
    }
    for (; i < n - 1; i++) s[i] = s[i + 1];
    n--;
    s = realloc(s, n * sizeof(struct Student));
    printf("Deleted.\n");
}

int main() {
    int c;
    while (1) {
        printf("\n1.Add 2.Show 3.Find 4.Delete 5.Exit\nChoice: ");
        scanf("%d", &c);
        switch (c) {
            case 1: add(); break;
            case 2: show(); break;
            case 3: find(); break;
            case 4: del(); break;
            case 5: free(s); return 0;
            default: printf("Invalid.\n");
        }
    }
}

