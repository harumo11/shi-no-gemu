#pragma once
#include <string>
#include <iostream>
#include <set>

class GameState
{
public:
	GameState();
	std::string operator()();
	void reset();
	void change(std::string flag);
	std::set<std::string> flags{ "title", "playing" };

private:
	std::string current_state;
};

GameState::GameState()
{
	this->current_state = "title";
}

std::string GameState::operator()() {
	return this->current_state;
}

void GameState::reset() {
	this->current_state = "title";
}

void GameState::change(std::string new_flag) {
	if (this->flags.count(new_flag) != 0)
	{
		this->current_state = new_flag;
	}
	else
	{
		std::cout << "||| error can't change state" << std::endl;
	}
}
