.SILENT: hello-basic hello-diagram-gen-filter build_dir clean

hello-basic: build_dir
	pandoc -s -o build/hello-basic.html hello-basic.md

hello-diagram-gen-filter: build_dir
	java -jar ${PLANTUML} -o ../build/hello-diagram-gen-filter \
		hello-diagram-gen-filter/hello.puml
	cd build && \
		pandoc -s --lua-filter=../filters/diagram-generator.lua \
			--extract-media=hello-diagram-gen-filter \
			-o hello-diagram-gen-filter.html ../hello-diagram-gen-filter.md

build_dir: build/
	mkdir -p build

.PHONY: clean

clean:
	rm -rf build/*
