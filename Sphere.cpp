#include "Sphere.h"

Sphere::Sphere() {
	position.x = 5.0;
	position.y = 15.0;
}

Sphere::~Sphere() {}
 

void Sphere::SetPos(float x, float z) {	
	position_init.x = x;
	position_init.y = z;
}


void Sphere::SetColor(float r, float g, float b) {
	red = r;
	green = g;
	blue = b;
}


void Sphere::SetR_elip(Vector2D p) {
	r_elip = sqrtf(pow(p.x, 2) + pow(p.y, 2));
}


void Sphere::SetRadius(float r) {
	radius = r;
}


Vector2D Sphere::GetPos() {
	return position_init;
}


void Sphere::Draw() {

	glPushMatrix();
	glTranslatef(position.x, 0, position.y);
	glColor4f(red, green, blue, 1.0);
	glutSolidSphere(radius, 40, 40);
	glPopMatrix();


		//Draws the orbit of each planet of the class Sphere
	glBegin(GL_LINE_LOOP);	
	glColor4f(red, green, blue, 1.0);
	for (float i = 0; i < 2 * 3.1416; i+=0.01) {	
		glVertex3f(r_elip*cos(i), 0, r_elip*sin(i));
		glVertex3f(r_elip*cos(i + 0.01), 0, r_elip*sin(i + 0.01));
		
	}
	glEnd();
}
