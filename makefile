main: main.cpp  classes.cpp
	g++	-std=c++11	-o	main	main.cpp	classes.cpp
gdb:	main.cpp	classes.cpp
	g++	-std=c++11	-g	-o	main	main.cpp	classes.cpp
