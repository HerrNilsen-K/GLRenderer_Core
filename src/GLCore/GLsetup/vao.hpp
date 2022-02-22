//
// Created by karl on 2/18/22.
//

#ifndef GLRENDERER_CORE_VAO_HPP
#define GLRENDERER_CORE_VAO_HPP

#include <GL/glew.h>

namespace vao {

    inline GLuint create(){
        GLuint buffer;
        glCreateVertexArrays(1, &buffer);
        return buffer;
    }

    inline GLuint destroy(GLuint buffer) {
        glDeleteVertexArrays(1, &buffer);
    }

    inline void bind(GLuint buffer){
        glBindVertexArray(buffer);
    }

}

#endif //GLRENDERER_CORE_VAO_HPP
