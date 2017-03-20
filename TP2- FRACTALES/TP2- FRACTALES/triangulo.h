
#ifndef TRIANGULO_H
#define TRIANGULO_H

typedef struct {
	float x;//coordenada del eje x
	float y;//coordenada del eje y
}point_t;

void TriangleRecursion(point_t StartPosition, float lStart, float lEnd, float RightAngle, float LeftAngle, int16_t ScreenWidth, int16_t ScreenHigh);


#endif // _TRIANGULO_H