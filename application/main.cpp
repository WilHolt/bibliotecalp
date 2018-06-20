#include <iostream>

#include "mbasic.h"

	using namespace mbasic;



int main(int argc, char const *argv[])
{
	int v1=1;
	int v2=5;
	int result = MathBasic::add<int>(v1,v2);
	std::cout<<result<<std::endl;
}