#include "team.h"

Team::Team(HSVColor teamColor, Robot r1, Robot r2, Robot r3): teamColor(teamColor), robots({r1,r2,r3}) {}
Team::Team(const Team::TEAMCOLOR, std::string xmlFile){}
HSVColor Team::getColor(){return this->teamColor;}
std::vector<Robot>& Team::getRobots(){return this->robots;}
//Robot Team::operator[](int n){return this->robots.at(n);}
Robot& Team::operator[](int n){return this->robots.at(n);}

std::ostream& operator<<(std::ostream& os, Team& t){
	return os << t[0] << ", " <<t[1] << ", " << t[2];
}