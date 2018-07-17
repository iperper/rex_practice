all: rand_vertices rand_vertices_file rand_vertices_class rand_seglist shapes_v1 shapes_v2 shapes_v3 shapes_v4

rand_vertices: rand_vertices.cpp
	g++ -o rand_vertices  rand_vertices.cpp

rand_vertices_file: rand_vertices_file.cpp
	g++ -o rand_vertices_file  rand_vertices_file.cpp

rand_vertices_class: ../lib_geometry/libgeometry.a rand_vertices_class.cpp
	g++ -I../lib_geometry -L../lib_geometry -o rand_vertices_class rand_vertices_class.cpp -lgeometry 

rand_seglist: ../lib_geometry/libgeometry.a rand_seglist.cpp 
	g++ -I../lib_geometry -L../lib_geometry -o rand_seglist rand_seglist.cpp -lgeometry

shapes_v1: ../lib_geometry/libgeometry.a shapes_v1.cpp
	g++ -I../lib_geometry -L../lib_geometry -o shapes_v1 shapes_v1.cpp -lgeometry

shapes_v2: ../lib_geometry/libgeometry.a shapes_v2.cpp
	g++ -I../lib_geometry -L../lib_geometry -o shapes_v2 shapes_v2.cpp -lgeometry

shapes_v3: ../lib_geometry/libgeometry.a shapes_v3.cpp
	g++ -I../lib_geometry -L../lib_geometry -o shapes_v3 shapes_v3.cpp -lgeometry

shapes_v4: ../lib_geometry/libgeometry.a shapes_v4.cpp
	g++ -I../lib_geometry -L../lib_geometry -o shapes_v4 shapes_v4.cpp -lgeometry
clean:
	rm -f rand_vertices rand_vertices_file rand_vertices_class rand_seglist shapes_v1 shapes_v2 shapes_v3
