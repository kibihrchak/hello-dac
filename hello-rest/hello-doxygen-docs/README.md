# Hello, Doxygen Docs

This is an example of integrating Doxygen documentation of C++ project
into a reST documentation using
[Sphinx](https://www.sphinx-doc.org/en/master/index.html) and
[Breathe](https://github.com/michaeljones/breathe).

It consists out of:

|Directory      |Description
|---            |---
|`project/`     |C++ project and Doxygen configuration in CMake
|`docs/`        |Sphinx project that uses generated Doxygen docs

In order to build HTML output from reST, run `make` in the project root.

To see the build output, check out `docs/_build/html` directory.
