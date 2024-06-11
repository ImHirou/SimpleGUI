#ifndef SIMPLEGUI_BUTTON_H
#define SIMPLEGUI_BUTTON_H

#include <SFML/Graphics.hpp>
#include <string>
#include <utility>

class Button {
protected:
    sf::Vector2f m_pos;
    sf::Vector2f m_size;
    std::string m_title;
    bool m_hover = false;
public:
    Button(sf::Vector2f pos, sf::Vector2f size, std::string title = "") : m_pos(pos), m_size(size), m_title(std::move(title)) {}

    sf::Vector2f getPos() const;
    sf::Vector2f getSize() const;
    std::string getTitle() const;
    bool isHovered() const;

    void setHover(bool h);

    bool checkHover(int x, int y) const;
    bool checkHover(sf::Event &event) const; //for MouseMove

    void draw(sf::RenderWindow &window, sf::Font font);

};


#endif //SIMPLEGUI_BUTTON_H
