#ifndef VECTOR_MATHS_H_
#define VECTOR_MATHS_H_
#define PI 3.14159265358979323846
class vector_maths
{
	double x, y;
public:
	vector_maths();
	vector_maths(double xval,double yval);
	void input_vector();
	double vec_magnitude();
	double vec_getx();
	double vec_gety();
	double vec_angle();
	vector_maths vec_get_vec(double magnitude, double angle);
	vector_maths vec_multiply(vector_maths vm, double t);
	void display();


	//Overloading operators
	void operator = (const vector_maths & vm);
	vector_maths operator + (vector_maths const &obj);
	vector_maths operator - (vector_maths const &obj);
	vector_maths operator * (double t);
	double operator *(vector_maths const &obj); //vector dot product

	//Implementation of equations of motion
	vector_maths calc_velocity(vector_maths ini_vel, vector_maths accel, double t);
	vector_maths calc_displacement(vector_maths ini_vel, vector_maths accel, double t);
};


#endif /* VECTOR_MATHS_H_ */





