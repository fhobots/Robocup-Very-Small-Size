#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include <vector>
#include "robot.h"
#include "hsvcolor.h"

class Team{
private:
	const HSVColor teamColor;
	std::vector<Robot> robots;
public:
	enum class TEAMCOLOR {Yellow, Blue};
	Team(HSVColor teamColor = HSVColor(), Robot r1 = Robot(), Robot r2 = Robot(), Robot r3 = Robot());
	Team(const Team::TEAMCOLOR teamColor, std::string xmlFile = "config.xml");
	HSVColor getColor();
	std::vector<Robot>& getRobots();
	Robot& operator[](int n);
};

std::ostream& operator<<(std::ostream& os, Team& t);

#endif