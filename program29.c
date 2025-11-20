#include <stdio.h>
#include <string.h>

#define MAX_TEAMS 100

// Sub-structure for Coach
struct Coach {
    char name[50];
    int age;
    int experience; // in years
};

// Main structure for Team
struct Team {
    char teamName[50];
    char sportType[30];
    struct Coach coach;
};

// Global array to store teams
struct Team teams[MAX_TEAMS];
int teamCount = 0;

// Function to add a new team
void addTeam() {
    if (teamCount >= MAX_TEAMS) {
        printf("Team limit reached!\n");
        return;
    }

    printf("\nEnter Team Name: ");
    scanf(" %[^\n]", teams[teamCount].teamName);

    printf("Enter Sport Type: ");
    scanf(" %[^\n]", teams[teamCount].sportType);

    printf("Enter Coach Name: ");
    scanf(" %[^\n]", teams[teamCount].coach.name);

    printf("Enter Coach Age: ");
    scanf("%d", &teams[teamCount].coach.age);

    printf("Enter Coach Experience (in years): ");
    scanf("%d", &teams[teamCount].coach.experience);

    teamCount++;
    printf("Team added successfully!\n");
}

// Function to search for a team by name
void searchTeam() {
    char searchName[50];
    printf("\nEnter Team Name to Search: ");
    scanf(" %[^\n]", searchName);

    for (int i = 0; i < teamCount; i++) {
        if (strcmp(teams[i].teamName, searchName) == 0) {
            printf("\nTeam Found:\n");
            printf("Team Name: %s\n", teams[i].teamName);
            printf("Sport Type: %s\n", teams[i].sportType);
            printf("Coach Name: %s\n", teams[i].coach.name);
            printf("Coach Age: %d\n", teams[i].coach.age);
            printf("Coach Experience: %d years\n", teams[i].coach.experience);
            return;
        }
    }
    printf("Team not found.\n");
}

// Function to display all teams
void displayTeams() {
    if (teamCount == 0) {
        printf("\nNo teams to display.\n");
        return;
    }

    printf("\n--- All Teams ---\n");
    for (int i = 0; i < teamCount; i++) {
        printf("\nTeam %d:\n", i + 1);
        printf("Team Name: %s\n", teams[i].teamName);
        printf("Sport Type: %s\n", teams[i].sportType);
        printf("Coach Name: %s\n", teams[i].coach.name);
        printf("Coach Age: %d\n", teams[i].coach.age);
        printf("Coach Experience: %d years\n", teams[i].coach.experience);
    }
}

// Main menu
int main() {
    int choice;

    do {
        printf("\n--- CHARUSAT Sports Team Manager ---\n");
        printf("1. Add New Team\n");
        printf("2. Search Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addTeam(); break;
            case 2: searchTeam(); break;
            case 3: displayTeams(); break;
            case 4: printf("Exiting program.\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
