#pragma once 

#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>
#include <array>

#include "Piece.hpp"

class Knight : public Piece
{
public:
	Knight(Team t, sf::Vector2f p_pos, sf::Texture p_texture);

	virtual void calcMoves(Piece* p_field[8][8]);
};