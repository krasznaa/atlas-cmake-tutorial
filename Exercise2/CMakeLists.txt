# Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration

# Set the name of the package.
atlas_subdir( Exercise2 )

# Find the necessary externals.
find_package( GTest )
find_package( Boost COMPONENTS unit_test_framework )

# Set up all of the unit tests.
atlas_add_test( CalculatorPython
   SCRIPT python "${CMAKE_CURRENT_SOURCE_DIR}/test/test_calculator.py"
   POST_EXEC_SCRIPT nopost.sh )

atlas_add_test( CalculatorGoogle
   SOURCES test/test_calculator_google.cxx
   LINK_LIBRARIES Exercise1Lib GTest::gtest_main
   POST_EXEC_SCRIPT nopost.sh )

atlas_add_test( CalculatorBoost
   SOURCES test/test_calculator_boost.cxx
   LINK_LIBRARIES Exercise1Lib Boost::unit_test_framework
   POST_EXEC_SCRIPT nopost.sh )
