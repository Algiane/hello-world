# Bug report

*This template is provided to help you formulate your tickets quickly
and efficiently without redundency between issues and merge requests.
Feel free to adapt it to your needs and add or remove sections.*

## Technical context

Add any relevant technical information to reproduce the bug:

 - OS: e.g. `Ubuntu-24.04`, `MacOS Sonoma-14.3.1`,...
 - Architecture: e.g. `x86_64`, `Apple M1 Max`,...
 - Ecogen tag or commit hash: e.g. `release/v4.0`, `a002df8`, ...
 - Compiler version: e.g. `Apple clang version 15.0.0 (clang-1500.1.0.2.5)` , `gcc-9 (Homebrew GCC 9.5.0) 9.5.0`,...
 - MPI distribution and version: e.g. `mpirun (Open MPI) 5.0.5`, ...
 - Gmsh version: e.g. `4.10.3`
 - ...

## Scientific context

Add any relevant scientific information:

 - model: e.g. `euler`, `PUEq`, `eulerHomogeneous`, `UEq`, ...
 - space discretization: `Cartesian`, `AMR`, `Unstructured grid`?
 - dimension: `1D`, `2D`, `3D`?
 - relaxation type: `infinite`, `finite: <relaxation value>`?
 - test case: `<test case name>` or tailored test case with attached input files

## Bug reproduction and unexpected behaviour

Steps to reproduce the behavior:
 1. Mesh generation command line if relevant
 2. Ecogen command line: e.g. `mpirun -n 4 ./ECOGEN`
 3. See error. If applicable, illustrates the bug with:
    - error messages or log
    - output files
    - screenshots


## Expected behaviour
A clear and concise description of what you expected to happen.

## Additional context
Add any other context about the problem here.
