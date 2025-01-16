# Copyright (C) 2002-2025 CERN for the benefit of the ATLAS collaboration
#
# Main project file for the tutorial.
#

# Set up the project
cmake_minimum_required(VERSION 3.25)
project(ATLASCMakeTutorial VERSION 1.0.0 LANGUAGES CXX)

# Find the Athena installation. 25.0 is the minimum version. To use an
# exact version, add "EXACT" to the find_package call.
find_package(Athena 25.0)

# Make CTest behcave correctly.
atlas_ctest_setup()

# Proectss all the packages.
atlas_project(USE Athena "${Athena_VERSION}")

# Generate the environment setup script.
lcg_generate_env( SH_FILE "${CMAKE_BINARY_DIR}/${ATLAS_PLATFORM}/env_setup.sh" )
install( FILES "${CMAKE_BINARY_DIR}/${ATLAS_PLATFORM}/env_setup.sh"
   DESTINATION "." )

# Make CPack behave correctly.
atlas_cpack_setup()
