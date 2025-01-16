# Exercise 1

As the first exercise about CMake in ATLAS's Developers' Tutorial, we simply
make use of one of the custom functions described on
https://atlassoftwaredocs.web.cern.ch/athena/developers/cmake/, the
[atlas_add_dictionary(...)](https://atlassoftwaredocs.web.cern.ch/athena/developers/cmake/#atlas_add_dictionary)
command.

The package comes with a simple class called `Calculator`. The goal of the
exercise is to generate a ROOT dictionary for this class, such that the
Python based unit test of the package would work.

Things to do:
  - Create a file called `Exercise1/Exercise1Dict.h`, which could be used by
    `atlas_add_dictionary(...)`;
  - Create a file called `Exercise1/selection.xml`, which could be used by
    `atlas_add_dictionary(...)`; As an example for these two, see for instance:
    * https://gitlab.cern.ch/atlas/athena/-/blob/main/Control/xAODRootAccess/xAODRootAccess/xAODRootAccessDict.h
    * https://gitlab.cern.ch/atlas/athena/-/blob/main/Control/xAODRootAccess/xAODRootAccess/selection.xml
  - Add an appropriate `atlas_add_dictionary(...)` call to the `CMakeLists.txt`
    file of the package.
    * By convention the dictionary library should be called `Exercise1Dict`.

To test that the dictionary was generated correctly, use
[CTest](https://cmake.org/cmake/help/latest/manual/ctest.1.html). In a
successful setup it should output something like:

```
[bash][Celeborn]:atlas-cmake-tutorial > ctest --test-dir build/ -L "Exercise1"
Internal ctest changing into directory: /home/krasznaa/ATLAS/tutorial/atlas-cmake-tutorial/build
Test project /home/krasznaa/ATLAS/tutorial/atlas-cmake-tutorial/build
    Start 1: Exercise1_Calculator_ctest
1/1 Test #1: Exercise1_Calculator_ctest .......   Passed    3.37 sec

100% tests passed, 0 tests failed out of 1

Label Time Summary:
Exercise1    =   3.37 sec*proc (1 test)

Total Test time (real) =   3.37 sec
[bash][Celeborn]:atlas-cmake-tutorial >
```
