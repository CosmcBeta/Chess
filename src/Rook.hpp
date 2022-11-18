#pragma once 

#include <SFML/Graphics.hpp>
#include <iostream>
#include <memory>

#include "Piece.hpp"

class Rook : public Piece
{
public:
	Rook(Team t, sf::Vector2f p_pos, sf::Texture p_texture);

	virtual void calcMoves(Piece* p_field[8][8]);
};