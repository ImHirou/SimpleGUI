#include <SFML/Graphics.hpp>
#include "Button.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Transparent Window");

    sf::Font font;
    Button button(sf::Vector2f (100, 100), sf::Vector2f (200, 50));

    while (window.isOpen()) {

        sf::Event event;

        while (window.pollEvent(event)) {

            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseMoved)
                button.setHover(button.checkHover(event));

        }
        window.clear(sf::Color::Black);
        button.draw(window, font);
        window.display();
    }

    return 0;
}
