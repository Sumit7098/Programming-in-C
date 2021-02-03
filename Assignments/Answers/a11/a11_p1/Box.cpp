#include "Box.h"

Box::Box()
{
	height = 0;
	width = 0;
	depth = 0;
}

Box::Box(double newheight, double newwidth, double newdepth)
{
	height = newheight;
	width = newwidth;
	depth = newdepth;
}

Box::Box(const Box& b)
{
	height = b.height;
	width = b.width;
	depth = b.depth;
}

Box::~Box()
{
}

void Box::setHeight(const double& newheight)
{
	height = newheight;
}

void Box::setWidth(const double& newwidth)
{
	width = newwidth;
}

void Box::setDepth(const double& newdepth)
{
	depth = newdepth;
}

double Box::getHeight() const
{
	return height;
}

double Box::getWidth() const
{
	return width;
}

double Box::getDepth() const
{
	return depth;
}
