build:
	echo hello

vectors:
	g++ vectors.cpp && ./a.out


algorithms:
	g++ algorithms.cpp && ./a.out

unordered_map:
	g++ unordered_map.cpp && ./a.out

set:
	g++ set.cpp && ./a.out


clean:
	rm -rf *.o *.out