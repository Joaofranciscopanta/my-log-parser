#include "game.h"
using namespace std;

//Player class functions
void Player::incrementKills() {
    this->kills++;
}

void Player::decrementKills() {
    kills--;
}

//Match class functions

//Adds a player to the Player vector.
void Match::addPlayer(const string& name) {
    Player player = *new Player();
    player.name = name;
    players.insert(players.end(),player);
}

//Verifies if player is already inserted into vector
bool Match::isPlayerAdded(const string& name) {
    for(Player p : players)
        if (p.name == name)
            return true;
    return false;
}


//Game class functions
void Game::incrementOngoingMatch() {
    ongoingMatch++;
}

