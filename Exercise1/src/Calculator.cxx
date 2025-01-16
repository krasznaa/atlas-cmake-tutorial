// Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration

// Local include(s).
#include "Exercise1/Calculator.h"

// Athena include(s).
#include "CxxUtils/phihelper.h"

Calculator::Calculator(double a, double b)
    : m_a(a), m_b(b)
{
}

double Calculator::calculate(double phi) const
{
   return CxxUtils::wrapToPi(m_a * phi + m_b);
}
