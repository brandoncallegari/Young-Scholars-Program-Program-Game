#include <string>
using namespace std;
class player
{
private:
    string playerName;
    string playerLocation;
public:
    player(string name, string location);
    void setName(string);
    void setLocation(string);
    string getName();
    string getLocation();
   
};