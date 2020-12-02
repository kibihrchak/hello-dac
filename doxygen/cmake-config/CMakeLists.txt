cmake_minimum_required(VERSION 3.0.0)
project(HelloDoxygenCmakeConfig VERSION 0.1.0)

add_executable(HelloDoxygenCmakeConfig main.cpp foo/foo.cpp)

target_compile_definitions(HelloDoxygenCmakeConfig PUBLIC BAR)


find_package(Doxygen)

if(DOXYGEN_FOUND)
  get_target_property(TARGET_SOURCES HelloDoxygenCmakeConfig SOURCES)
  get_target_property(TARGET_DEF HelloDoxygenCmakeConfig COMPILE_DEFINITIONS)

  set(DOXYGEN_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/doxygen-docs")
  set(DOXYGEN_EXTRACT_ALL "YES")
  set(DOXYGEN_ENABLE_PREPROCESSING "YES")
  set(DOXYGEN_SOURCE_BROWSER "YES")
  set(DOXYGEN_INLINE_SOURCES "YES")
  set(DOXYGEN_PREDEFINED ${TARGET_DEF})

  # this target will only be built if specifically asked to.
  # run "make api-docs" to create the doxygen documentation
  doxygen_add_docs(
    doxygen-docs
    ${TARGET_SOURCES}
    index.dox
    COMMENT "Generate documents."
  )
endif(DOXYGEN_FOUND)
