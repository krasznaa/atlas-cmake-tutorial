// Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration

// Project include(s).
#include "Exercise1/Calculator.h"

// Boost include(s).
#define BOOST_TEST_MODULE Calculator
#include <boost/test/unit_test.hpp>

// Test the identity case.
BOOST_AUTO_TEST_CASE(Identity)
{
   // Create the calculator object calculating identities.
   Calculator calc{1., 0.};

   // Check it.
   for (double x = -3.; x < 3.; x += 0.1)
   {
      BOOST_TEST(calc.calculate(x) == x);
   }
}
