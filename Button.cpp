#include "Button.h"

sf::Vector2f Button::getPos() const { return m_pos; }
sf::Vector2f Button::getSize() const { return m_size; }
std::string Button::getTitle() const { return m_title; }
bool Button::isHovered() const { return m_hover; }

void Button::setHover(bool h) { m_hover = h; }

bool Button::checkHover(int x, int y) const {
    return  m_pos.x<=x && (m_size.x+m_pos.x)>=x &&
            m_pos.y<=y && (m_size.y+m_pos.y)>=y;
}
bool Button::checkHover(sf::Event &event) const {
    if(event.type != sf::Event::MouseMoved) return false;
    return checkHover(event.mouseMove.x, event.mouseMove.y);
}

void Button::draw(sf::RenderWindow &window, sf::Font font) {
    sf::RectangleShape rect(m_pos);
    rect.setPosition(m_pos);
    rect.setSize(m_size);
    if(m_hover) {
        rect.setFillColor(sf::Color(100, 100, 100));
    } else {
        rect.setFillColor(sf::Color(120, 120, 120));
    }
    window.draw(rect);
}