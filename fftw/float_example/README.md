This folder is dedicated to take the base of c++ (training folder).

For compiling use g++ :
g++ -g -std=c++11 main.cpp -o test -lfftw3f -O2

-std=c++11 for using chrono librairy
-lfftw3f for using fftw3 librairy with float (not double)
-O2 for optimize code (especially modulus calculus)
