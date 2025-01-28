# Exercise 3

In the third exercise we learn how to make use of an external project/library
in Athena, which nobody has used yet.

For this we try to build a package that makes use of the
[vectorclass](https://github.com/vcoda/vectorclass) headers.

This package has some (commented out) code in it that uses those headers. But
it is not set up correctly to find and use them during the project's build.
The task with this exercise is to:
  - Uncomment the commented out code-lines in `utils/vectorized_add.cxx`, so
    that it would make use of [vectorclass](https://github.com/vcoda/vectorclass)
    for a simple calculation.
  - Write a CMake module called `Findvectorclass.cmake` that can correctly find
    this external, making use of the
    [AtlasLCG](https://gitlab.cern.ch/atlas/atlasexternals/-/tree/main/Build/AtlasLCG)
    code infrastructure.
  - Make use of `Findvectorclass.cmake` (`find_package(vectorclass)`) to build
    the code of the package successfully.

**Hint:** Since [vectorclass](https://github.com/vcoda/vectorclass) is **not**
used by [Athena](https://gitlab.cern.ch/atlas/athena/-/tree/main/Projects/Athena),
you will need to tell CMake explicitly where to find it. If you wrote
`Findvectorclass.cmake` using the `lcg_external_module(...)` helper function
provided by the [LCGFunction.cmake](https://gitlab.cern.ch/atlas/atlasexternals/-/blob/main/Build/AtlasLCG/modules/LCGFunctions.cmake?ref_type=heads)
module, you could use:

```sh
-DVECTORCLASS_LCGROOT=/cvmfs/sft.cern.ch/lcg/releases/LCG_106b/vectorclass/2.01.02/x86_64-el9-gcc13-opt
```

to tell CMake where to find that package.
