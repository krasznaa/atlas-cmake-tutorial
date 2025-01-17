// Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration

// Project include(s).
#include "Exercise1/Calculator.h"

// GoogleTest include(s).
#include <gtest/gtest.h>

// Test the identity case.
TEST(Calculator, Identity)
{
   // Create the calculator object calculating identities.
   Calculator calc{1., 0.};

   // Check it.
   for (double x = -3.; x < 3.; x += 0.1)
   {
      EXPECT_DOUBLE_EQ(calc.calculate(x), x);
   }
}
