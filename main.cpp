
#include "vector_maths.h"
#include <iostream>
int main()
{
	vector_maths initial_pos, displacement, initial_vel, accel,new_vec;
	std::cout<<"\nInput the initial Parameters";
	std::cout<<"\nInitial position";
	initial_pos.input_vector();
	displacement = initial_pos;

	std::cout<<"\nInitial Velocity ?";

	initial_vel.input_vector();
	std::cout<<"\nTime Interval?";
	double T;
	std::cin>>T;
	std::cout<<"\nInitial acceleration";
	accel.input_vector();
	std::cout<<"\nOutput Parameters are:";
	for(int i = 1; i <= 20; i++)
	{
		double t = i*T/20.0;
		std::cout<<"\nAt t = "<<t<<" ";
		std::cout<<"\nCoordinates are:";
		displacement = displacement.calc_displacement(initial_vel, accel, t);
		new_vec = initial_pos + displacement;//new_vec.vec_add(initial_pos, displacement);
		new_vec.display();
		std::cout<<"\nAnd instantaneous velocity is";
		new_vec = new_vec.calc_velocity(initial_vel, accel, t);
		new_vec.display();
		std::cout<<"\n";
	}
	return 0;
}


