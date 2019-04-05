#include "carre.h"

Carre::~Carre()
{

}

Carre::Carre():Figure()
{
	cote=0;
}

Carre::Carre(int inX, int inY, int inCote) : Figure(inX, inY)
{
	cote = inCote;
}

Carre::Carre(const Carre& inCarre):Figure(inCarre)
{
	cote=inCarre.cote;
}

void Carre::setCote(int inCote)
{
  cote = inCote;
}

int Carre::getCote() const
{
	return cote;
}

float Carre::getPerimetre() const
{
	return  cote * 4;
}

bool Carre::selectionner(int inX, int inY) 
{
	estSelectionne = false;

	if (inX>x & inX< x+cote)
	{
		if (inY > y & inY < y + cote)
		{
			estSelectionne = true;
		}
	}
	return estSelectionne;
}
float Carre::calculerAire()
{
	return (float)(cote*cote);
}
string Carre::getType()
{
	return "Carre"
}
