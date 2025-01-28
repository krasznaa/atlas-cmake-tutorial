# Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration

# Set the name of the package.
atlas_subdir( Exercise3 )

# Component(s) in the package.
atlas_add_executable( Exercise3_vectorized_add
   utils/vectorized_add.cxx
   LINK_LIBRARIES Exercise1Lib )
