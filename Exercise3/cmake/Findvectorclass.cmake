# Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration

# AtlasLCG include(s).
include( LCGFunctions )

# Declare the external module.
lcg_external_module(
   NAME vectorclass
   INCLUDE_NAMES vectorclass.h )

# Handle the standard find_package arguments.
include( FindPackageHandleStandardArgs )
find_package_handle_standard_args( vectorclass
   DEFAULT_MSG VECTORCLASS_INCLUDE_DIR )
mark_as_advanced( VECTORCLASS_FOUND VECTORCLASS_INCLUDE_DIR )

# Set up the RPM dependency.
lcg_need_rpm( vectorclass )
