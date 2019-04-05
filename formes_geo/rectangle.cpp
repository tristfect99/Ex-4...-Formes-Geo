#include "rectangle.h"

FormeRectangle::FormeRectangle():Figure()
{
	largeur=0;
	hauteur = 0;
}

FormeRectangle::FormeRectangle(int inX, int inY, int inLargeur, int inHauteur) : Figure(inX, inY)
{
	largeur = inLargeur;
	hauteur = inHauteur;
}

FormeRectangle::FormeRectangle(const FormeRectangle& inRectangle):Figure(inRectangle)
{
	largeur = inRectangle.largeur;
	hauteur = inRectangle.hauteur;
}

FormeRectangle::~FormeRectangle()
{

}

void FormeRectangle::setLargeur(int inLargeur)
{
  largeur = inLargeur;
}
void FormeRectangle::setHauteur(int inHauteur)
{
	hauteur = inHauteur;
}

int FormeRectangle::getLargeur() const
{
	return largeur;
}
int FormeRectangle::getHauteur() const
{
	return hauteur;
}
float FormeRectangle::calculerAire()
{
	return (float)(largeur*hauteur);
}

float FormeRectangle::getPerimetre() const
{
	return (float)(largeur*2+hauteur*2);
}

bool FormeRectangle::selectionner(int inX,int inY)
{
		estSelectionne = false;
	if ((inX > x) && (inX < (x + largeur)) && (inY > y) && (inY < (y + hauteur)))
	{
			estSelectionne = true;
	}
	return estSelectionne;
}
string FormeRectangle::getType()
{
	return "Rectangle";
}