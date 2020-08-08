#ifndef _H_SHADER_
#define _H_SHADER_
#include <map>
#include <string>



class Shader {
	private:
		unsigned int mHandle;

		std::map<std::string, unsigned int> mAttributes;
		std::map<std::string, unsigned int> mUniforms;
	private:
		Shader(const Shader&);
		Shader& operator=(const Shader&);

	private:
		std::string ReadFile(const std::string& path);
		unsigned int CompileVertexShader(const std::string& vertex);
		unsigned int CompileFragmentShader(const std::string& fragment);
		bool LinkShaders(unsigned int vertex, unsigned int fragment);
		void PopulateAttributes();
		void PopulateUniforms();

	public:
		Shader();
		Shader(const std::string& vertex, std::string& fragment);
		~Shader();

		void Load(const std::string& vertex, std::string& fragment);

		void Bind();
		void UnBind();

		unsigned int GetHandle();
		unsigned int GetAttribute(const std::string& name);
		unsigned int GetUniform(const std::string& name);

};

#endif // !_H_SHADER_
