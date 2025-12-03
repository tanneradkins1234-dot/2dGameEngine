#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(
            sf::VideoMode(1920, 1080),
            "Hello World");
    sf::CircleShape circle(20);
    circle.setPosition(980, 540);
    circle.setOrigin(10, 10);
    while (window.isOpen()) 
    {
        sf::Event event;
        while (window.pollEvent(event))
            if (event.type == 
            sf::Event::Closed)
                window.close();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::W))
        {
            circle.move({0.f, -1.f});
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::S))
        {
            circle.move({0.f, 1.f});
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::A))
        {
            circle.move({-1.f, 0.f});
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::D))
        {
            circle.move({1.f, 0.f});
        }
        window.clear();
        window.draw(circle);
        window.display();
    }
    return 0;
}

















