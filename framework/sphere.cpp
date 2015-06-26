#define _USE_MATH_DEFINES
#include <cmath>

#include "Sphere.hpp"
#include "color.hpp"

Sphere::Sphere()
  : Shape{}, center_{0.0f,0.0f,0.0f}, radius_{0.0f}
{}


Sphere::Sphere(glm::vec3 const& center, float radius, std::string name, Color color)
  : Shape(name, color), center_(center), radius_(radius) //Shape::setName(name), Shape::setColor(color)
{}

glm::vec3 Sphere::getcenter() const{
  return center_;
}

float Sphere::getradius() const{
  return radius_;
}

float Sphere::area() const{
  return 4.0*M_PI*(radius_*radius_);
}

float Sphere::volume() const{
  return (4.0/3.0)*M_PI*(radius_*radius_*radius_);
}

void Sphere::print(std::ostream& os) const{
	Shape::print(os);
	os << "Radius: " << radius_ << " Center: " << center_.x << center_.y << center_.z<<std::endl;
}

Sphere::~Sphere()
{}