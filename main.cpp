#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Hello World");
    sf::CircleShape circle(20);
    circle.setPosition(980, 540);
    circle.setOrigin(10, 10);
    
    sf::Clock clock;
    float speed = 500.0f;
    while (window.isOpen()) 
    {
        sf::Event event;
        while (window.pollEvent(event))
            if (event.type == 
            sf::Event::Closed)
                window.close();
        float deltaTime = clock.restart().asSeconds();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::W))
        {
            circle.move(0, -speed * deltaTime);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::S))
        {
            circle.move(0, speed * deltaTime);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::A))
        {
            circle.move(-speed * deltaTime, 0);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::D))
        {
            circle.move(speed * deltaTime, 0);
        }
        window.clear();
        window.draw(circle);
        window.display();
    }
    return 0;
}

















