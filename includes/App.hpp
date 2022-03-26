#ifndef APP_HPP
#define APP_HPP
#include <SFML/Graphics.hpp>

class App
{
private:
	sf::RenderWindow  window;

	/* data */
public:
	App();
	~App();

	//functions
	void    render();
	void    update();
	void    run();
};



#endif