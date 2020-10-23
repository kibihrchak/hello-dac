.SILENT: \
	hello-basic \
	hello-diagram-gen-filter \
	hello-csv-table \
	hello-chart \
	build_dir \
	clean

hello-basic: build_dir
	pandoc -s -o build/hello-basic.html hello-basic.md

hello-diagram-gen-filter: build_dir
	java -jar ${PLANTUML} -o ../build/hello-diagram-gen-filter \
		hello-diagram-gen-filter/hello.puml
	cd build && \
		pandoc -s --lua-filter=diagram-generator.lua \
			--extract-media=hello-diagram-gen-filter \
			-o hello-diagram-gen-filter.html ../hello-diagram-gen-filter.md

hello-csv-table: build_dir
	pandoc -s -F pantable \
		-o build/hello-csv-table.html hello-csv-table.md

hello-chart: build_dir
	cd build && \
		pandoc -s -F pandoc-plot \
			-o hello-chart.html ../hello-chart.md
	cd build && \
		pandoc -s -F pandoc-plot \
			-o hello-chart.pdf ../hello-chart.md

build_dir:
	mkdir -p build

.PHONY: clean

clean:
	rm -rf build/*
