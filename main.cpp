#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    sf::RenderWindow window(sf::VideoMode({1920, 1080}), "Hello World");
    vector<vector<int>> vec(6, vector<int>(10, 0));

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    sf::Clock clock;
    float speed = 500.0f;
    while (window.isOpen()) 
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        float deltaTime = clock.restart().asSeconds();

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::W))
        {
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::S))
        {
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::A))
        {
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Scan::D))
        {
        }
        window.clear();
        window.display();
    }
    return 0;
}

















