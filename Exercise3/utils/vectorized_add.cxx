// Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration

// Project include(s).
#include "Exercise1/Calculator.h"

// // LCG include(s).
// #include "vectorclass.h"

// System include(s).
#include <cstdlib>
#include <iostream>
#include <cmath>

int main()
{
   // Create a calculator object.
   Calculator calc{1.5, 0.5};

   // // Create a vector of 4 double precision floating point numbers.
   // Vec4d input{1.0, 1.1, 1.2, 1.3};

   // // Calculate the result of the calculation for the vector, emulating what
   // // "calc" would also do.
   // Vec4d result = input * 1.5 + 0.5;

   // // Verify the results, against the "calc" object.
   // for (int i = 0; i < 4; i++)
   // {
   //    if (std::abs(result[i] - calc.calculate(input[i])) > 1e-5)
   //    {
   //       std::cerr << "Error: result[" << i << "] = " << result[i]
   //                 << " != calc.calculate(input[" << i << "]) = "
   //                 << calc.calculate(input[i]) << std::endl;
   //       return EXIT_FAILURE;
   //    }
   //    else
   //    {
   //       std::cout << "result[" << i << "] = " << result[i]
   //                 << " == calc.calculate(input[" << i << "]) = "
   //                 << calc.calculate(input[i]) << std::endl;
   //    }
   // }

   // Return gracefully.
   return EXIT_SUCCESS;
}
