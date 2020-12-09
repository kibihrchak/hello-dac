default: sphinx

doxygen:
	mkdir -p project/build
	cd project/build && cmake .. && make doxygen-docs

sphinx: doxygen
	cd docs && make html

.PHONY: default doxygen sphinx
