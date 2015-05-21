# trigonometry-library
a trigonometry library

while i learn in our trigonometry class i've decided to implement them in a code way so 
im trying to create a library to solve trigonometry related problems.

to use:
1. include the header file named "trig_lib.h" -- > #include "trig_lib.h"
2. use a tri:: prefix -- > tri::funct(); (i prefer this)
3. or a defined to the compiler -- > using namespace tri;
4. or defined for each function -- > using tri::funct();

functions:
1. get_rad(double) -- > gets the radian ejects degrees and returns a value of 0
2. get_degree(double) -- > gets the degree ejects radians and returns a value of 0
3. ref_angle(double) -- > gets the reference angle of a degree or a radian
4. rad_to_deg(double) -- > converts radian to degree
5. deg_to_rad(double) -- > converts degree to radian
