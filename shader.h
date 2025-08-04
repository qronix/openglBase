
#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h> // Get all required OpenGL headers

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader
{
    public:
    // The program ID
    unsigned int ID;

    // constructor builds and reads the shader
    Shader(const char* vertexPath, const char* fragmentPath);

    // use/activate the shader
    void use();

    // utility uniform functions
    void setBool(const std::string &name, bool value) const;
    void setInt(const std::string &name, int value) const;
    void setFloat(const std::string &name, float value) const;
};

#endif //SHADER_H
