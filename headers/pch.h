//
// Created by Franz on 07.07.2021.
//

#ifndef TETRIS_PCH_H
#define TETRIS_PCH_H

#include <SFML/Graphics.hpp>
#include <memory>
#include <vector>
#include <cassert>
#include <iostream>
#include <cmath>
#include <map>
#include <sstream>
#include <functional>
#include <algorithm>
#include <cassert>
#include <ResourceIdentifiers.h>
#include <queue>

void centerOrigin(sf::Sprite& sprite);
void centerOrigin(sf::Text& text);
float convertToRadian(float degree);
float convertToDegrees(float rad);
float length(sf::Vector2f vec);
sf::Vector2f unitVector(sf::Vector2f vector);
#endif //TETRIS_PCH_H
