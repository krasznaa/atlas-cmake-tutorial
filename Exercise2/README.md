# Exercise 2

In the second exercise we learn a little about best practices for writing
unit tests in Athena.

We will reuse the `Calculator` class from Exercise 1, and write "proper" unit
tests for it using 3 different frameworks.
  - Write a unit test in Python, using the standard
    [unittest](https://docs.python.org/3/library/unittest.html) library;
  - Write a unit test with the help of
    [GoogleTest](https://github.com/google/googletest);
  - Write a unit test using
    [Boost.Test](https://www.boost.org/doc/libs/1_87_0/libs/test/doc/html/index.html).

The source code for the 3 tests is already written. The task is to make all
3 of them work.
  - For the Python test have a look at the code in `Exercise1`. Practically the
    same can be used here, to execute this unit test.
  - For the GoogleTest and Boost.Test tests you will need to "find"
    [GTest](https://cmake.org/cmake/help/latest/module/FindGTest.html) and
    [Boost](https://cmake.org/cmake/help/latest/module/FindBoost.html#boost-cmake).
    * Check the documentation of
      [atlas_add_test(...)](https://atlassoftwaredocs.web.cern.ch/athena/developers/cmake/#atlas_add_test)
      on how to set up compiled tests.

Tip: At first feel free to make use of `POST_EXEC_SCRIPT nopost.sh`. Once the
tests work with that, you should however produce reference output files for the
tests.

Once everything is set up correctly, you should get:

```
[bash][Celeborn]:atlas-cmake-tutorial > ctest --test-dir build/ -L "Exercise2"
Internal ctest changing into directory: /home/krasznaa/ATLAS/tutorial/atlas-cmake-tutorial/build
Test project /home/krasznaa/ATLAS/tutorial/atlas-cmake-tutorial/build
    Start 2: Exercise2_CalculatorPython_ctest
1/3 Test #2: Exercise2_CalculatorPython_ctest ...   Passed   13.79 sec
    Start 3: Exercise2_CalculatorGoogle_ctest
2/3 Test #3: Exercise2_CalculatorGoogle_ctest ...   Passed    0.32 sec
    Start 4: Exercise2_CalculatorBoost_ctest
3/3 Test #4: Exercise2_CalculatorBoost_ctest ....   Passed    0.32 sec

100% tests passed, 0 tests failed out of 3

Label Time Summary:
Exercise2    =  14.43 sec*proc (3 tests)

Total Test time (real) =  14.44 sec
[bash][Celeborn]:atlas-cmake-tutorial >
```
