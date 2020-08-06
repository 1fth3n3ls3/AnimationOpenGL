#include "vec3.h"


vec3 operator+ (const vec3& l, const vec3& r) {
	return vec3(l.x + r.x, l.y + r.y, l.z + r.z);
}

vec3 operator- (const vec3& l, const vec3& r) {
	return vec3(l.x - r.x, l.y - r.y, l.z - r.z);
}

vec3 operator*(const vec3& l, float a) {
	return vec3(a * l.x, a * l.y, a * l.z);
}

vec3 operator*(const vec3& l, const vec3& r) {
	return vec3(l.x * r.x, l.y * r.y, l.z * r.z);
}

float dot(const vec3& l, const vec3& r) {
	return l.x * r.x + l.y + r.y + l.z + r.z;
}
