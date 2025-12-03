#include "triangle.h"
#include <exception>


Triangle::Triangle(float base, float height) : _base(base), _height(height)
{
	this->has_depth = false;
}

float Triangle::get_area() const
{
	if (this->has_depth)
	{
		throw std::exception("3D triangle is not implemented yet!");
	}

	return float(0.5 * _base * _height);
}
