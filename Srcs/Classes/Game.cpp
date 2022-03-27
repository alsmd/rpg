#include <Classes/Game.hpp>


//Inicializer functions

void	Game::initWindow()
{
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "Rpg");

}

//Constructor / Destroctor

Game::Game()
{
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}


//Functions

void	Game::run()
{
	while (this->window->isOpen())
	{
		this->updateDt();
		this->update();
		this->render();
	}
}

void	Game::update()
{
	this->updateSFMLEvents();
}

void	Game::updateDt()
{
	//Update delta variable with the time that it took to render 1 frame
	this->dt = this->dtClock.restart().asSeconds();
}

void	Game::updateSFMLEvents()
{
	while (this->window->pollEvent(this->sfEvent))
	{
		if (this->sfEvent.type == sf::Event::Closed)
			this->window->close(); 
	}
}

void	Game::render()
{
	this->window->clear();


	this->window->display(); 
}
