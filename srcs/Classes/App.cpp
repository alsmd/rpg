#include <App.hpp>

App::App()
{
    this->window.create(sf::VideoMode(200, 200), "App");
}

App::~App()
{

}

//Functions
void    App::render()
{
    sf::CircleShape shape(50.f);

    this->window.clear();
    this->window.draw(shape);
    this->window.display();
}

void    App::update()
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

void    App::run()
{
    while (this->window.isOpen())
    {
        this->update();
        this->render();
    }
}
