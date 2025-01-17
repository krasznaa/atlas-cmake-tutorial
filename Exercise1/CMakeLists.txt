# Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration

# Set the name of the package.
atlas_subdir( Exercise1 )

# Set up a shared library with the class that will receive a dictionary.
atlas_add_library( Exercise1Lib
   Exercise1/*.h src/*.cxx
   PUBLIC_HEADERS Exercise1
   PRIVATE_LINK_LIBRARIES CxxUtils )

# Set up a dictionary for the package.
atlas_add_dictionary( Exercise1Dict
   Exercise1/Exercise1Dict.h
   Exercise1/selection.xml
   LINK_LIBRARIES Exercise1Lib )

# Set up the test(s) of the package.
atlas_add_test( Calculator
   SCRIPT python "${CMAKE_CURRENT_SOURCE_DIR}/test/test_calculator.py"
   POST_EXEC_SCRIPT nopost.sh )
