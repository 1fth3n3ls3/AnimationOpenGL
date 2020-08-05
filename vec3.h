#ifndef _H_VEC3_
#define _H_VEC3_
#define VEC3_EPSILON 0.000001f

struct vec3
{
	union
	{
		struct
		{
			float x;
			float y;
			float z;
		};
		float v[3];
	};
	inline vec3() : x(0.0f), y(0.0f), z(0.0f) {}
	inline vec3(float _x, float _y, float _z) :
		x(_x), y(_y), z(_z) {}
	inline vec3(float *fv) :
		x(fv[0]), y(fv[1]), z(fv[2]) {}

};

#endif 