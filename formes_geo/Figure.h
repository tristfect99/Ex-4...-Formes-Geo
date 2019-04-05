#ifndef FigureH
#define FigureH

#include <string>
using namespace std;

const float Pi=(float)3.1416;

class Figure
{
protected:
	int x;	//coin supérieur gauche
	int y;
	bool estSelectionne;

public:
	Figure();
	Figure(int x, int y);
	Figure(const Figure&);
	virtual ~Figure();
	 int getX() const;
	 int getY() const;
	 void setPoint(int X, int Y);
	 void setX(int);
	 void setY(int);
	 virtual void setLargeur(int);
	 virtual void setHauteur(int);
	 virtual int getLargeur() const;
	 virtual int getHauteur() const;
	 bool EstSelectionne();
	 void Deselectionner();
	virtual void setCote(int);
	virtual int getCote() const;
	virtual void setRayon(int);
	virtual int getRayon() const;
	virtual float calculerAire() =0;
	virtual float getPerimetre() const =0;
	virtual bool selectionner(int, int) = 0;
	virtual string getType();
};

#endif