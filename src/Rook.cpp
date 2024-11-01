#include "Rook.hpp"

Rook::Rook(Team t, sf::Vector2f p_pos, sf::Texture p_texture)
	:Piece(t, PieceType::ROOK, p_pos, p_texture)
{}

void Rook::calcMoves(Piece* p_field[8][8])
{
	possibleMoves.clear();
	sf::Vector2i deltaPos(0, 0);

	while (deltaPos.x + m_position.x <= 7)
	{
		if (deltaPos.x != 0)
		{
			if (p_field[deltaPos.x + m_position.x][m_position.y] == nullptr)
			{
				possibleMoves.push_back(sf::Vector2f(m_sprite.getPosition().x + (deltaPos.x * 80), m_sprite.getPosition().y));
			}
			else if (p_field[deltaPos.x + m_position.x][m_position.y] != nullptr && p_field[deltaPos.x + m_position.x][m_position.y]->getTeam() != m_team)
			{
				possibleMoves.push_back(sf::Vector2f(m_sprite.getPosition().x + (deltaPos.x * 80), m_sprite.getPosition().y));
				break;
			}
			else
				break;
		}
		deltaPos.x++;
	}
	deltaPos.x = 0;
	while (deltaPos.x + m_position.x >= 0)
	{
		if (deltaPos.x != 0)
		{
			if (p_field[deltaPos.x + m_position.x][m_position.y] == nullptr)
			{
				possibleMoves.push_back(sf::Vector2f(m_sprite.getPosition().x + (deltaPos.x * 80), m_sprite.getPosition().y));
			}
			else if (p_field[deltaPos.x + m_position.x][m_position.y] != nullptr && p_field[deltaPos.x + m_position.x][m_position.y]->getTeam() != m_team)
			{
				possibleMoves.push_back(sf::Vector2f(m_sprite.getPosition().x + (deltaPos.x * 80), m_sprite.getPosition().y));
				break;
			}
			else
				break;
		}
		deltaPos.x--;
	}
	while (deltaPos.y + m_position.y <= 7)
	{
		if (deltaPos.y != 0)
		{
			if (p_field[m_position.x][deltaPos.y + m_position.y] == nullptr)
			{
				possibleMoves.push_back(sf::Vector2f(m_sprite.getPosition().x, m_sprite.getPosition().y + (deltaPos.y * 80)));
			}
			else if (p_field[m_position.x][deltaPos.y + m_position.y] != nullptr && p_field[m_position.x][deltaPos.y + m_position.y]->getTeam() != m_team)
			{
				possibleMoves.push_back(sf::Vector2f(m_sprite.getPosition().x, m_sprite.getPosition().y + (deltaPos.y * 80)));
				break;
			}
			else
				break;
		}
		deltaPos.y++;
	}
	deltaPos.y = 0;
	while (deltaPos.y + m_position.y >= 0)
	{
		if (deltaPos.y != 0)
		{
			if (p_field[m_position.x][deltaPos.y + m_position.y] == nullptr)
			{
				possibleMoves.push_back(sf::Vector2f(m_sprite.getPosition().x, m_sprite.getPosition().y + (deltaPos.y * 80)));
			}
			else if (p_field[m_position.x][deltaPos.y + m_position.y] != nullptr && p_field[m_position.x][deltaPos.y + m_position.y]->getTeam() != m_team)
			{
				possibleMoves.push_back(sf::Vector2f(m_sprite.getPosition().x, m_sprite.getPosition().y + (deltaPos.y * 80)));
				break;
			}
			else
				break;
		}
		deltaPos.y--;
	}
}