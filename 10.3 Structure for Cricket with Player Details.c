#include <stdio.h>
#include <string.h>

typedef struct {
    char playerName[50];
    char teamName[50];
    float battingAverage;
} CricketPlayer;

void printTeamPlayers(CricketPlayer players[], int n, char team[]) {
    printf("Players in team %s:\n", team);
    for (int i = 0; i < n; i++) {
        if (strcmp(players[i].teamName, team) == 0) {
            printf("%s - Batting Average: %.2f\n", players[i].playerName, players[i].battingAverage);
        }
    }
}

int main() {
    CricketPlayer players[50] = {
        {"John Doe", "Team A", 45.5},
        {"Alice Smith", "Team B", 33.4},
        {"Bob Johnson", "Team A", 50.2},
        {"Charlie Brown", "Team B", 39.6},
        {"Dave Wilson", "Team C", 42.1},
        {"Eve Adams", "Team A", 52.7},
        {"Frank Scott", "Team C", 29.3},
        {"Grace Lee", "Team D", 41.8},
        {"Harry White", "Team E", 38.5},
        {"Isla Moore", "Team A", 43.6}
    };

    char teamName[50];
    printf("Enter team name to display players: ");
    scanf("%s", teamName);

    printTeamPlayers(players, 10, teamName);

    return 0;
}
