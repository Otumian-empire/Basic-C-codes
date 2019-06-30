#include <stdio.h>

#define PI_ 3.14 // doesn't require memory

int main() {
	// method 1
	const float PI = 3.14;
	float radius = 6.5;
	float area = PI * radius * radius;
	printf("The area of a circle of radius, %f, has an area of %f centimeter squared\n", radius, area);
	
	// method 2
	// this involves using #define
	float area_ = PI_ * radius * radius;
	printf("The area of a circle of radius, %f, has an area of %f centimeter squared\n", radius, area_);

	return 0;
}
