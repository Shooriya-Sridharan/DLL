#pragma once

#ifdef CALCULATOR_DLL_EXPORTS
#define CALCULATOR_DLL_API __declspec(dllexport)
#else
#define CALCULATOR_DLL_API __declspec(dllimport)
#endif

extern "C" CALCULATOR_DLL_API void calculate_init(double a, double b);
extern "C" CALCULATOR_DLL_API double add();
extern "C" CALCULATOR_DLL_API double subtract();
extern "C" CALCULATOR_DLL_API double multiply();
extern "C" CALCULATOR_DLL_API double divide();