#ifndef SHADER_H
#define SHADER_H

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <glfw/glfw3.h>

class Shader {
public:
    // Constructor reads and builds the shader
    Shader(const char* vertexPath, const char* fragmentPath);

    // Use the shader
    void use();

    // Utility uniform functions
    void setBool(const std::string& name, bool value) const;
    void setInt(const std::string& name, int value) const;
    void setFloat(const std::string& name, float value) const;

private:
    // Shader program ID
    unsigned int ID;

    // Utility function for checking shader compilation/linking errors
    void checkCompileErrors(unsigned int shader, std::string type);
};

#endif