//
// Created by karl on 2/18/22.
//

#ifndef GLRENDERER_CORE_VBO_HPP
#define GLRENDERER_CORE_VBO_HPP

#include <GL/glew.h>

namespace vbo {

    inline GLuint create() {
        GLuint buffer;
        glCreateBuffers(1, &buffer);
        return buffer;
    }

    inline void deleteBuffer(GLuint buffer) {
        glDeleteBuffers(1, &buffer);
    }

    inline void bind(GLuint buffer) {
        glBindBuffer(GL_ARRAY_BUFFER, buffer);
    }

    //TODO: change void* data to modern c++
    inline void data(GLuint buffer, GLsizei size, const void* data) {
        glNamedBufferData(buffer, size, data, GL_STATIC_DRAW);
    }

}
#endif //GLRENDERER_CORE_VBO_HPP
