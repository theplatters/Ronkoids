//
// Created by Franz on 31.07.2021.
//

#include "pch.h"

void centerOrigin(sf::Sprite& sprite)
{
    sf::FloatRect bounds = sprite.getLocalBounds();
    sprite.setOrigin(std::floor(bounds.left + bounds.width / 2.f), std::floor(bounds.top + bounds.height / 2.f));
}

void centerOrigin(sf::Text& text)
{
    sf::FloatRect bounds = text.getLocalBounds();
    text.setOrigin(std::floor(bounds.left + bounds.width / 2.f), std::floor(bounds.top + bounds.height / 2.f));
}

float convertToRadian(float degree) {
    return 3.1415f * degree / 180.f;
}

float length(sf::Vector2f vec) {
    return std::sqrt(vec.x * vec.x + vec.y * vec.y);
}

sf::Vector2f unitVector(sf::Vector2f vector) {
    return vector/ length(vector);
}

float convertToDegrees(float rad) {
    return rad * 180.f / 3.1415f;
}




