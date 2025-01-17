# Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration

# Set the name of the package.
atlas_subdir( Exercise3 )

# Make use of vectorclass.
list( APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake" )
find_package( vectorclass )

# Component(s) in the package.
atlas_add_executable( Exercise3_vectorized_add
   utils/vectorized_add.cxx
   INCLUDE_DIRS ${VECTORCLASS_INCLUDE_DIRS}
   LINK_LIBRARIES Exercise1Lib )
