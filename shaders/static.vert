#version 330 core

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

in vec3 position;
in vec3 normal;
in vec3 texCoord;

out vec3 norm;
out vec3 fragpos;
out vec3 uv;

void main() {
	gl_Position = projection * view * model * vec4(position, 1.0);
	fragPos = vec3(model * vec(position, 1.0));
	norm = vec3(model * vec4(position, 0.0f));
	uv = texCoord;
}