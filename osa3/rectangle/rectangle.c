#include "rectangle.h"

Rectangle *createRectangle()
{
    Rectangle *r = malloc(sizeof(Rectangle));
    r->height = 0;
    r->width = 0;
    r->origin.x = 0;
    r->origin.y = 0;

    return r;
}

Rectangle *createRectangle2(Point p)
{
    Rectangle *r = malloc(sizeof(Rectangle));
    r->height = 0;
    r->width = 0;
    r->origin = p;

    return r;
}

Rectangle *createRectangle3(int w, int h)
{
    Rectangle *r = malloc(sizeof(Rectangle));
    r->height = h;
    r->width = w;

    r->origin.x = 0;
    r->origin.y = 0;

    return r;
}

Rectangle *createRectangle4(Point p, int w, int h)
{
    Rectangle *r = malloc(sizeof(Rectangle));
    r->height = h;
    r->width = w;
    r->origin = p;

    return r;
}

void move(Rectangle *r, int x, int y)
{
    r->origin.x = x;
    r->origin.y = y;
}

int getArea(const Rectangle *r)
{
    return r->height * r->width;
}
