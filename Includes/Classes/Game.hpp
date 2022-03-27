#ifndef GAME_HPP
#define GAME_HPP

#include <State/State.hpp>

class Game
{

private:
	//Variables
	sf::RenderWindow	*window;
	sf::Event			sfEvent;
	sf::Clock			dtClock;
	float				dt;
	//Initiaziler functions
	void	initWindow();

public:
	Game(/* args */);
	virtual ~Game();
	//Function
	void		updateDt();
	void		updateSFMLEvents();
	void		update();
	void		render();
	void		run();
};

#endif