#ifndef STATE_HPP
#define STATE_HPP

#include <vector>
#include <iostream>
#include <ctime>
#include <cstdlib>

#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class State
{
private:
	std::vector<sf::Texture>	textures;
public:
	State(/* args */);
	virtual ~State();

	//Functions
	virtual void	update() = 0;
	virtual void	render() = 0;
};

#endif