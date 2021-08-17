#include "pch.h"
#include "Calculator_DLL.h"
#include <utility>

double var_a,var_b;
void calculate_init(double a, double b)
{
	var_a = a;
	var_b = b;
}
double add()
{
	return var_a + var_b;
}
double subtract()
{
	return var_a-var_b;
}
double multiply()
{
	return var_a*var_b;
}

double divide()
{
	if(var_b!=0)
		return var_a/var_b;
	return 0;
}
