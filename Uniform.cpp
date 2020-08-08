#include "Uniform.h"
#include "./include/glad.h"
//#include "vec2.h"
#include "./include/vec3.h"
//#include "vec4.h"
//#include "quat.h"
//#include "mat4.h"

template Uniform<int>;
template Uniform<float>;
//template Attribute<vec2>;
template Uniform<vec3>;
//template Attribute<vec4>;
//template Attribute<ivec4>;
//template Attribute<quat>;
//template Attribute<mat4>;

// macro defined to create the same function.
#define UNIFORM_IMPL(gl_func, tType, dType) \
template<> \
void Uniform<tType>::Set(unsigned int slot, tType* data, unsigned int length) { \
    gl_func(slot, (GLsizei)length, (dType*)&data[0]); \
}

UNIFORM_IMPL(glUniform1iv, int, int)
//UNIFORM_IMPL(glUniform4iv, ivec4, int)
//UNIFORM_IMPL(glUniform2iv, ivec2, int)
UNIFORM_IMPL(glUniform1fv, float, float)
//UNIFORM_IMPL(glUniform2fv, vec2, float)
UNIFORM_IMPL(glUniform3fv, vec3, float)
//UNIFORM_IMPL(glUniform4fv, vec4, float)
//UNIFORM_IMPL(glUniform4fv, quat, float)

//template<>
//void Uniform<mat4>::Set(unsigned int slot, mat4* inputArray, unsigned int arrayLength) {
//	glUniformMatrix4fv(slot, (GLsizei)arrayLength, false, (float*)&inputArray[0]);
//}

template <typename T>
void Uniform<T>::Set(unsigned int slot, const T& value) {
	Set(slot, (T*)&value, 1);
}
