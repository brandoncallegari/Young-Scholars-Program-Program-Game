#include "Player.h"
#include <string>
Player::player(std::string name, std::string location, int health)
{
    string playerName = name;
    string playerLocation = location;
    
    void setLocation(std::string location)
    {
        playerLocation = location;
    }
    
    string getLocation(){return playerLocation;}
}
    