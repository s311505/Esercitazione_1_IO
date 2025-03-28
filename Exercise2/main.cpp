#include <iostream>
#include <fstream>
#include <iomanip>
#include "funzioni.hpp"


int main()
{
	std::ifstream fstr("data.txt");
	std::ofstream ofstr("result.txt");
	
	if(fstr.fail())
	{
		std::cerr <<"file not found" << std::endl;
		return 1;
	}
	
	ofstr << "#N Mean" << std::endl;
	ofstr << std::scientific << std::setprecision(16); 
	
	double val;
	unsigned int n = 0;
	double sum = 0;
	while(fstr >> val)
	{
		sum += map_val(val);
		n++;
		ofstr << n << " " << sum/n << std::endl;
	}
		
    return 0;
}
