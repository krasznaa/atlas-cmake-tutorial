// Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration
#ifndef EXERCISE1_CALCULATOR_H
#define EXERCISE1_CALCULATOR_H

/// Example class to make a dictionary for
class Calculator
{
public:
   /// Constructor with two arguments
   Calculator(double a, double b);

   /// Function performing a dummy calculation
   double calculate(double phi) const;

private:
   double m_a; ///< First input value
   double m_b; ///< Second input value

}; // class Calculator

#endif // EXERCISE1_CALCULATOR_H
