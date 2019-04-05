#include "cercle.h"

Cercle::~Cercle()
{

}

Cercle::Cercle():Figure()
{
	rayon = 0;
}

Cercle::Cercle(int inX, int inY, int inRayon) : Figure(inX, inY)
{
	rayon = inRayon;
}

Cercle::Cercle(const Cercle& inCercle):Figure(inCercle)
{
	rayon = inCercle.rayon;
}

void Cercle::setRayon(int inRayon)
{
  rayon = inRayon;
}

int Cercle::getRayon() const
{
	return rayon;
}

float Cercle::getPerimetre() const
{
	return (2 * Pi*rayon);
}
float Cercle::calculerAire()
{
	return (float)(Pi * rayon * rayon);
}
bool Cercle::selectionner(int inX, int inY) 
{
	estSelectionne = false;
	float a = x + (float)rayon;
	float b = y + (float)rayon;

	if ((((inX-a)*(inX - a) + (inY-b)*(inY - b)) / ((float)rayon*(float)rayon)) <= 1)
	{
		estSelectionne = true;
	}
	return estSelectionne;
}

string Cercle::getType() {
	return "Cercle";
}