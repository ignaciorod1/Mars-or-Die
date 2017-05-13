#pragma	once
#include "Vector2D.h"
#include "glut.h"
#include <math.h>

class Sphere
{
protected:

	Vector2D position, position_init;
	float radius, r_elip;
	float red, green, blue;

public:
		
	Sphere();
	~Sphere();

	void Draw();
	void SetColor(float r, float g, float b);
	void SetRadius(float r);
	void SetR_elip(Vector2D p);
	void SetPos(float x, float y);
	Vector2D GetPos();
};

