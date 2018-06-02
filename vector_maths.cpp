
#include "vector_maths.h"
#include <cmath>
#include <iostream>
vector_maths::vector_maths()
{
	x = 0;
	y = 0;
}
vector_maths::vector_maths(double xval, double yval)
{
	x = xval;
	y = yval;
}
void vector_maths::input_vector()
{
	std::cout<<" (input x value then y value)";
	double x_val, y_val;
	std::cin>>x_val>>y_val;
	x = x_val;
	y = y_val;
}

double vector_maths::vec_magnitude()
{
	return std::sqrt(x*x + y*y);
}
double vector_maths::vec_getx()
{
	return x;
}
double vector_maths::vec_gety()
{
	return y;
}
double vector_maths::vec_angle()
{
	//returns angle with +ve x_axis in anti-clockwise
	double x_val = std::fabs(x), y_val = fabs(y);
	double t = atan(y_val/x_val);
	if(x > 0 && y > 0)
		return t;
	else if(x < 0 && y > 0)
		return PI - t;
	else if	(x < 0 && y < 0)
		return -PI + t;
	else if(x > 0 && y < 0)
		return -1*t;
	else //if(this->x == 0 && this->y == 0)
		return 0.0;
	//else return 0;
}
vector_maths vector_maths::vec_get_vec(double magnitude, double angle)
{
	//returns vector from magnitude and angle
	//angle in radian
	vector_maths vm;
	vm.x = magnitude*std::cos(angle);
	vm.y = magnitude*std::sin(angle);
	return vm;
}
void vector_maths::operator =(const vector_maths & vm)
{
	x = vm.x;
	y = vm.y;
}
vector_maths vector_maths::operator + (vector_maths const &obj)
{
	vector_maths res;
	res.x = x + obj.x;
	res.y = y + obj.y;
	return res;
}
vector_maths vector_maths::operator - (vector_maths const &obj)
{
	vector_maths res;
	res.x = x - obj.x;
	res.y = y - obj.y;
	return res;
}
vector_maths vector_maths::operator * (double t)
{
	vector_maths res;
	res.x = x*t;
	res.y = y*t;
	return res;
}
double vector_maths:: operator *(vector_maths const &obj)
{
	return x*obj.x + y*obj.y;

}
void vector_maths::display()
{
	std::cout<<"\nx_val = "<<x<<"\ty_val = "<<y;
}
vector_maths vector_maths::calc_displacement(vector_maths ini_vel, vector_maths accel, double t)
{
	vector_maths disp;
	disp = (ini_vel * t) + (accel*0.5*t*t);//disp.vec_multiply(ini_vel, t) + disp.vec_multiply(accel, 0.5*t*t);
	return disp;
}
vector_maths vector_maths::calc_velocity(vector_maths ini_vel, vector_maths accel, double t)
{
	vector_maths fin_vel;
	fin_vel = ini_vel + accel*t;
	return fin_vel;
}

