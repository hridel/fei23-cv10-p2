#ifndef P2_PLAYER_H
#define P2_PLAYER_H

#define MAX_NAME_LENGTH 50
#define MAX_TEAM_LENGTH 10
#define MAX_POS_LENGTH 3
#define MAX_LINE_LENGTH 1024

// Struktura pro reprezentaci hráče
typedef struct Player {
    char name[MAX_NAME_LENGTH];
    char team[MAX_TEAM_LENGTH];
    char pos[MAX_POS_LENGTH];
    int games;
    int g;
    int a;
    int pts;
    int plusMinus;
    int pim;
    int sog;
    int gwg;
    int ppg;
    int ppa;
    int shg;
    int sha;
    int hits;
    int bs;
} Player;

// Prototypy funkcí
Player *loadPlayers(const char *fileName, int *numPlayers);
void printPlayer(Player player);
void top5(Player *players, int numPlayers);
Player *bestScorer(Player *players, int numPlayers);
Player *mostPenalties(Player *players, int numPlayers);
Player *defensemanWithMostAssists(Player *players, int numPlayers);
void searchPlayerByName(Player *players, int numPlayers, const char *namePart);
void printPlayerRow(Player player);
void freePlayers(Player *players);

#endif //P2_PLAYER_H
