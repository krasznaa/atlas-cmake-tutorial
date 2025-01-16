# Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration

# Set the name of the package.
atlas_subdir( Exercise1 )

# Set up a shared library with the class that will receive a dictionary.
atlas_add_library( Exercise1Lib
   Exercise1/*.h src/*.cxx
   PUBLIC_HEADERS Exercise1
   PRIVATE_LINK_LIBRARIES CxxUtils )

# Set up the test(s) of the package.
atlas_add_test( Calculator
   SCRIPT python "${CMAKE_CURRENT_SOURCE_DIR}/test/test_calculator.py"
   POST_EXEC_SCRIPT nopost.sh )
