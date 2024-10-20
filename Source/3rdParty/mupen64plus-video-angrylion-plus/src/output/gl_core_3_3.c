#ifndef GLES

#include "gl_core_3_3.h"
#include "gl_proc.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

void (CODEGEN_FUNCPTR *_ptrc_glBlendFunc)(GLenum sfactor, GLenum dfactor) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glClear)(GLbitfield mask) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glClearColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glClearDepth)(GLdouble depth) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glClearStencil)(GLint s) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glCullFace)(GLenum mode) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDepthFunc)(GLenum func) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDepthMask)(GLboolean flag) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDepthRange)(GLdouble ren_near, GLdouble ren_far) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDisable)(GLenum cap) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDrawBuffer)(GLenum buf) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glEnable)(GLenum cap) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glFinish)(void) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glFlush)(void) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glFrontFace)(GLenum mode) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetBooleanv)(GLenum pname, GLboolean * data) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetDoublev)(GLenum pname, GLdouble * data) = NULL;
GLenum (CODEGEN_FUNCPTR *_ptrc_glGetError)(void) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetFloatv)(GLenum pname, GLfloat * data) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetIntegerv)(GLenum pname, GLint * data) = NULL;
const GLubyte * (CODEGEN_FUNCPTR *_ptrc_glGetString)(GLenum name) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetTexImage)(GLenum target, GLint level, GLenum format, GLenum type, void * pixels) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetTexLevelParameterfv)(GLenum target, GLint level, GLenum pname, GLfloat * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetTexLevelParameteriv)(GLenum target, GLint level, GLenum pname, GLint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetTexParameterfv)(GLenum target, GLenum pname, GLfloat * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetTexParameteriv)(GLenum target, GLenum pname, GLint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glHint)(GLenum target, GLenum mode) = NULL;
GLboolean (CODEGEN_FUNCPTR *_ptrc_glIsEnabled)(GLenum cap) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glLineWidth)(GLfloat width) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glLogicOp)(GLenum opcode) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glPixelStoref)(GLenum pname, GLfloat param) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glPixelStorei)(GLenum pname, GLint param) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glPointSize)(GLfloat size) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glPolygonMode)(GLenum face, GLenum mode) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glReadBuffer)(GLenum src) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glScissor)(GLint x, GLint y, GLsizei width, GLsizei height) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glStencilFunc)(GLenum func, GLint ref, GLuint mask) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glStencilMask)(GLuint mask) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glStencilOp)(GLenum fail, GLenum zfail, GLenum zpass) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexImage1D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexImage2D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexParameterf)(GLenum target, GLenum pname, GLfloat param) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexParameterfv)(GLenum target, GLenum pname, const GLfloat * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexParameteri)(GLenum target, GLenum pname, GLint param) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexParameteriv)(GLenum target, GLenum pname, const GLint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glViewport)(GLint x, GLint y, GLsizei width, GLsizei height) = NULL;

void (CODEGEN_FUNCPTR *_ptrc_glBindTexture)(GLenum target, GLuint texture) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glCopyTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glCopyTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDeleteTextures)(GLsizei n, const GLuint * textures) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDrawArrays)(GLenum mode, GLint first, GLsizei count) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDrawElements)(GLenum mode, GLsizei count, GLenum type, const void * indices) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGenTextures)(GLsizei n, GLuint * textures) = NULL;
GLboolean (CODEGEN_FUNCPTR *_ptrc_glIsTexture)(GLuint texture) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glPolygonOffset)(GLfloat factor, GLfloat units) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels) = NULL;

void (CODEGEN_FUNCPTR *_ptrc_glCopyTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDrawRangeElements)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexImage3D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void * pixels) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void * pixels) = NULL;

void (CODEGEN_FUNCPTR *_ptrc_glActiveTexture)(GLenum texture) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glCompressedTexImage1D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void * data) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glCompressedTexImage3D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glCompressedTexSubImage1D)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void * data) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glCompressedTexSubImage3D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetCompressedTexImage)(GLenum target, GLint level, void * img) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glSampleCoverage)(GLfloat value, GLboolean invert) = NULL;

void (CODEGEN_FUNCPTR *_ptrc_glBlendColor)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBlendEquation)(GLenum mode) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBlendFuncSeparate)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glMultiDrawArrays)(GLenum mode, const GLint * first, const GLsizei * count, GLsizei drawcount) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glMultiDrawElements)(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glPointParameterf)(GLenum pname, GLfloat param) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glPointParameterfv)(GLenum pname, const GLfloat * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glPointParameteri)(GLenum pname, GLint param) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glPointParameteriv)(GLenum pname, const GLint * params) = NULL;

void (CODEGEN_FUNCPTR *_ptrc_glBeginQuery)(GLenum target, GLuint id) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBindBuffer)(GLenum target, GLuint buffer) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBufferData)(GLenum target, GLsizeiptr size, const void * data, GLenum usage) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, const void * data) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDeleteBuffers)(GLsizei n, const GLuint * buffers) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDeleteQueries)(GLsizei n, const GLuint * ids) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glEndQuery)(GLenum target) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGenBuffers)(GLsizei n, GLuint * buffers) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGenQueries)(GLsizei n, GLuint * ids) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetBufferParameteriv)(GLenum target, GLenum pname, GLint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetBufferPointerv)(GLenum target, GLenum pname, void ** params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, void * data) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetQueryObjectiv)(GLuint id, GLenum pname, GLint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetQueryObjectuiv)(GLuint id, GLenum pname, GLuint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetQueryiv)(GLenum target, GLenum pname, GLint * params) = NULL;
GLboolean (CODEGEN_FUNCPTR *_ptrc_glIsBuffer)(GLuint buffer) = NULL;
GLboolean (CODEGEN_FUNCPTR *_ptrc_glIsQuery)(GLuint id) = NULL;
void * (CODEGEN_FUNCPTR *_ptrc_glMapBuffer)(GLenum target, GLenum access) = NULL;
GLboolean (CODEGEN_FUNCPTR *_ptrc_glUnmapBuffer)(GLenum target) = NULL;

void (CODEGEN_FUNCPTR *_ptrc_glAttachShader)(GLuint program, GLuint shader) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBindAttribLocation)(GLuint program, GLuint index, const GLchar * name) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBlendEquationSeparate)(GLenum modeRGB, GLenum modeAlpha) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glCompileShader)(GLuint shader) = NULL;
GLuint (CODEGEN_FUNCPTR *_ptrc_glCreateProgram)(void) = NULL;
GLuint (CODEGEN_FUNCPTR *_ptrc_glCreateShader)(GLenum type) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDeleteProgram)(GLuint program) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDeleteShader)(GLuint shader) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDetachShader)(GLuint program, GLuint shader) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDisableVertexAttribArray)(GLuint index) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDrawBuffers)(GLsizei n, const GLenum * bufs) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glEnableVertexAttribArray)(GLuint index) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetActiveAttrib)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetActiveUniform)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLint * size, GLenum * type, GLchar * name) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetAttachedShaders)(GLuint program, GLsizei maxCount, GLsizei * count, GLuint * shaders) = NULL;
GLint (CODEGEN_FUNCPTR *_ptrc_glGetAttribLocation)(GLuint program, const GLchar * name) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetProgramInfoLog)(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetProgramiv)(GLuint program, GLenum pname, GLint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetShaderInfoLog)(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetShaderSource)(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * source) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetShaderiv)(GLuint shader, GLenum pname, GLint * params) = NULL;
GLint (CODEGEN_FUNCPTR *_ptrc_glGetUniformLocation)(GLuint program, const GLchar * name) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetUniformfv)(GLuint program, GLint location, GLfloat * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetUniformiv)(GLuint program, GLint location, GLint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetVertexAttribPointerv)(GLuint index, GLenum pname, void ** pointer) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetVertexAttribdv)(GLuint index, GLenum pname, GLdouble * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetVertexAttribfv)(GLuint index, GLenum pname, GLfloat * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetVertexAttribiv)(GLuint index, GLenum pname, GLint * params) = NULL;
GLboolean (CODEGEN_FUNCPTR *_ptrc_glIsProgram)(GLuint program) = NULL;
GLboolean (CODEGEN_FUNCPTR *_ptrc_glIsShader)(GLuint shader) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glLinkProgram)(GLuint program) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glShaderSource)(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glStencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glStencilMaskSeparate)(GLenum face, GLuint mask) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glStencilOpSeparate)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform1f)(GLint location, GLfloat v0) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform1fv)(GLint location, GLsizei count, const GLfloat * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform1i)(GLint location, GLint v0) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform1iv)(GLint location, GLsizei count, const GLint * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform2f)(GLint location, GLfloat v0, GLfloat v1) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform2fv)(GLint location, GLsizei count, const GLfloat * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform2i)(GLint location, GLint v0, GLint v1) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform2iv)(GLint location, GLsizei count, const GLint * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform3f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform3fv)(GLint location, GLsizei count, const GLfloat * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform3i)(GLint location, GLint v0, GLint v1, GLint v2) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform3iv)(GLint location, GLsizei count, const GLint * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform4f)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform4fv)(GLint location, GLsizei count, const GLfloat * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform4i)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform4iv)(GLint location, GLsizei count, const GLint * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniformMatrix2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniformMatrix3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUseProgram)(GLuint program) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glValidateProgram)(GLuint program) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib1d)(GLuint index, GLdouble x) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib1dv)(GLuint index, const GLdouble * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib1f)(GLuint index, GLfloat x) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib1fv)(GLuint index, const GLfloat * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib1s)(GLuint index, GLshort x) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib1sv)(GLuint index, const GLshort * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib2d)(GLuint index, GLdouble x, GLdouble y) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib2dv)(GLuint index, const GLdouble * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib2f)(GLuint index, GLfloat x, GLfloat y) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib2fv)(GLuint index, const GLfloat * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib2s)(GLuint index, GLshort x, GLshort y) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib2sv)(GLuint index, const GLshort * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib3d)(GLuint index, GLdouble x, GLdouble y, GLdouble z) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib3dv)(GLuint index, const GLdouble * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib3fv)(GLuint index, const GLfloat * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib3s)(GLuint index, GLshort x, GLshort y, GLshort z) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib3sv)(GLuint index, const GLshort * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4Nbv)(GLuint index, const GLbyte * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4Niv)(GLuint index, const GLint * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4Nsv)(GLuint index, const GLshort * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4Nub)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4Nubv)(GLuint index, const GLubyte * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4Nuiv)(GLuint index, const GLuint * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4Nusv)(GLuint index, const GLushort * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4bv)(GLuint index, const GLbyte * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4d)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4dv)(GLuint index, const GLdouble * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4fv)(GLuint index, const GLfloat * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4iv)(GLuint index, const GLint * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4s)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4sv)(GLuint index, const GLshort * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4ubv)(GLuint index, const GLubyte * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4uiv)(GLuint index, const GLuint * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttrib4usv)(GLuint index, const GLushort * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer) = NULL;

void (CODEGEN_FUNCPTR *_ptrc_glUniformMatrix2x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniformMatrix2x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniformMatrix3x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniformMatrix3x4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniformMatrix4x2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniformMatrix4x3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) = NULL;

void (CODEGEN_FUNCPTR *_ptrc_glBeginConditionalRender)(GLuint id, GLenum mode) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBeginTransformFeedback)(GLenum primitiveMode) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBindBufferBase)(GLenum target, GLuint index, GLuint buffer) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBindBufferRange)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBindFragDataLocation)(GLuint program, GLuint color, const GLchar * name) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBindFramebuffer)(GLenum target, GLuint framebuffer) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBindRenderbuffer)(GLenum target, GLuint renderbuffer) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBindVertexArray)(GLuint ren_array) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBlitFramebuffer)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) = NULL;
GLenum (CODEGEN_FUNCPTR *_ptrc_glCheckFramebufferStatus)(GLenum target) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glClampColor)(GLenum target, GLenum clamp) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glClearBufferfi)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glClearBufferfv)(GLenum buffer, GLint drawbuffer, const GLfloat * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glClearBufferiv)(GLenum buffer, GLint drawbuffer, const GLint * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glClearBufferuiv)(GLenum buffer, GLint drawbuffer, const GLuint * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glColorMaski)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDeleteFramebuffers)(GLsizei n, const GLuint * framebuffers) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDeleteRenderbuffers)(GLsizei n, const GLuint * renderbuffers) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDeleteVertexArrays)(GLsizei n, const GLuint * arrays) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDisablei)(GLenum target, GLuint index) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glEnablei)(GLenum target, GLuint index) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glEndConditionalRender)(void) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glEndTransformFeedback)(void) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glFlushMappedBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glFramebufferRenderbuffer)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glFramebufferTexture1D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glFramebufferTexture2D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glFramebufferTexture3D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glFramebufferTextureLayer)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGenFramebuffers)(GLsizei n, GLuint * framebuffers) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGenRenderbuffers)(GLsizei n, GLuint * renderbuffers) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGenVertexArrays)(GLsizei n, GLuint * arrays) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGenerateMipmap)(GLenum target) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetBooleani_v)(GLenum target, GLuint index, GLboolean * data) = NULL;
GLint (CODEGEN_FUNCPTR *_ptrc_glGetFragDataLocation)(GLuint program, const GLchar * name) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetFramebufferAttachmentParameteriv)(GLenum target, GLenum attachment, GLenum pname, GLint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetIntegeri_v)(GLenum target, GLuint index, GLint * data) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetRenderbufferParameteriv)(GLenum target, GLenum pname, GLint * params) = NULL;
const GLubyte * (CODEGEN_FUNCPTR *_ptrc_glGetStringi)(GLenum name, GLuint index) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetTexParameterIiv)(GLenum target, GLenum pname, GLint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetTexParameterIuiv)(GLenum target, GLenum pname, GLuint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetTransformFeedbackVarying)(GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type, GLchar * name) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetUniformuiv)(GLuint program, GLint location, GLuint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetVertexAttribIiv)(GLuint index, GLenum pname, GLint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetVertexAttribIuiv)(GLuint index, GLenum pname, GLuint * params) = NULL;
GLboolean (CODEGEN_FUNCPTR *_ptrc_glIsEnabledi)(GLenum target, GLuint index) = NULL;
GLboolean (CODEGEN_FUNCPTR *_ptrc_glIsFramebuffer)(GLuint framebuffer) = NULL;
GLboolean (CODEGEN_FUNCPTR *_ptrc_glIsRenderbuffer)(GLuint renderbuffer) = NULL;
GLboolean (CODEGEN_FUNCPTR *_ptrc_glIsVertexArray)(GLuint ren_array) = NULL;
void * (CODEGEN_FUNCPTR *_ptrc_glMapBufferRange)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glRenderbufferStorage)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glRenderbufferStorageMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexParameterIiv)(GLenum target, GLenum pname, const GLint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexParameterIuiv)(GLenum target, GLenum pname, const GLuint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTransformFeedbackVaryings)(GLuint program, GLsizei count, const GLchar *const* varyings, GLenum bufferMode) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform1ui)(GLint location, GLuint v0) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform1uiv)(GLint location, GLsizei count, const GLuint * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform2ui)(GLint location, GLuint v0, GLuint v1) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform2uiv)(GLint location, GLsizei count, const GLuint * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform3ui)(GLint location, GLuint v0, GLuint v1, GLuint v2) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform3uiv)(GLint location, GLsizei count, const GLuint * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform4ui)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniform4uiv)(GLint location, GLsizei count, const GLuint * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI1i)(GLuint index, GLint x) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI1iv)(GLuint index, const GLint * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI1ui)(GLuint index, GLuint x) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI1uiv)(GLuint index, const GLuint * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI2i)(GLuint index, GLint x, GLint y) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI2iv)(GLuint index, const GLint * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI2ui)(GLuint index, GLuint x, GLuint y) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI2uiv)(GLuint index, const GLuint * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI3i)(GLuint index, GLint x, GLint y, GLint z) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI3iv)(GLuint index, const GLint * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI3ui)(GLuint index, GLuint x, GLuint y, GLuint z) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI3uiv)(GLuint index, const GLuint * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI4bv)(GLuint index, const GLbyte * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI4i)(GLuint index, GLint x, GLint y, GLint z, GLint w) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI4iv)(GLuint index, const GLint * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI4sv)(GLuint index, const GLshort * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI4ubv)(GLuint index, const GLubyte * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI4ui)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI4uiv)(GLuint index, const GLuint * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribI4usv)(GLuint index, const GLushort * v) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribIPointer)(GLuint index, GLint size, GLenum type, GLsizei stride, const void * pointer) = NULL;

void (CODEGEN_FUNCPTR *_ptrc_glCopyBufferSubData)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDrawArraysInstanced)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDrawElementsInstanced)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetActiveUniformBlockName)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetActiveUniformBlockiv)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetActiveUniformName)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformName) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetActiveUniformsiv)(GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params) = NULL;
GLuint (CODEGEN_FUNCPTR *_ptrc_glGetUniformBlockIndex)(GLuint program, const GLchar * uniformBlockName) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetUniformIndices)(GLuint program, GLsizei uniformCount, const GLchar *const* uniformNames, GLuint * uniformIndices) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glPrimitiveRestartIndex)(GLuint index) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexBuffer)(GLenum target, GLenum internalformat, GLuint buffer) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glUniformBlockBinding)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) = NULL;

GLenum (CODEGEN_FUNCPTR *_ptrc_glClientWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDeleteSync)(GLsync sync) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDrawElementsBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLint basevertex) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDrawElementsInstancedBaseVertex)(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount, GLint basevertex) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDrawRangeElementsBaseVertex)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void * indices, GLint basevertex) = NULL;
GLsync (CODEGEN_FUNCPTR *_ptrc_glFenceSync)(GLenum condition, GLbitfield flags) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glFramebufferTexture)(GLenum target, GLenum attachment, GLuint texture, GLint level) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetBufferParameteri64v)(GLenum target, GLenum pname, GLint64 * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetInteger64i_v)(GLenum target, GLuint index, GLint64 * data) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetInteger64v)(GLenum pname, GLint64 * data) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetMultisamplefv)(GLenum pname, GLuint index, GLfloat * val) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetSynciv)(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values) = NULL;
GLboolean (CODEGEN_FUNCPTR *_ptrc_glIsSync)(GLsync sync) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glMultiDrawElementsBaseVertex)(GLenum mode, const GLsizei * count, GLenum type, const void *const* indices, GLsizei drawcount, const GLint * basevertex) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glProvokingVertex)(GLenum mode) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glSampleMaski)(GLuint maskNumber, GLbitfield mask) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexImage2DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glTexImage3DMultisample)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glWaitSync)(GLsync sync, GLbitfield flags, GLuint64 timeout) = NULL;

void (CODEGEN_FUNCPTR *_ptrc_glBindFragDataLocationIndexed)(GLuint program, GLuint colorNumber, GLuint index, const GLchar * name) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glBindSampler)(GLuint unit, GLuint sampler) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glDeleteSamplers)(GLsizei count, const GLuint * samplers) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGenSamplers)(GLsizei count, GLuint * samplers) = NULL;
GLint (CODEGEN_FUNCPTR *_ptrc_glGetFragDataIndex)(GLuint program, const GLchar * name) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetQueryObjecti64v)(GLuint id, GLenum pname, GLint64 * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetQueryObjectui64v)(GLuint id, GLenum pname, GLuint64 * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetSamplerParameterIiv)(GLuint sampler, GLenum pname, GLint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetSamplerParameterIuiv)(GLuint sampler, GLenum pname, GLuint * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetSamplerParameterfv)(GLuint sampler, GLenum pname, GLfloat * params) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glGetSamplerParameteriv)(GLuint sampler, GLenum pname, GLint * params) = NULL;
GLboolean (CODEGEN_FUNCPTR *_ptrc_glIsSampler)(GLuint sampler) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glQueryCounter)(GLuint id, GLenum target) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glSamplerParameterIiv)(GLuint sampler, GLenum pname, const GLint * param) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glSamplerParameterIuiv)(GLuint sampler, GLenum pname, const GLuint * param) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glSamplerParameterf)(GLuint sampler, GLenum pname, GLfloat param) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glSamplerParameterfv)(GLuint sampler, GLenum pname, const GLfloat * param) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glSamplerParameteri)(GLuint sampler, GLenum pname, GLint param) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glSamplerParameteriv)(GLuint sampler, GLenum pname, const GLint * param) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribDivisor)(GLuint index, GLuint divisor) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribP1ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribP1uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribP2ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribP2uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribP3ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribP3uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribP4ui)(GLuint index, GLenum type, GLboolean normalized, GLuint value) = NULL;
void (CODEGEN_FUNCPTR *_ptrc_glVertexAttribP4uiv)(GLuint index, GLenum type, GLboolean normalized, const GLuint * value) = NULL;

static int Load_Version_3_3(void)
{
	int numFailed = 0;
	if(!_ptrc_glBlendFunc)
		_ptrc_glBlendFunc = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum))IntGetProcAddress("glBlendFunc");
	if(!_ptrc_glBlendFunc) numFailed++;
	if(!_ptrc_glClear)
		_ptrc_glClear = (void (CODEGEN_FUNCPTR *)(GLbitfield))IntGetProcAddress("glClear");
	if(!_ptrc_glClear) numFailed++;
	if(!_ptrc_glClearColor)
		_ptrc_glClearColor = (void (CODEGEN_FUNCPTR *)(GLfloat, GLfloat, GLfloat, GLfloat))IntGetProcAddress("glClearColor");
	if(!_ptrc_glClearColor) numFailed++;
	if(!_ptrc_glClearDepth)
		_ptrc_glClearDepth = (void (CODEGEN_FUNCPTR *)(GLdouble))IntGetProcAddress("glClearDepth");
	if(!_ptrc_glClearDepth) numFailed++;
	if(!_ptrc_glClearStencil)
		_ptrc_glClearStencil = (void (CODEGEN_FUNCPTR *)(GLint))IntGetProcAddress("glClearStencil");
	if(!_ptrc_glClearStencil) numFailed++;
	if(!_ptrc_glColorMask)
		_ptrc_glColorMask = (void (CODEGEN_FUNCPTR *)(GLboolean, GLboolean, GLboolean, GLboolean))IntGetProcAddress("glColorMask");
	if(!_ptrc_glColorMask) numFailed++;
	if(!_ptrc_glCullFace)
		_ptrc_glCullFace = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glCullFace");
	if(!_ptrc_glCullFace) numFailed++;
	if(!_ptrc_glDepthFunc)
		_ptrc_glDepthFunc = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glDepthFunc");
	if(!_ptrc_glDepthFunc) numFailed++;
	if(!_ptrc_glDepthMask)
		_ptrc_glDepthMask = (void (CODEGEN_FUNCPTR *)(GLboolean))IntGetProcAddress("glDepthMask");
	if(!_ptrc_glDepthMask) numFailed++;
	if(!_ptrc_glDepthRange)
		_ptrc_glDepthRange = (void (CODEGEN_FUNCPTR *)(GLdouble, GLdouble))IntGetProcAddress("glDepthRange");
	if(!_ptrc_glDepthRange) numFailed++;
	if(!_ptrc_glDisable)
		_ptrc_glDisable = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glDisable");
	if(!_ptrc_glDisable) numFailed++;
	if(!_ptrc_glDrawBuffer)
		_ptrc_glDrawBuffer = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glDrawBuffer");
	if(!_ptrc_glDrawBuffer) numFailed++;
	if(!_ptrc_glEnable)
		_ptrc_glEnable = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glEnable");
	if(!_ptrc_glEnable) numFailed++;
	if(!_ptrc_glFinish)
		_ptrc_glFinish = (void (CODEGEN_FUNCPTR *)(void))IntGetProcAddress("glFinish");
	if(!_ptrc_glFinish) numFailed++;
	if(!_ptrc_glFlush)
		_ptrc_glFlush = (void (CODEGEN_FUNCPTR *)(void))IntGetProcAddress("glFlush");
	if(!_ptrc_glFlush) numFailed++;
	if(!_ptrc_glFrontFace)
		_ptrc_glFrontFace = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glFrontFace");
	if(!_ptrc_glFrontFace) numFailed++;
	if(!_ptrc_glGetBooleanv)
		_ptrc_glGetBooleanv = (void (CODEGEN_FUNCPTR *)(GLenum, GLboolean *))IntGetProcAddress("glGetBooleanv");
	if(!_ptrc_glGetBooleanv) numFailed++;
	if(!_ptrc_glGetDoublev)
		_ptrc_glGetDoublev = (void (CODEGEN_FUNCPTR *)(GLenum, GLdouble *))IntGetProcAddress("glGetDoublev");
	if(!_ptrc_glGetDoublev) numFailed++;
	if(!_ptrc_glGetError)
		_ptrc_glGetError = (GLenum (CODEGEN_FUNCPTR *)(void))IntGetProcAddress("glGetError");
	if(!_ptrc_glGetError) numFailed++;
	if(!_ptrc_glGetFloatv)
		_ptrc_glGetFloatv = (void (CODEGEN_FUNCPTR *)(GLenum, GLfloat *))IntGetProcAddress("glGetFloatv");
	if(!_ptrc_glGetFloatv) numFailed++;
	if(!_ptrc_glGetIntegerv)
		_ptrc_glGetIntegerv = (void (CODEGEN_FUNCPTR *)(GLenum, GLint *))IntGetProcAddress("glGetIntegerv");
	if(!_ptrc_glGetIntegerv) numFailed++;
	if(!_ptrc_glGetString)
		_ptrc_glGetString = (const GLubyte * (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glGetString");
	if(!_ptrc_glGetString) numFailed++;
	if(!_ptrc_glGetTexImage)
		_ptrc_glGetTexImage = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLenum, GLenum, void *))IntGetProcAddress("glGetTexImage");
	if(!_ptrc_glGetTexImage) numFailed++;
	if(!_ptrc_glGetTexLevelParameterfv)
		_ptrc_glGetTexLevelParameterfv = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLenum, GLfloat *))IntGetProcAddress("glGetTexLevelParameterfv");
	if(!_ptrc_glGetTexLevelParameterfv) numFailed++;
	if(!_ptrc_glGetTexLevelParameteriv)
		_ptrc_glGetTexLevelParameteriv = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLenum, GLint *))IntGetProcAddress("glGetTexLevelParameteriv");
	if(!_ptrc_glGetTexLevelParameteriv) numFailed++;
	if(!_ptrc_glGetTexParameterfv)
		_ptrc_glGetTexParameterfv = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLfloat *))IntGetProcAddress("glGetTexParameterfv");
	if(!_ptrc_glGetTexParameterfv) numFailed++;
	if(!_ptrc_glGetTexParameteriv)
		_ptrc_glGetTexParameteriv = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLint *))IntGetProcAddress("glGetTexParameteriv");
	if(!_ptrc_glGetTexParameteriv) numFailed++;
	if(!_ptrc_glHint)
		_ptrc_glHint = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum))IntGetProcAddress("glHint");
	if(!_ptrc_glHint) numFailed++;
	if(!_ptrc_glIsEnabled)
		_ptrc_glIsEnabled = (GLboolean (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glIsEnabled");
	if(!_ptrc_glIsEnabled) numFailed++;
	if(!_ptrc_glLineWidth)
		_ptrc_glLineWidth = (void (CODEGEN_FUNCPTR *)(GLfloat))IntGetProcAddress("glLineWidth");
	if(!_ptrc_glLineWidth) numFailed++;
	if(!_ptrc_glLogicOp)
		_ptrc_glLogicOp = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glLogicOp");
	if(!_ptrc_glLogicOp) numFailed++;
	if(!_ptrc_glPixelStoref)
		_ptrc_glPixelStoref = (void (CODEGEN_FUNCPTR *)(GLenum, GLfloat))IntGetProcAddress("glPixelStoref");
	if(!_ptrc_glPixelStoref) numFailed++;
	if(!_ptrc_glPixelStorei)
		_ptrc_glPixelStorei = (void (CODEGEN_FUNCPTR *)(GLenum, GLint))IntGetProcAddress("glPixelStorei");
	if(!_ptrc_glPixelStorei) numFailed++;
	if(!_ptrc_glPointSize)
		_ptrc_glPointSize = (void (CODEGEN_FUNCPTR *)(GLfloat))IntGetProcAddress("glPointSize");
	if(!_ptrc_glPointSize) numFailed++;
	if(!_ptrc_glPolygonMode)
		_ptrc_glPolygonMode = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum))IntGetProcAddress("glPolygonMode");
	if(!_ptrc_glPolygonMode) numFailed++;
	if(!_ptrc_glReadBuffer)
		_ptrc_glReadBuffer = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glReadBuffer");
	if(!_ptrc_glReadBuffer) numFailed++;
	if(!_ptrc_glReadPixels)
		_ptrc_glReadPixels = (void (CODEGEN_FUNCPTR *)(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, void *))IntGetProcAddress("glReadPixels");
	if(!_ptrc_glReadPixels) numFailed++;
	if(!_ptrc_glScissor)
		_ptrc_glScissor = (void (CODEGEN_FUNCPTR *)(GLint, GLint, GLsizei, GLsizei))IntGetProcAddress("glScissor");
	if(!_ptrc_glScissor) numFailed++;
	if(!_ptrc_glStencilFunc)
		_ptrc_glStencilFunc = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLuint))IntGetProcAddress("glStencilFunc");
	if(!_ptrc_glStencilFunc) numFailed++;
	if(!_ptrc_glStencilMask)
		_ptrc_glStencilMask = (void (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glStencilMask");
	if(!_ptrc_glStencilMask) numFailed++;
	if(!_ptrc_glStencilOp)
		_ptrc_glStencilOp = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLenum))IntGetProcAddress("glStencilOp");
	if(!_ptrc_glStencilOp) numFailed++;
	if(!_ptrc_glTexImage1D)
		_ptrc_glTexImage1D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLint, GLsizei, GLint, GLenum, GLenum, const void *))IntGetProcAddress("glTexImage1D");
	if(!_ptrc_glTexImage1D) numFailed++;
	if(!_ptrc_glTexImage2D)
		_ptrc_glTexImage2D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *))IntGetProcAddress("glTexImage2D");
	if(!_ptrc_glTexImage2D) numFailed++;
	if(!_ptrc_glTexParameterf)
		_ptrc_glTexParameterf = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLfloat))IntGetProcAddress("glTexParameterf");
	if(!_ptrc_glTexParameterf) numFailed++;
	if(!_ptrc_glTexParameterfv)
		_ptrc_glTexParameterfv = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, const GLfloat *))IntGetProcAddress("glTexParameterfv");
	if(!_ptrc_glTexParameterfv) numFailed++;
	if(!_ptrc_glTexParameteri)
		_ptrc_glTexParameteri = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLint))IntGetProcAddress("glTexParameteri");
	if(!_ptrc_glTexParameteri) numFailed++;
	if(!_ptrc_glTexParameteriv)
		_ptrc_glTexParameteriv = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, const GLint *))IntGetProcAddress("glTexParameteriv");
	if(!_ptrc_glTexParameteriv) numFailed++;
	if(!_ptrc_glViewport)
		_ptrc_glViewport = (void (CODEGEN_FUNCPTR *)(GLint, GLint, GLsizei, GLsizei))IntGetProcAddress("glViewport");
	if(!_ptrc_glViewport) numFailed++;
	if(!_ptrc_glBindTexture)
		_ptrc_glBindTexture = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint))IntGetProcAddress("glBindTexture");
	if(!_ptrc_glBindTexture) numFailed++;
	if(!_ptrc_glCopyTexImage1D)
		_ptrc_glCopyTexImage1D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLint))IntGetProcAddress("glCopyTexImage1D");
	if(!_ptrc_glCopyTexImage1D) numFailed++;
	if(!_ptrc_glCopyTexImage2D)
		_ptrc_glCopyTexImage2D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint))IntGetProcAddress("glCopyTexImage2D");
	if(!_ptrc_glCopyTexImage2D) numFailed++;
	if(!_ptrc_glCopyTexSubImage1D)
		_ptrc_glCopyTexSubImage1D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLint, GLint, GLint, GLsizei))IntGetProcAddress("glCopyTexSubImage1D");
	if(!_ptrc_glCopyTexSubImage1D) numFailed++;
	if(!_ptrc_glCopyTexSubImage2D)
		_ptrc_glCopyTexSubImage2D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))IntGetProcAddress("glCopyTexSubImage2D");
	if(!_ptrc_glCopyTexSubImage2D) numFailed++;
	if(!_ptrc_glDeleteTextures)
		_ptrc_glDeleteTextures = (void (CODEGEN_FUNCPTR *)(GLsizei, const GLuint *))IntGetProcAddress("glDeleteTextures");
	if(!_ptrc_glDeleteTextures) numFailed++;
	if(!_ptrc_glDrawArrays)
		_ptrc_glDrawArrays = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLsizei))IntGetProcAddress("glDrawArrays");
	if(!_ptrc_glDrawArrays) numFailed++;
	if(!_ptrc_glDrawElements)
		_ptrc_glDrawElements = (void (CODEGEN_FUNCPTR *)(GLenum, GLsizei, GLenum, const void *))IntGetProcAddress("glDrawElements");
	if(!_ptrc_glDrawElements) numFailed++;
	if(!_ptrc_glGenTextures)
		_ptrc_glGenTextures = (void (CODEGEN_FUNCPTR *)(GLsizei, GLuint *))IntGetProcAddress("glGenTextures");
	if(!_ptrc_glGenTextures) numFailed++;
	if(!_ptrc_glIsTexture)
		_ptrc_glIsTexture = (GLboolean (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glIsTexture");
	if(!_ptrc_glIsTexture) numFailed++;
	if(!_ptrc_glPolygonOffset)
		_ptrc_glPolygonOffset = (void (CODEGEN_FUNCPTR *)(GLfloat, GLfloat))IntGetProcAddress("glPolygonOffset");
	if(!_ptrc_glPolygonOffset) numFailed++;
	if(!_ptrc_glTexSubImage1D)
		_ptrc_glTexSubImage1D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLint, GLsizei, GLenum, GLenum, const void *))IntGetProcAddress("glTexSubImage1D");
	if(!_ptrc_glTexSubImage1D) numFailed++;
	if(!_ptrc_glTexSubImage2D)
		_ptrc_glTexSubImage2D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const void *))IntGetProcAddress("glTexSubImage2D");
	if(!_ptrc_glTexSubImage2D) numFailed++;
	if(!_ptrc_glCopyTexSubImage3D)
		_ptrc_glCopyTexSubImage3D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei))IntGetProcAddress("glCopyTexSubImage3D");
	if(!_ptrc_glCopyTexSubImage3D) numFailed++;
	if(!_ptrc_glDrawRangeElements)
		_ptrc_glDrawRangeElements = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *))IntGetProcAddress("glDrawRangeElements");
	if(!_ptrc_glDrawRangeElements) numFailed++;
	if(!_ptrc_glTexImage3D)
		_ptrc_glTexImage3D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *))IntGetProcAddress("glTexImage3D");
	if(!_ptrc_glTexImage3D) numFailed++;
	if(!_ptrc_glTexSubImage3D)
		_ptrc_glTexSubImage3D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *))IntGetProcAddress("glTexSubImage3D");
	if(!_ptrc_glTexSubImage3D) numFailed++;
	if(!_ptrc_glActiveTexture)
		_ptrc_glActiveTexture = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glActiveTexture");
	if(!_ptrc_glActiveTexture) numFailed++;
	if(!_ptrc_glCompressedTexImage1D)
		_ptrc_glCompressedTexImage1D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLenum, GLsizei, GLint, GLsizei, const void *))IntGetProcAddress("glCompressedTexImage1D");
	if(!_ptrc_glCompressedTexImage1D) numFailed++;
	if(!_ptrc_glCompressedTexImage2D)
		_ptrc_glCompressedTexImage2D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *))IntGetProcAddress("glCompressedTexImage2D");
	if(!_ptrc_glCompressedTexImage2D) numFailed++;
	if(!_ptrc_glCompressedTexImage3D)
		_ptrc_glCompressedTexImage3D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *))IntGetProcAddress("glCompressedTexImage3D");
	if(!_ptrc_glCompressedTexImage3D) numFailed++;
	if(!_ptrc_glCompressedTexSubImage1D)
		_ptrc_glCompressedTexSubImage1D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLint, GLsizei, GLenum, GLsizei, const void *))IntGetProcAddress("glCompressedTexSubImage1D");
	if(!_ptrc_glCompressedTexSubImage1D) numFailed++;
	if(!_ptrc_glCompressedTexSubImage2D)
		_ptrc_glCompressedTexSubImage2D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *))IntGetProcAddress("glCompressedTexSubImage2D");
	if(!_ptrc_glCompressedTexSubImage2D) numFailed++;
	if(!_ptrc_glCompressedTexSubImage3D)
		_ptrc_glCompressedTexSubImage3D = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *))IntGetProcAddress("glCompressedTexSubImage3D");
	if(!_ptrc_glCompressedTexSubImage3D) numFailed++;
	if(!_ptrc_glGetCompressedTexImage)
		_ptrc_glGetCompressedTexImage = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, void *))IntGetProcAddress("glGetCompressedTexImage");
	if(!_ptrc_glGetCompressedTexImage) numFailed++;
	if(!_ptrc_glSampleCoverage)
		_ptrc_glSampleCoverage = (void (CODEGEN_FUNCPTR *)(GLfloat, GLboolean))IntGetProcAddress("glSampleCoverage");
	if(!_ptrc_glSampleCoverage) numFailed++;
	if(!_ptrc_glBlendColor)
		_ptrc_glBlendColor = (void (CODEGEN_FUNCPTR *)(GLfloat, GLfloat, GLfloat, GLfloat))IntGetProcAddress("glBlendColor");
	if(!_ptrc_glBlendColor) numFailed++;
	if(!_ptrc_glBlendEquation)
		_ptrc_glBlendEquation = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glBlendEquation");
	if(!_ptrc_glBlendEquation) numFailed++;
	if(!_ptrc_glBlendFuncSeparate)
		_ptrc_glBlendFuncSeparate = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLenum, GLenum))IntGetProcAddress("glBlendFuncSeparate");
	if(!_ptrc_glBlendFuncSeparate) numFailed++;
	if(!_ptrc_glMultiDrawArrays)
		_ptrc_glMultiDrawArrays = (void (CODEGEN_FUNCPTR *)(GLenum, const GLint *, const GLsizei *, GLsizei))IntGetProcAddress("glMultiDrawArrays");
	if(!_ptrc_glMultiDrawArrays) numFailed++;
	if(!_ptrc_glMultiDrawElements)
		_ptrc_glMultiDrawElements = (void (CODEGEN_FUNCPTR *)(GLenum, const GLsizei *, GLenum, const void *const*, GLsizei))IntGetProcAddress("glMultiDrawElements");
	if(!_ptrc_glMultiDrawElements) numFailed++;
	if(!_ptrc_glPointParameterf)
		_ptrc_glPointParameterf = (void (CODEGEN_FUNCPTR *)(GLenum, GLfloat))IntGetProcAddress("glPointParameterf");
	if(!_ptrc_glPointParameterf) numFailed++;
	if(!_ptrc_glPointParameterfv)
		_ptrc_glPointParameterfv = (void (CODEGEN_FUNCPTR *)(GLenum, const GLfloat *))IntGetProcAddress("glPointParameterfv");
	if(!_ptrc_glPointParameterfv) numFailed++;
	if(!_ptrc_glPointParameteri)
		_ptrc_glPointParameteri = (void (CODEGEN_FUNCPTR *)(GLenum, GLint))IntGetProcAddress("glPointParameteri");
	if(!_ptrc_glPointParameteri) numFailed++;
	if(!_ptrc_glPointParameteriv)
		_ptrc_glPointParameteriv = (void (CODEGEN_FUNCPTR *)(GLenum, const GLint *))IntGetProcAddress("glPointParameteriv");
	if(!_ptrc_glPointParameteriv) numFailed++;
	if(!_ptrc_glBeginQuery)
		_ptrc_glBeginQuery = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint))IntGetProcAddress("glBeginQuery");
	if(!_ptrc_glBeginQuery) numFailed++;
	if(!_ptrc_glBindBuffer)
		_ptrc_glBindBuffer = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint))IntGetProcAddress("glBindBuffer");
	if(!_ptrc_glBindBuffer) numFailed++;
	if(!_ptrc_glBufferData)
		_ptrc_glBufferData = (void (CODEGEN_FUNCPTR *)(GLenum, GLsizeiptr, const void *, GLenum))IntGetProcAddress("glBufferData");
	if(!_ptrc_glBufferData) numFailed++;
	if(!_ptrc_glBufferSubData)
		_ptrc_glBufferSubData = (void (CODEGEN_FUNCPTR *)(GLenum, GLintptr, GLsizeiptr, const void *))IntGetProcAddress("glBufferSubData");
	if(!_ptrc_glBufferSubData) numFailed++;
	if(!_ptrc_glDeleteBuffers)
		_ptrc_glDeleteBuffers = (void (CODEGEN_FUNCPTR *)(GLsizei, const GLuint *))IntGetProcAddress("glDeleteBuffers");
	if(!_ptrc_glDeleteBuffers) numFailed++;
	if(!_ptrc_glDeleteQueries)
		_ptrc_glDeleteQueries = (void (CODEGEN_FUNCPTR *)(GLsizei, const GLuint *))IntGetProcAddress("glDeleteQueries");
	if(!_ptrc_glDeleteQueries) numFailed++;
	if(!_ptrc_glEndQuery)
		_ptrc_glEndQuery = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glEndQuery");
	if(!_ptrc_glEndQuery) numFailed++;
	if(!_ptrc_glGenBuffers)
		_ptrc_glGenBuffers = (void (CODEGEN_FUNCPTR *)(GLsizei, GLuint *))IntGetProcAddress("glGenBuffers");
	if(!_ptrc_glGenBuffers) numFailed++;
	if(!_ptrc_glGenQueries)
		_ptrc_glGenQueries = (void (CODEGEN_FUNCPTR *)(GLsizei, GLuint *))IntGetProcAddress("glGenQueries");
	if(!_ptrc_glGenQueries) numFailed++;
	if(!_ptrc_glGetBufferParameteriv)
		_ptrc_glGetBufferParameteriv = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLint *))IntGetProcAddress("glGetBufferParameteriv");
	if(!_ptrc_glGetBufferParameteriv) numFailed++;
	if(!_ptrc_glGetBufferPointerv)
		_ptrc_glGetBufferPointerv = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, void **))IntGetProcAddress("glGetBufferPointerv");
	if(!_ptrc_glGetBufferPointerv) numFailed++;
	if(!_ptrc_glGetBufferSubData)
		_ptrc_glGetBufferSubData = (void (CODEGEN_FUNCPTR *)(GLenum, GLintptr, GLsizeiptr, void *))IntGetProcAddress("glGetBufferSubData");
	if(!_ptrc_glGetBufferSubData) numFailed++;
	if(!_ptrc_glGetQueryObjectiv)
		_ptrc_glGetQueryObjectiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLint *))IntGetProcAddress("glGetQueryObjectiv");
	if(!_ptrc_glGetQueryObjectiv) numFailed++;
	if(!_ptrc_glGetQueryObjectuiv)
		_ptrc_glGetQueryObjectuiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLuint *))IntGetProcAddress("glGetQueryObjectuiv");
	if(!_ptrc_glGetQueryObjectuiv) numFailed++;
	if(!_ptrc_glGetQueryiv)
		_ptrc_glGetQueryiv = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLint *))IntGetProcAddress("glGetQueryiv");
	if(!_ptrc_glGetQueryiv) numFailed++;
	if(!_ptrc_glIsBuffer)
		_ptrc_glIsBuffer = (GLboolean (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glIsBuffer");
	if(!_ptrc_glIsBuffer) numFailed++;
	if(!_ptrc_glIsQuery)
		_ptrc_glIsQuery = (GLboolean (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glIsQuery");
	if(!_ptrc_glIsQuery) numFailed++;
	if(!_ptrc_glMapBuffer)
		_ptrc_glMapBuffer = (void * (CODEGEN_FUNCPTR *)(GLenum, GLenum))IntGetProcAddress("glMapBuffer");
	if(!_ptrc_glMapBuffer) numFailed++;
	if(!_ptrc_glUnmapBuffer)
		_ptrc_glUnmapBuffer = (GLboolean (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glUnmapBuffer");
	if(!_ptrc_glUnmapBuffer) numFailed++;
	if(!_ptrc_glAttachShader)
		_ptrc_glAttachShader = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint))IntGetProcAddress("glAttachShader");
	if(!_ptrc_glAttachShader) numFailed++;
	if(!_ptrc_glBindAttribLocation)
		_ptrc_glBindAttribLocation = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint, const GLchar *))IntGetProcAddress("glBindAttribLocation");
	if(!_ptrc_glBindAttribLocation) numFailed++;
	if(!_ptrc_glBlendEquationSeparate)
		_ptrc_glBlendEquationSeparate = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum))IntGetProcAddress("glBlendEquationSeparate");
	if(!_ptrc_glBlendEquationSeparate) numFailed++;
	if(!_ptrc_glCompileShader)
		_ptrc_glCompileShader = (void (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glCompileShader");
	if(!_ptrc_glCompileShader) numFailed++;
	if(!_ptrc_glCreateProgram)
		_ptrc_glCreateProgram = (GLuint (CODEGEN_FUNCPTR *)(void))IntGetProcAddress("glCreateProgram");
	if(!_ptrc_glCreateProgram) numFailed++;
	if(!_ptrc_glCreateShader)
		_ptrc_glCreateShader = (GLuint (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glCreateShader");
	if(!_ptrc_glCreateShader) numFailed++;
	if(!_ptrc_glDeleteProgram)
		_ptrc_glDeleteProgram = (void (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glDeleteProgram");
	if(!_ptrc_glDeleteProgram) numFailed++;
	if(!_ptrc_glDeleteShader)
		_ptrc_glDeleteShader = (void (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glDeleteShader");
	if(!_ptrc_glDeleteShader) numFailed++;
	if(!_ptrc_glDetachShader)
		_ptrc_glDetachShader = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint))IntGetProcAddress("glDetachShader");
	if(!_ptrc_glDetachShader) numFailed++;
	if(!_ptrc_glDisableVertexAttribArray)
		_ptrc_glDisableVertexAttribArray = (void (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glDisableVertexAttribArray");
	if(!_ptrc_glDisableVertexAttribArray) numFailed++;
	if(!_ptrc_glDrawBuffers)
		_ptrc_glDrawBuffers = (void (CODEGEN_FUNCPTR *)(GLsizei, const GLenum *))IntGetProcAddress("glDrawBuffers");
	if(!_ptrc_glDrawBuffers) numFailed++;
	if(!_ptrc_glEnableVertexAttribArray)
		_ptrc_glEnableVertexAttribArray = (void (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glEnableVertexAttribArray");
	if(!_ptrc_glEnableVertexAttribArray) numFailed++;
	if(!_ptrc_glGetActiveAttrib)
		_ptrc_glGetActiveAttrib = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *))IntGetProcAddress("glGetActiveAttrib");
	if(!_ptrc_glGetActiveAttrib) numFailed++;
	if(!_ptrc_glGetActiveUniform)
		_ptrc_glGetActiveUniform = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, GLchar *))IntGetProcAddress("glGetActiveUniform");
	if(!_ptrc_glGetActiveUniform) numFailed++;
	if(!_ptrc_glGetAttachedShaders)
		_ptrc_glGetAttachedShaders = (void (CODEGEN_FUNCPTR *)(GLuint, GLsizei, GLsizei *, GLuint *))IntGetProcAddress("glGetAttachedShaders");
	if(!_ptrc_glGetAttachedShaders) numFailed++;
	if(!_ptrc_glGetAttribLocation)
		_ptrc_glGetAttribLocation = (GLint (CODEGEN_FUNCPTR *)(GLuint, const GLchar *))IntGetProcAddress("glGetAttribLocation");
	if(!_ptrc_glGetAttribLocation) numFailed++;
	if(!_ptrc_glGetProgramInfoLog)
		_ptrc_glGetProgramInfoLog = (void (CODEGEN_FUNCPTR *)(GLuint, GLsizei, GLsizei *, GLchar *))IntGetProcAddress("glGetProgramInfoLog");
	if(!_ptrc_glGetProgramInfoLog) numFailed++;
	if(!_ptrc_glGetProgramiv)
		_ptrc_glGetProgramiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLint *))IntGetProcAddress("glGetProgramiv");
	if(!_ptrc_glGetProgramiv) numFailed++;
	if(!_ptrc_glGetShaderInfoLog)
		_ptrc_glGetShaderInfoLog = (void (CODEGEN_FUNCPTR *)(GLuint, GLsizei, GLsizei *, GLchar *))IntGetProcAddress("glGetShaderInfoLog");
	if(!_ptrc_glGetShaderInfoLog) numFailed++;
	if(!_ptrc_glGetShaderSource)
		_ptrc_glGetShaderSource = (void (CODEGEN_FUNCPTR *)(GLuint, GLsizei, GLsizei *, GLchar *))IntGetProcAddress("glGetShaderSource");
	if(!_ptrc_glGetShaderSource) numFailed++;
	if(!_ptrc_glGetShaderiv)
		_ptrc_glGetShaderiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLint *))IntGetProcAddress("glGetShaderiv");
	if(!_ptrc_glGetShaderiv) numFailed++;
	if(!_ptrc_glGetUniformLocation)
		_ptrc_glGetUniformLocation = (GLint (CODEGEN_FUNCPTR *)(GLuint, const GLchar *))IntGetProcAddress("glGetUniformLocation");
	if(!_ptrc_glGetUniformLocation) numFailed++;
	if(!_ptrc_glGetUniformfv)
		_ptrc_glGetUniformfv = (void (CODEGEN_FUNCPTR *)(GLuint, GLint, GLfloat *))IntGetProcAddress("glGetUniformfv");
	if(!_ptrc_glGetUniformfv) numFailed++;
	if(!_ptrc_glGetUniformiv)
		_ptrc_glGetUniformiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLint, GLint *))IntGetProcAddress("glGetUniformiv");
	if(!_ptrc_glGetUniformiv) numFailed++;
	if(!_ptrc_glGetVertexAttribPointerv)
		_ptrc_glGetVertexAttribPointerv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, void **))IntGetProcAddress("glGetVertexAttribPointerv");
	if(!_ptrc_glGetVertexAttribPointerv) numFailed++;
	if(!_ptrc_glGetVertexAttribdv)
		_ptrc_glGetVertexAttribdv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLdouble *))IntGetProcAddress("glGetVertexAttribdv");
	if(!_ptrc_glGetVertexAttribdv) numFailed++;
	if(!_ptrc_glGetVertexAttribfv)
		_ptrc_glGetVertexAttribfv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLfloat *))IntGetProcAddress("glGetVertexAttribfv");
	if(!_ptrc_glGetVertexAttribfv) numFailed++;
	if(!_ptrc_glGetVertexAttribiv)
		_ptrc_glGetVertexAttribiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLint *))IntGetProcAddress("glGetVertexAttribiv");
	if(!_ptrc_glGetVertexAttribiv) numFailed++;
	if(!_ptrc_glIsProgram)
		_ptrc_glIsProgram = (GLboolean (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glIsProgram");
	if(!_ptrc_glIsProgram) numFailed++;
	if(!_ptrc_glIsShader)
		_ptrc_glIsShader = (GLboolean (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glIsShader");
	if(!_ptrc_glIsShader) numFailed++;
	if(!_ptrc_glLinkProgram)
		_ptrc_glLinkProgram = (void (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glLinkProgram");
	if(!_ptrc_glLinkProgram) numFailed++;
	if(!_ptrc_glShaderSource)
		_ptrc_glShaderSource = (void (CODEGEN_FUNCPTR *)(GLuint, GLsizei, const GLchar *const*, const GLint *))IntGetProcAddress("glShaderSource");
	if(!_ptrc_glShaderSource) numFailed++;
	if(!_ptrc_glStencilFuncSeparate)
		_ptrc_glStencilFuncSeparate = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLint, GLuint))IntGetProcAddress("glStencilFuncSeparate");
	if(!_ptrc_glStencilFuncSeparate) numFailed++;
	if(!_ptrc_glStencilMaskSeparate)
		_ptrc_glStencilMaskSeparate = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint))IntGetProcAddress("glStencilMaskSeparate");
	if(!_ptrc_glStencilMaskSeparate) numFailed++;
	if(!_ptrc_glStencilOpSeparate)
		_ptrc_glStencilOpSeparate = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLenum, GLenum))IntGetProcAddress("glStencilOpSeparate");
	if(!_ptrc_glStencilOpSeparate) numFailed++;
	if(!_ptrc_glUniform1f)
		_ptrc_glUniform1f = (void (CODEGEN_FUNCPTR *)(GLint, GLfloat))IntGetProcAddress("glUniform1f");
	if(!_ptrc_glUniform1f) numFailed++;
	if(!_ptrc_glUniform1fv)
		_ptrc_glUniform1fv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, const GLfloat *))IntGetProcAddress("glUniform1fv");
	if(!_ptrc_glUniform1fv) numFailed++;
	if(!_ptrc_glUniform1i)
		_ptrc_glUniform1i = (void (CODEGEN_FUNCPTR *)(GLint, GLint))IntGetProcAddress("glUniform1i");
	if(!_ptrc_glUniform1i) numFailed++;
	if(!_ptrc_glUniform1iv)
		_ptrc_glUniform1iv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, const GLint *))IntGetProcAddress("glUniform1iv");
	if(!_ptrc_glUniform1iv) numFailed++;
	if(!_ptrc_glUniform2f)
		_ptrc_glUniform2f = (void (CODEGEN_FUNCPTR *)(GLint, GLfloat, GLfloat))IntGetProcAddress("glUniform2f");
	if(!_ptrc_glUniform2f) numFailed++;
	if(!_ptrc_glUniform2fv)
		_ptrc_glUniform2fv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, const GLfloat *))IntGetProcAddress("glUniform2fv");
	if(!_ptrc_glUniform2fv) numFailed++;
	if(!_ptrc_glUniform2i)
		_ptrc_glUniform2i = (void (CODEGEN_FUNCPTR *)(GLint, GLint, GLint))IntGetProcAddress("glUniform2i");
	if(!_ptrc_glUniform2i) numFailed++;
	if(!_ptrc_glUniform2iv)
		_ptrc_glUniform2iv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, const GLint *))IntGetProcAddress("glUniform2iv");
	if(!_ptrc_glUniform2iv) numFailed++;
	if(!_ptrc_glUniform3f)
		_ptrc_glUniform3f = (void (CODEGEN_FUNCPTR *)(GLint, GLfloat, GLfloat, GLfloat))IntGetProcAddress("glUniform3f");
	if(!_ptrc_glUniform3f) numFailed++;
	if(!_ptrc_glUniform3fv)
		_ptrc_glUniform3fv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, const GLfloat *))IntGetProcAddress("glUniform3fv");
	if(!_ptrc_glUniform3fv) numFailed++;
	if(!_ptrc_glUniform3i)
		_ptrc_glUniform3i = (void (CODEGEN_FUNCPTR *)(GLint, GLint, GLint, GLint))IntGetProcAddress("glUniform3i");
	if(!_ptrc_glUniform3i) numFailed++;
	if(!_ptrc_glUniform3iv)
		_ptrc_glUniform3iv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, const GLint *))IntGetProcAddress("glUniform3iv");
	if(!_ptrc_glUniform3iv) numFailed++;
	if(!_ptrc_glUniform4f)
		_ptrc_glUniform4f = (void (CODEGEN_FUNCPTR *)(GLint, GLfloat, GLfloat, GLfloat, GLfloat))IntGetProcAddress("glUniform4f");
	if(!_ptrc_glUniform4f) numFailed++;
	if(!_ptrc_glUniform4fv)
		_ptrc_glUniform4fv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, const GLfloat *))IntGetProcAddress("glUniform4fv");
	if(!_ptrc_glUniform4fv) numFailed++;
	if(!_ptrc_glUniform4i)
		_ptrc_glUniform4i = (void (CODEGEN_FUNCPTR *)(GLint, GLint, GLint, GLint, GLint))IntGetProcAddress("glUniform4i");
	if(!_ptrc_glUniform4i) numFailed++;
	if(!_ptrc_glUniform4iv)
		_ptrc_glUniform4iv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, const GLint *))IntGetProcAddress("glUniform4iv");
	if(!_ptrc_glUniform4iv) numFailed++;
	if(!_ptrc_glUniformMatrix2fv)
		_ptrc_glUniformMatrix2fv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, GLboolean, const GLfloat *))IntGetProcAddress("glUniformMatrix2fv");
	if(!_ptrc_glUniformMatrix2fv) numFailed++;
	if(!_ptrc_glUniformMatrix3fv)
		_ptrc_glUniformMatrix3fv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, GLboolean, const GLfloat *))IntGetProcAddress("glUniformMatrix3fv");
	if(!_ptrc_glUniformMatrix3fv) numFailed++;
	if(!_ptrc_glUniformMatrix4fv)
		_ptrc_glUniformMatrix4fv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, GLboolean, const GLfloat *))IntGetProcAddress("glUniformMatrix4fv");
	if(!_ptrc_glUniformMatrix4fv) numFailed++;
	if(!_ptrc_glUseProgram)
		_ptrc_glUseProgram = (void (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glUseProgram");
	if(!_ptrc_glUseProgram) numFailed++;
	if(!_ptrc_glValidateProgram)
		_ptrc_glValidateProgram = (void (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glValidateProgram");
	if(!_ptrc_glValidateProgram) numFailed++;
	if(!_ptrc_glVertexAttrib1d)
		_ptrc_glVertexAttrib1d = (void (CODEGEN_FUNCPTR *)(GLuint, GLdouble))IntGetProcAddress("glVertexAttrib1d");
	if(!_ptrc_glVertexAttrib1d) numFailed++;
	if(!_ptrc_glVertexAttrib1dv)
		_ptrc_glVertexAttrib1dv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLdouble *))IntGetProcAddress("glVertexAttrib1dv");
	if(!_ptrc_glVertexAttrib1dv) numFailed++;
	if(!_ptrc_glVertexAttrib1f)
		_ptrc_glVertexAttrib1f = (void (CODEGEN_FUNCPTR *)(GLuint, GLfloat))IntGetProcAddress("glVertexAttrib1f");
	if(!_ptrc_glVertexAttrib1f) numFailed++;
	if(!_ptrc_glVertexAttrib1fv)
		_ptrc_glVertexAttrib1fv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLfloat *))IntGetProcAddress("glVertexAttrib1fv");
	if(!_ptrc_glVertexAttrib1fv) numFailed++;
	if(!_ptrc_glVertexAttrib1s)
		_ptrc_glVertexAttrib1s = (void (CODEGEN_FUNCPTR *)(GLuint, GLshort))IntGetProcAddress("glVertexAttrib1s");
	if(!_ptrc_glVertexAttrib1s) numFailed++;
	if(!_ptrc_glVertexAttrib1sv)
		_ptrc_glVertexAttrib1sv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLshort *))IntGetProcAddress("glVertexAttrib1sv");
	if(!_ptrc_glVertexAttrib1sv) numFailed++;
	if(!_ptrc_glVertexAttrib2d)
		_ptrc_glVertexAttrib2d = (void (CODEGEN_FUNCPTR *)(GLuint, GLdouble, GLdouble))IntGetProcAddress("glVertexAttrib2d");
	if(!_ptrc_glVertexAttrib2d) numFailed++;
	if(!_ptrc_glVertexAttrib2dv)
		_ptrc_glVertexAttrib2dv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLdouble *))IntGetProcAddress("glVertexAttrib2dv");
	if(!_ptrc_glVertexAttrib2dv) numFailed++;
	if(!_ptrc_glVertexAttrib2f)
		_ptrc_glVertexAttrib2f = (void (CODEGEN_FUNCPTR *)(GLuint, GLfloat, GLfloat))IntGetProcAddress("glVertexAttrib2f");
	if(!_ptrc_glVertexAttrib2f) numFailed++;
	if(!_ptrc_glVertexAttrib2fv)
		_ptrc_glVertexAttrib2fv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLfloat *))IntGetProcAddress("glVertexAttrib2fv");
	if(!_ptrc_glVertexAttrib2fv) numFailed++;
	if(!_ptrc_glVertexAttrib2s)
		_ptrc_glVertexAttrib2s = (void (CODEGEN_FUNCPTR *)(GLuint, GLshort, GLshort))IntGetProcAddress("glVertexAttrib2s");
	if(!_ptrc_glVertexAttrib2s) numFailed++;
	if(!_ptrc_glVertexAttrib2sv)
		_ptrc_glVertexAttrib2sv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLshort *))IntGetProcAddress("glVertexAttrib2sv");
	if(!_ptrc_glVertexAttrib2sv) numFailed++;
	if(!_ptrc_glVertexAttrib3d)
		_ptrc_glVertexAttrib3d = (void (CODEGEN_FUNCPTR *)(GLuint, GLdouble, GLdouble, GLdouble))IntGetProcAddress("glVertexAttrib3d");
	if(!_ptrc_glVertexAttrib3d) numFailed++;
	if(!_ptrc_glVertexAttrib3dv)
		_ptrc_glVertexAttrib3dv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLdouble *))IntGetProcAddress("glVertexAttrib3dv");
	if(!_ptrc_glVertexAttrib3dv) numFailed++;
	if(!_ptrc_glVertexAttrib3f)
		_ptrc_glVertexAttrib3f = (void (CODEGEN_FUNCPTR *)(GLuint, GLfloat, GLfloat, GLfloat))IntGetProcAddress("glVertexAttrib3f");
	if(!_ptrc_glVertexAttrib3f) numFailed++;
	if(!_ptrc_glVertexAttrib3fv)
		_ptrc_glVertexAttrib3fv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLfloat *))IntGetProcAddress("glVertexAttrib3fv");
	if(!_ptrc_glVertexAttrib3fv) numFailed++;
	if(!_ptrc_glVertexAttrib3s)
		_ptrc_glVertexAttrib3s = (void (CODEGEN_FUNCPTR *)(GLuint, GLshort, GLshort, GLshort))IntGetProcAddress("glVertexAttrib3s");
	if(!_ptrc_glVertexAttrib3s) numFailed++;
	if(!_ptrc_glVertexAttrib3sv)
		_ptrc_glVertexAttrib3sv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLshort *))IntGetProcAddress("glVertexAttrib3sv");
	if(!_ptrc_glVertexAttrib3sv) numFailed++;
	if(!_ptrc_glVertexAttrib4Nbv)
		_ptrc_glVertexAttrib4Nbv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLbyte *))IntGetProcAddress("glVertexAttrib4Nbv");
	if(!_ptrc_glVertexAttrib4Nbv) numFailed++;
	if(!_ptrc_glVertexAttrib4Niv)
		_ptrc_glVertexAttrib4Niv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLint *))IntGetProcAddress("glVertexAttrib4Niv");
	if(!_ptrc_glVertexAttrib4Niv) numFailed++;
	if(!_ptrc_glVertexAttrib4Nsv)
		_ptrc_glVertexAttrib4Nsv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLshort *))IntGetProcAddress("glVertexAttrib4Nsv");
	if(!_ptrc_glVertexAttrib4Nsv) numFailed++;
	if(!_ptrc_glVertexAttrib4Nub)
		_ptrc_glVertexAttrib4Nub = (void (CODEGEN_FUNCPTR *)(GLuint, GLubyte, GLubyte, GLubyte, GLubyte))IntGetProcAddress("glVertexAttrib4Nub");
	if(!_ptrc_glVertexAttrib4Nub) numFailed++;
	if(!_ptrc_glVertexAttrib4Nubv)
		_ptrc_glVertexAttrib4Nubv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLubyte *))IntGetProcAddress("glVertexAttrib4Nubv");
	if(!_ptrc_glVertexAttrib4Nubv) numFailed++;
	if(!_ptrc_glVertexAttrib4Nuiv)
		_ptrc_glVertexAttrib4Nuiv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLuint *))IntGetProcAddress("glVertexAttrib4Nuiv");
	if(!_ptrc_glVertexAttrib4Nuiv) numFailed++;
	if(!_ptrc_glVertexAttrib4Nusv)
		_ptrc_glVertexAttrib4Nusv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLushort *))IntGetProcAddress("glVertexAttrib4Nusv");
	if(!_ptrc_glVertexAttrib4Nusv) numFailed++;
	if(!_ptrc_glVertexAttrib4bv)
		_ptrc_glVertexAttrib4bv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLbyte *))IntGetProcAddress("glVertexAttrib4bv");
	if(!_ptrc_glVertexAttrib4bv) numFailed++;
	if(!_ptrc_glVertexAttrib4d)
		_ptrc_glVertexAttrib4d = (void (CODEGEN_FUNCPTR *)(GLuint, GLdouble, GLdouble, GLdouble, GLdouble))IntGetProcAddress("glVertexAttrib4d");
	if(!_ptrc_glVertexAttrib4d) numFailed++;
	if(!_ptrc_glVertexAttrib4dv)
		_ptrc_glVertexAttrib4dv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLdouble *))IntGetProcAddress("glVertexAttrib4dv");
	if(!_ptrc_glVertexAttrib4dv) numFailed++;
	if(!_ptrc_glVertexAttrib4f)
		_ptrc_glVertexAttrib4f = (void (CODEGEN_FUNCPTR *)(GLuint, GLfloat, GLfloat, GLfloat, GLfloat))IntGetProcAddress("glVertexAttrib4f");
	if(!_ptrc_glVertexAttrib4f) numFailed++;
	if(!_ptrc_glVertexAttrib4fv)
		_ptrc_glVertexAttrib4fv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLfloat *))IntGetProcAddress("glVertexAttrib4fv");
	if(!_ptrc_glVertexAttrib4fv) numFailed++;
	if(!_ptrc_glVertexAttrib4iv)
		_ptrc_glVertexAttrib4iv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLint *))IntGetProcAddress("glVertexAttrib4iv");
	if(!_ptrc_glVertexAttrib4iv) numFailed++;
	if(!_ptrc_glVertexAttrib4s)
		_ptrc_glVertexAttrib4s = (void (CODEGEN_FUNCPTR *)(GLuint, GLshort, GLshort, GLshort, GLshort))IntGetProcAddress("glVertexAttrib4s");
	if(!_ptrc_glVertexAttrib4s) numFailed++;
	if(!_ptrc_glVertexAttrib4sv)
		_ptrc_glVertexAttrib4sv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLshort *))IntGetProcAddress("glVertexAttrib4sv");
	if(!_ptrc_glVertexAttrib4sv) numFailed++;
	if(!_ptrc_glVertexAttrib4ubv)
		_ptrc_glVertexAttrib4ubv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLubyte *))IntGetProcAddress("glVertexAttrib4ubv");
	if(!_ptrc_glVertexAttrib4ubv) numFailed++;
	if(!_ptrc_glVertexAttrib4uiv)
		_ptrc_glVertexAttrib4uiv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLuint *))IntGetProcAddress("glVertexAttrib4uiv");
	if(!_ptrc_glVertexAttrib4uiv) numFailed++;
	if(!_ptrc_glVertexAttrib4usv)
		_ptrc_glVertexAttrib4usv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLushort *))IntGetProcAddress("glVertexAttrib4usv");
	if(!_ptrc_glVertexAttrib4usv) numFailed++;
	if(!_ptrc_glVertexAttribPointer)
		_ptrc_glVertexAttribPointer = (void (CODEGEN_FUNCPTR *)(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *))IntGetProcAddress("glVertexAttribPointer");
	if(!_ptrc_glVertexAttribPointer) numFailed++;
	if(!_ptrc_glUniformMatrix2x3fv)
		_ptrc_glUniformMatrix2x3fv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, GLboolean, const GLfloat *))IntGetProcAddress("glUniformMatrix2x3fv");
	if(!_ptrc_glUniformMatrix2x3fv) numFailed++;
	if(!_ptrc_glUniformMatrix2x4fv)
		_ptrc_glUniformMatrix2x4fv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, GLboolean, const GLfloat *))IntGetProcAddress("glUniformMatrix2x4fv");
	if(!_ptrc_glUniformMatrix2x4fv) numFailed++;
	if(!_ptrc_glUniformMatrix3x2fv)
		_ptrc_glUniformMatrix3x2fv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, GLboolean, const GLfloat *))IntGetProcAddress("glUniformMatrix3x2fv");
	if(!_ptrc_glUniformMatrix3x2fv) numFailed++;
	if(!_ptrc_glUniformMatrix3x4fv)
		_ptrc_glUniformMatrix3x4fv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, GLboolean, const GLfloat *))IntGetProcAddress("glUniformMatrix3x4fv");
	if(!_ptrc_glUniformMatrix3x4fv) numFailed++;
	if(!_ptrc_glUniformMatrix4x2fv)
		_ptrc_glUniformMatrix4x2fv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, GLboolean, const GLfloat *))IntGetProcAddress("glUniformMatrix4x2fv");
	if(!_ptrc_glUniformMatrix4x2fv) numFailed++;
	if(!_ptrc_glUniformMatrix4x3fv)
		_ptrc_glUniformMatrix4x3fv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, GLboolean, const GLfloat *))IntGetProcAddress("glUniformMatrix4x3fv");
	if(!_ptrc_glUniformMatrix4x3fv) numFailed++;
	if(!_ptrc_glBeginConditionalRender)
		_ptrc_glBeginConditionalRender = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum))IntGetProcAddress("glBeginConditionalRender");
	if(!_ptrc_glBeginConditionalRender) numFailed++;
	if(!_ptrc_glBeginTransformFeedback)
		_ptrc_glBeginTransformFeedback = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glBeginTransformFeedback");
	if(!_ptrc_glBeginTransformFeedback) numFailed++;
	if(!_ptrc_glBindBufferBase)
		_ptrc_glBindBufferBase = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint, GLuint))IntGetProcAddress("glBindBufferBase");
	if(!_ptrc_glBindBufferBase) numFailed++;
	if(!_ptrc_glBindBufferRange)
		_ptrc_glBindBufferRange = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr))IntGetProcAddress("glBindBufferRange");
	if(!_ptrc_glBindBufferRange) numFailed++;
	if(!_ptrc_glBindFragDataLocation)
		_ptrc_glBindFragDataLocation = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint, const GLchar *))IntGetProcAddress("glBindFragDataLocation");
	if(!_ptrc_glBindFragDataLocation) numFailed++;
	if(!_ptrc_glBindFramebuffer)
		_ptrc_glBindFramebuffer = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint))IntGetProcAddress("glBindFramebuffer");
	if(!_ptrc_glBindFramebuffer) numFailed++;
	if(!_ptrc_glBindRenderbuffer)
		_ptrc_glBindRenderbuffer = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint))IntGetProcAddress("glBindRenderbuffer");
	if(!_ptrc_glBindRenderbuffer) numFailed++;
	if(!_ptrc_glBindVertexArray)
		_ptrc_glBindVertexArray = (void (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glBindVertexArray");
	if(!_ptrc_glBindVertexArray) numFailed++;
	if(!_ptrc_glBlitFramebuffer)
		_ptrc_glBlitFramebuffer = (void (CODEGEN_FUNCPTR *)(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum))IntGetProcAddress("glBlitFramebuffer");
	if(!_ptrc_glBlitFramebuffer) numFailed++;
	if(!_ptrc_glCheckFramebufferStatus)
		_ptrc_glCheckFramebufferStatus = (GLenum (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glCheckFramebufferStatus");
	if(!_ptrc_glCheckFramebufferStatus) numFailed++;
	if(!_ptrc_glClampColor)
		_ptrc_glClampColor = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum))IntGetProcAddress("glClampColor");
	if(!_ptrc_glClampColor) numFailed++;
	if(!_ptrc_glClearBufferfi)
		_ptrc_glClearBufferfi = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLfloat, GLint))IntGetProcAddress("glClearBufferfi");
	if(!_ptrc_glClearBufferfi) numFailed++;
	if(!_ptrc_glClearBufferfv)
		_ptrc_glClearBufferfv = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, const GLfloat *))IntGetProcAddress("glClearBufferfv");
	if(!_ptrc_glClearBufferfv) numFailed++;
	if(!_ptrc_glClearBufferiv)
		_ptrc_glClearBufferiv = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, const GLint *))IntGetProcAddress("glClearBufferiv");
	if(!_ptrc_glClearBufferiv) numFailed++;
	if(!_ptrc_glClearBufferuiv)
		_ptrc_glClearBufferuiv = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, const GLuint *))IntGetProcAddress("glClearBufferuiv");
	if(!_ptrc_glClearBufferuiv) numFailed++;
	if(!_ptrc_glColorMaski)
		_ptrc_glColorMaski = (void (CODEGEN_FUNCPTR *)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean))IntGetProcAddress("glColorMaski");
	if(!_ptrc_glColorMaski) numFailed++;
	if(!_ptrc_glDeleteFramebuffers)
		_ptrc_glDeleteFramebuffers = (void (CODEGEN_FUNCPTR *)(GLsizei, const GLuint *))IntGetProcAddress("glDeleteFramebuffers");
	if(!_ptrc_glDeleteFramebuffers) numFailed++;
	if(!_ptrc_glDeleteRenderbuffers)
		_ptrc_glDeleteRenderbuffers = (void (CODEGEN_FUNCPTR *)(GLsizei, const GLuint *))IntGetProcAddress("glDeleteRenderbuffers");
	if(!_ptrc_glDeleteRenderbuffers) numFailed++;
	if(!_ptrc_glDeleteVertexArrays)
		_ptrc_glDeleteVertexArrays = (void (CODEGEN_FUNCPTR *)(GLsizei, const GLuint *))IntGetProcAddress("glDeleteVertexArrays");
	if(!_ptrc_glDeleteVertexArrays) numFailed++;
	if(!_ptrc_glDisablei)
		_ptrc_glDisablei = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint))IntGetProcAddress("glDisablei");
	if(!_ptrc_glDisablei) numFailed++;
	if(!_ptrc_glEnablei)
		_ptrc_glEnablei = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint))IntGetProcAddress("glEnablei");
	if(!_ptrc_glEnablei) numFailed++;
	if(!_ptrc_glEndConditionalRender)
		_ptrc_glEndConditionalRender = (void (CODEGEN_FUNCPTR *)(void))IntGetProcAddress("glEndConditionalRender");
	if(!_ptrc_glEndConditionalRender) numFailed++;
	if(!_ptrc_glEndTransformFeedback)
		_ptrc_glEndTransformFeedback = (void (CODEGEN_FUNCPTR *)(void))IntGetProcAddress("glEndTransformFeedback");
	if(!_ptrc_glEndTransformFeedback) numFailed++;
	if(!_ptrc_glFlushMappedBufferRange)
		_ptrc_glFlushMappedBufferRange = (void (CODEGEN_FUNCPTR *)(GLenum, GLintptr, GLsizeiptr))IntGetProcAddress("glFlushMappedBufferRange");
	if(!_ptrc_glFlushMappedBufferRange) numFailed++;
	if(!_ptrc_glFramebufferRenderbuffer)
		_ptrc_glFramebufferRenderbuffer = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLenum, GLuint))IntGetProcAddress("glFramebufferRenderbuffer");
	if(!_ptrc_glFramebufferRenderbuffer) numFailed++;
	if(!_ptrc_glFramebufferTexture1D)
		_ptrc_glFramebufferTexture1D = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLenum, GLuint, GLint))IntGetProcAddress("glFramebufferTexture1D");
	if(!_ptrc_glFramebufferTexture1D) numFailed++;
	if(!_ptrc_glFramebufferTexture2D)
		_ptrc_glFramebufferTexture2D = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLenum, GLuint, GLint))IntGetProcAddress("glFramebufferTexture2D");
	if(!_ptrc_glFramebufferTexture2D) numFailed++;
	if(!_ptrc_glFramebufferTexture3D)
		_ptrc_glFramebufferTexture3D = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLenum, GLuint, GLint, GLint))IntGetProcAddress("glFramebufferTexture3D");
	if(!_ptrc_glFramebufferTexture3D) numFailed++;
	if(!_ptrc_glFramebufferTextureLayer)
		_ptrc_glFramebufferTextureLayer = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLuint, GLint, GLint))IntGetProcAddress("glFramebufferTextureLayer");
	if(!_ptrc_glFramebufferTextureLayer) numFailed++;
	if(!_ptrc_glGenFramebuffers)
		_ptrc_glGenFramebuffers = (void (CODEGEN_FUNCPTR *)(GLsizei, GLuint *))IntGetProcAddress("glGenFramebuffers");
	if(!_ptrc_glGenFramebuffers) numFailed++;
	if(!_ptrc_glGenRenderbuffers)
		_ptrc_glGenRenderbuffers = (void (CODEGEN_FUNCPTR *)(GLsizei, GLuint *))IntGetProcAddress("glGenRenderbuffers");
	if(!_ptrc_glGenRenderbuffers) numFailed++;
	if(!_ptrc_glGenVertexArrays)
		_ptrc_glGenVertexArrays = (void (CODEGEN_FUNCPTR *)(GLsizei, GLuint *))IntGetProcAddress("glGenVertexArrays");
	if(!_ptrc_glGenVertexArrays) numFailed++;
	if(!_ptrc_glGenerateMipmap)
		_ptrc_glGenerateMipmap = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glGenerateMipmap");
	if(!_ptrc_glGenerateMipmap) numFailed++;
	if(!_ptrc_glGetBooleani_v)
		_ptrc_glGetBooleani_v = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint, GLboolean *))IntGetProcAddress("glGetBooleani_v");
	if(!_ptrc_glGetBooleani_v) numFailed++;
	if(!_ptrc_glGetFragDataLocation)
		_ptrc_glGetFragDataLocation = (GLint (CODEGEN_FUNCPTR *)(GLuint, const GLchar *))IntGetProcAddress("glGetFragDataLocation");
	if(!_ptrc_glGetFragDataLocation) numFailed++;
	if(!_ptrc_glGetFramebufferAttachmentParameteriv)
		_ptrc_glGetFramebufferAttachmentParameteriv = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLenum, GLint *))IntGetProcAddress("glGetFramebufferAttachmentParameteriv");
	if(!_ptrc_glGetFramebufferAttachmentParameteriv) numFailed++;
	if(!_ptrc_glGetIntegeri_v)
		_ptrc_glGetIntegeri_v = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint, GLint *))IntGetProcAddress("glGetIntegeri_v");
	if(!_ptrc_glGetIntegeri_v) numFailed++;
	if(!_ptrc_glGetRenderbufferParameteriv)
		_ptrc_glGetRenderbufferParameteriv = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLint *))IntGetProcAddress("glGetRenderbufferParameteriv");
	if(!_ptrc_glGetRenderbufferParameteriv) numFailed++;
	if(!_ptrc_glGetStringi)
		_ptrc_glGetStringi = (const GLubyte * (CODEGEN_FUNCPTR *)(GLenum, GLuint))IntGetProcAddress("glGetStringi");
	if(!_ptrc_glGetStringi) numFailed++;
	if(!_ptrc_glGetTexParameterIiv)
		_ptrc_glGetTexParameterIiv = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLint *))IntGetProcAddress("glGetTexParameterIiv");
	if(!_ptrc_glGetTexParameterIiv) numFailed++;
	if(!_ptrc_glGetTexParameterIuiv)
		_ptrc_glGetTexParameterIuiv = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLuint *))IntGetProcAddress("glGetTexParameterIuiv");
	if(!_ptrc_glGetTexParameterIuiv) numFailed++;
	if(!_ptrc_glGetTransformFeedbackVarying)
		_ptrc_glGetTransformFeedbackVarying = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *))IntGetProcAddress("glGetTransformFeedbackVarying");
	if(!_ptrc_glGetTransformFeedbackVarying) numFailed++;
	if(!_ptrc_glGetUniformuiv)
		_ptrc_glGetUniformuiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLint, GLuint *))IntGetProcAddress("glGetUniformuiv");
	if(!_ptrc_glGetUniformuiv) numFailed++;
	if(!_ptrc_glGetVertexAttribIiv)
		_ptrc_glGetVertexAttribIiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLint *))IntGetProcAddress("glGetVertexAttribIiv");
	if(!_ptrc_glGetVertexAttribIiv) numFailed++;
	if(!_ptrc_glGetVertexAttribIuiv)
		_ptrc_glGetVertexAttribIuiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLuint *))IntGetProcAddress("glGetVertexAttribIuiv");
	if(!_ptrc_glGetVertexAttribIuiv) numFailed++;
	if(!_ptrc_glIsEnabledi)
		_ptrc_glIsEnabledi = (GLboolean (CODEGEN_FUNCPTR *)(GLenum, GLuint))IntGetProcAddress("glIsEnabledi");
	if(!_ptrc_glIsEnabledi) numFailed++;
	if(!_ptrc_glIsFramebuffer)
		_ptrc_glIsFramebuffer = (GLboolean (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glIsFramebuffer");
	if(!_ptrc_glIsFramebuffer) numFailed++;
	if(!_ptrc_glIsRenderbuffer)
		_ptrc_glIsRenderbuffer = (GLboolean (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glIsRenderbuffer");
	if(!_ptrc_glIsRenderbuffer) numFailed++;
	if(!_ptrc_glIsVertexArray)
		_ptrc_glIsVertexArray = (GLboolean (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glIsVertexArray");
	if(!_ptrc_glIsVertexArray) numFailed++;
	if(!_ptrc_glMapBufferRange)
		_ptrc_glMapBufferRange = (void * (CODEGEN_FUNCPTR *)(GLenum, GLintptr, GLsizeiptr, GLbitfield))IntGetProcAddress("glMapBufferRange");
	if(!_ptrc_glMapBufferRange) numFailed++;
	if(!_ptrc_glRenderbufferStorage)
		_ptrc_glRenderbufferStorage = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLsizei, GLsizei))IntGetProcAddress("glRenderbufferStorage");
	if(!_ptrc_glRenderbufferStorage) numFailed++;
	if(!_ptrc_glRenderbufferStorageMultisample)
		_ptrc_glRenderbufferStorageMultisample = (void (CODEGEN_FUNCPTR *)(GLenum, GLsizei, GLenum, GLsizei, GLsizei))IntGetProcAddress("glRenderbufferStorageMultisample");
	if(!_ptrc_glRenderbufferStorageMultisample) numFailed++;
	if(!_ptrc_glTexParameterIiv)
		_ptrc_glTexParameterIiv = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, const GLint *))IntGetProcAddress("glTexParameterIiv");
	if(!_ptrc_glTexParameterIiv) numFailed++;
	if(!_ptrc_glTexParameterIuiv)
		_ptrc_glTexParameterIuiv = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, const GLuint *))IntGetProcAddress("glTexParameterIuiv");
	if(!_ptrc_glTexParameterIuiv) numFailed++;
	if(!_ptrc_glTransformFeedbackVaryings)
		_ptrc_glTransformFeedbackVaryings = (void (CODEGEN_FUNCPTR *)(GLuint, GLsizei, const GLchar *const*, GLenum))IntGetProcAddress("glTransformFeedbackVaryings");
	if(!_ptrc_glTransformFeedbackVaryings) numFailed++;
	if(!_ptrc_glUniform1ui)
		_ptrc_glUniform1ui = (void (CODEGEN_FUNCPTR *)(GLint, GLuint))IntGetProcAddress("glUniform1ui");
	if(!_ptrc_glUniform1ui) numFailed++;
	if(!_ptrc_glUniform1uiv)
		_ptrc_glUniform1uiv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, const GLuint *))IntGetProcAddress("glUniform1uiv");
	if(!_ptrc_glUniform1uiv) numFailed++;
	if(!_ptrc_glUniform2ui)
		_ptrc_glUniform2ui = (void (CODEGEN_FUNCPTR *)(GLint, GLuint, GLuint))IntGetProcAddress("glUniform2ui");
	if(!_ptrc_glUniform2ui) numFailed++;
	if(!_ptrc_glUniform2uiv)
		_ptrc_glUniform2uiv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, const GLuint *))IntGetProcAddress("glUniform2uiv");
	if(!_ptrc_glUniform2uiv) numFailed++;
	if(!_ptrc_glUniform3ui)
		_ptrc_glUniform3ui = (void (CODEGEN_FUNCPTR *)(GLint, GLuint, GLuint, GLuint))IntGetProcAddress("glUniform3ui");
	if(!_ptrc_glUniform3ui) numFailed++;
	if(!_ptrc_glUniform3uiv)
		_ptrc_glUniform3uiv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, const GLuint *))IntGetProcAddress("glUniform3uiv");
	if(!_ptrc_glUniform3uiv) numFailed++;
	if(!_ptrc_glUniform4ui)
		_ptrc_glUniform4ui = (void (CODEGEN_FUNCPTR *)(GLint, GLuint, GLuint, GLuint, GLuint))IntGetProcAddress("glUniform4ui");
	if(!_ptrc_glUniform4ui) numFailed++;
	if(!_ptrc_glUniform4uiv)
		_ptrc_glUniform4uiv = (void (CODEGEN_FUNCPTR *)(GLint, GLsizei, const GLuint *))IntGetProcAddress("glUniform4uiv");
	if(!_ptrc_glUniform4uiv) numFailed++;
	if(!_ptrc_glVertexAttribI1i)
		_ptrc_glVertexAttribI1i = (void (CODEGEN_FUNCPTR *)(GLuint, GLint))IntGetProcAddress("glVertexAttribI1i");
	if(!_ptrc_glVertexAttribI1i) numFailed++;
	if(!_ptrc_glVertexAttribI1iv)
		_ptrc_glVertexAttribI1iv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLint *))IntGetProcAddress("glVertexAttribI1iv");
	if(!_ptrc_glVertexAttribI1iv) numFailed++;
	if(!_ptrc_glVertexAttribI1ui)
		_ptrc_glVertexAttribI1ui = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint))IntGetProcAddress("glVertexAttribI1ui");
	if(!_ptrc_glVertexAttribI1ui) numFailed++;
	if(!_ptrc_glVertexAttribI1uiv)
		_ptrc_glVertexAttribI1uiv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLuint *))IntGetProcAddress("glVertexAttribI1uiv");
	if(!_ptrc_glVertexAttribI1uiv) numFailed++;
	if(!_ptrc_glVertexAttribI2i)
		_ptrc_glVertexAttribI2i = (void (CODEGEN_FUNCPTR *)(GLuint, GLint, GLint))IntGetProcAddress("glVertexAttribI2i");
	if(!_ptrc_glVertexAttribI2i) numFailed++;
	if(!_ptrc_glVertexAttribI2iv)
		_ptrc_glVertexAttribI2iv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLint *))IntGetProcAddress("glVertexAttribI2iv");
	if(!_ptrc_glVertexAttribI2iv) numFailed++;
	if(!_ptrc_glVertexAttribI2ui)
		_ptrc_glVertexAttribI2ui = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint, GLuint))IntGetProcAddress("glVertexAttribI2ui");
	if(!_ptrc_glVertexAttribI2ui) numFailed++;
	if(!_ptrc_glVertexAttribI2uiv)
		_ptrc_glVertexAttribI2uiv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLuint *))IntGetProcAddress("glVertexAttribI2uiv");
	if(!_ptrc_glVertexAttribI2uiv) numFailed++;
	if(!_ptrc_glVertexAttribI3i)
		_ptrc_glVertexAttribI3i = (void (CODEGEN_FUNCPTR *)(GLuint, GLint, GLint, GLint))IntGetProcAddress("glVertexAttribI3i");
	if(!_ptrc_glVertexAttribI3i) numFailed++;
	if(!_ptrc_glVertexAttribI3iv)
		_ptrc_glVertexAttribI3iv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLint *))IntGetProcAddress("glVertexAttribI3iv");
	if(!_ptrc_glVertexAttribI3iv) numFailed++;
	if(!_ptrc_glVertexAttribI3ui)
		_ptrc_glVertexAttribI3ui = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint, GLuint, GLuint))IntGetProcAddress("glVertexAttribI3ui");
	if(!_ptrc_glVertexAttribI3ui) numFailed++;
	if(!_ptrc_glVertexAttribI3uiv)
		_ptrc_glVertexAttribI3uiv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLuint *))IntGetProcAddress("glVertexAttribI3uiv");
	if(!_ptrc_glVertexAttribI3uiv) numFailed++;
	if(!_ptrc_glVertexAttribI4bv)
		_ptrc_glVertexAttribI4bv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLbyte *))IntGetProcAddress("glVertexAttribI4bv");
	if(!_ptrc_glVertexAttribI4bv) numFailed++;
	if(!_ptrc_glVertexAttribI4i)
		_ptrc_glVertexAttribI4i = (void (CODEGEN_FUNCPTR *)(GLuint, GLint, GLint, GLint, GLint))IntGetProcAddress("glVertexAttribI4i");
	if(!_ptrc_glVertexAttribI4i) numFailed++;
	if(!_ptrc_glVertexAttribI4iv)
		_ptrc_glVertexAttribI4iv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLint *))IntGetProcAddress("glVertexAttribI4iv");
	if(!_ptrc_glVertexAttribI4iv) numFailed++;
	if(!_ptrc_glVertexAttribI4sv)
		_ptrc_glVertexAttribI4sv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLshort *))IntGetProcAddress("glVertexAttribI4sv");
	if(!_ptrc_glVertexAttribI4sv) numFailed++;
	if(!_ptrc_glVertexAttribI4ubv)
		_ptrc_glVertexAttribI4ubv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLubyte *))IntGetProcAddress("glVertexAttribI4ubv");
	if(!_ptrc_glVertexAttribI4ubv) numFailed++;
	if(!_ptrc_glVertexAttribI4ui)
		_ptrc_glVertexAttribI4ui = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint, GLuint, GLuint, GLuint))IntGetProcAddress("glVertexAttribI4ui");
	if(!_ptrc_glVertexAttribI4ui) numFailed++;
	if(!_ptrc_glVertexAttribI4uiv)
		_ptrc_glVertexAttribI4uiv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLuint *))IntGetProcAddress("glVertexAttribI4uiv");
	if(!_ptrc_glVertexAttribI4uiv) numFailed++;
	if(!_ptrc_glVertexAttribI4usv)
		_ptrc_glVertexAttribI4usv = (void (CODEGEN_FUNCPTR *)(GLuint, const GLushort *))IntGetProcAddress("glVertexAttribI4usv");
	if(!_ptrc_glVertexAttribI4usv) numFailed++;
	if(!_ptrc_glVertexAttribIPointer)
		_ptrc_glVertexAttribIPointer = (void (CODEGEN_FUNCPTR *)(GLuint, GLint, GLenum, GLsizei, const void *))IntGetProcAddress("glVertexAttribIPointer");
	if(!_ptrc_glVertexAttribIPointer) numFailed++;
	if(!_ptrc_glCopyBufferSubData)
		_ptrc_glCopyBufferSubData = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr))IntGetProcAddress("glCopyBufferSubData");
	if(!_ptrc_glCopyBufferSubData) numFailed++;
	if(!_ptrc_glDrawArraysInstanced)
		_ptrc_glDrawArraysInstanced = (void (CODEGEN_FUNCPTR *)(GLenum, GLint, GLsizei, GLsizei))IntGetProcAddress("glDrawArraysInstanced");
	if(!_ptrc_glDrawArraysInstanced) numFailed++;
	if(!_ptrc_glDrawElementsInstanced)
		_ptrc_glDrawElementsInstanced = (void (CODEGEN_FUNCPTR *)(GLenum, GLsizei, GLenum, const void *, GLsizei))IntGetProcAddress("glDrawElementsInstanced");
	if(!_ptrc_glDrawElementsInstanced) numFailed++;
	if(!_ptrc_glGetActiveUniformBlockName)
		_ptrc_glGetActiveUniformBlockName = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *))IntGetProcAddress("glGetActiveUniformBlockName");
	if(!_ptrc_glGetActiveUniformBlockName) numFailed++;
	if(!_ptrc_glGetActiveUniformBlockiv)
		_ptrc_glGetActiveUniformBlockiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint, GLenum, GLint *))IntGetProcAddress("glGetActiveUniformBlockiv");
	if(!_ptrc_glGetActiveUniformBlockiv) numFailed++;
	if(!_ptrc_glGetActiveUniformName)
		_ptrc_glGetActiveUniformName = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint, GLsizei, GLsizei *, GLchar *))IntGetProcAddress("glGetActiveUniformName");
	if(!_ptrc_glGetActiveUniformName) numFailed++;
	if(!_ptrc_glGetActiveUniformsiv)
		_ptrc_glGetActiveUniformsiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLsizei, const GLuint *, GLenum, GLint *))IntGetProcAddress("glGetActiveUniformsiv");
	if(!_ptrc_glGetActiveUniformsiv) numFailed++;
	if(!_ptrc_glGetUniformBlockIndex)
		_ptrc_glGetUniformBlockIndex = (GLuint (CODEGEN_FUNCPTR *)(GLuint, const GLchar *))IntGetProcAddress("glGetUniformBlockIndex");
	if(!_ptrc_glGetUniformBlockIndex) numFailed++;
	if(!_ptrc_glGetUniformIndices)
		_ptrc_glGetUniformIndices = (void (CODEGEN_FUNCPTR *)(GLuint, GLsizei, const GLchar *const*, GLuint *))IntGetProcAddress("glGetUniformIndices");
	if(!_ptrc_glGetUniformIndices) numFailed++;
	if(!_ptrc_glPrimitiveRestartIndex)
		_ptrc_glPrimitiveRestartIndex = (void (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glPrimitiveRestartIndex");
	if(!_ptrc_glPrimitiveRestartIndex) numFailed++;
	if(!_ptrc_glTexBuffer)
		_ptrc_glTexBuffer = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLuint))IntGetProcAddress("glTexBuffer");
	if(!_ptrc_glTexBuffer) numFailed++;
	if(!_ptrc_glUniformBlockBinding)
		_ptrc_glUniformBlockBinding = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint, GLuint))IntGetProcAddress("glUniformBlockBinding");
	if(!_ptrc_glUniformBlockBinding) numFailed++;
	if(!_ptrc_glClientWaitSync)
		_ptrc_glClientWaitSync = (GLenum (CODEGEN_FUNCPTR *)(GLsync, GLbitfield, GLuint64))IntGetProcAddress("glClientWaitSync");
	if(!_ptrc_glClientWaitSync) numFailed++;
	if(!_ptrc_glDeleteSync)
		_ptrc_glDeleteSync = (void (CODEGEN_FUNCPTR *)(GLsync))IntGetProcAddress("glDeleteSync");
	if(!_ptrc_glDeleteSync) numFailed++;
	if(!_ptrc_glDrawElementsBaseVertex)
		_ptrc_glDrawElementsBaseVertex = (void (CODEGEN_FUNCPTR *)(GLenum, GLsizei, GLenum, const void *, GLint))IntGetProcAddress("glDrawElementsBaseVertex");
	if(!_ptrc_glDrawElementsBaseVertex) numFailed++;
	if(!_ptrc_glDrawElementsInstancedBaseVertex)
		_ptrc_glDrawElementsInstancedBaseVertex = (void (CODEGEN_FUNCPTR *)(GLenum, GLsizei, GLenum, const void *, GLsizei, GLint))IntGetProcAddress("glDrawElementsInstancedBaseVertex");
	if(!_ptrc_glDrawElementsInstancedBaseVertex) numFailed++;
	if(!_ptrc_glDrawRangeElementsBaseVertex)
		_ptrc_glDrawRangeElementsBaseVertex = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint))IntGetProcAddress("glDrawRangeElementsBaseVertex");
	if(!_ptrc_glDrawRangeElementsBaseVertex) numFailed++;
	if(!_ptrc_glFenceSync)
		_ptrc_glFenceSync = (GLsync (CODEGEN_FUNCPTR *)(GLenum, GLbitfield))IntGetProcAddress("glFenceSync");
	if(!_ptrc_glFenceSync) numFailed++;
	if(!_ptrc_glFramebufferTexture)
		_ptrc_glFramebufferTexture = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLuint, GLint))IntGetProcAddress("glFramebufferTexture");
	if(!_ptrc_glFramebufferTexture) numFailed++;
	if(!_ptrc_glGetBufferParameteri64v)
		_ptrc_glGetBufferParameteri64v = (void (CODEGEN_FUNCPTR *)(GLenum, GLenum, GLint64 *))IntGetProcAddress("glGetBufferParameteri64v");
	if(!_ptrc_glGetBufferParameteri64v) numFailed++;
	if(!_ptrc_glGetInteger64i_v)
		_ptrc_glGetInteger64i_v = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint, GLint64 *))IntGetProcAddress("glGetInteger64i_v");
	if(!_ptrc_glGetInteger64i_v) numFailed++;
	if(!_ptrc_glGetInteger64v)
		_ptrc_glGetInteger64v = (void (CODEGEN_FUNCPTR *)(GLenum, GLint64 *))IntGetProcAddress("glGetInteger64v");
	if(!_ptrc_glGetInteger64v) numFailed++;
	if(!_ptrc_glGetMultisamplefv)
		_ptrc_glGetMultisamplefv = (void (CODEGEN_FUNCPTR *)(GLenum, GLuint, GLfloat *))IntGetProcAddress("glGetMultisamplefv");
	if(!_ptrc_glGetMultisamplefv) numFailed++;
	if(!_ptrc_glGetSynciv)
		_ptrc_glGetSynciv = (void (CODEGEN_FUNCPTR *)(GLsync, GLenum, GLsizei, GLsizei *, GLint *))IntGetProcAddress("glGetSynciv");
	if(!_ptrc_glGetSynciv) numFailed++;
	if(!_ptrc_glIsSync)
		_ptrc_glIsSync = (GLboolean (CODEGEN_FUNCPTR *)(GLsync))IntGetProcAddress("glIsSync");
	if(!_ptrc_glIsSync) numFailed++;
	if(!_ptrc_glMultiDrawElementsBaseVertex)
		_ptrc_glMultiDrawElementsBaseVertex = (void (CODEGEN_FUNCPTR *)(GLenum, const GLsizei *, GLenum, const void *const*, GLsizei, const GLint *))IntGetProcAddress("glMultiDrawElementsBaseVertex");
	if(!_ptrc_glMultiDrawElementsBaseVertex) numFailed++;
	if(!_ptrc_glProvokingVertex)
		_ptrc_glProvokingVertex = (void (CODEGEN_FUNCPTR *)(GLenum))IntGetProcAddress("glProvokingVertex");
	if(!_ptrc_glProvokingVertex) numFailed++;
	if(!_ptrc_glSampleMaski)
		_ptrc_glSampleMaski = (void (CODEGEN_FUNCPTR *)(GLuint, GLbitfield))IntGetProcAddress("glSampleMaski");
	if(!_ptrc_glSampleMaski) numFailed++;
	if(!_ptrc_glTexImage2DMultisample)
		_ptrc_glTexImage2DMultisample = (void (CODEGEN_FUNCPTR *)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean))IntGetProcAddress("glTexImage2DMultisample");
	if(!_ptrc_glTexImage2DMultisample) numFailed++;
	if(!_ptrc_glTexImage3DMultisample)
		_ptrc_glTexImage3DMultisample = (void (CODEGEN_FUNCPTR *)(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean))IntGetProcAddress("glTexImage3DMultisample");
	if(!_ptrc_glTexImage3DMultisample) numFailed++;
	if(!_ptrc_glWaitSync)
		_ptrc_glWaitSync = (void (CODEGEN_FUNCPTR *)(GLsync, GLbitfield, GLuint64))IntGetProcAddress("glWaitSync");
	if(!_ptrc_glWaitSync) numFailed++;
	if(!_ptrc_glBindFragDataLocationIndexed)
		_ptrc_glBindFragDataLocationIndexed = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint, GLuint, const GLchar *))IntGetProcAddress("glBindFragDataLocationIndexed");
	if(!_ptrc_glBindFragDataLocationIndexed) numFailed++;
	if(!_ptrc_glBindSampler)
		_ptrc_glBindSampler = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint))IntGetProcAddress("glBindSampler");
	if(!_ptrc_glBindSampler) numFailed++;
	if(!_ptrc_glDeleteSamplers)
		_ptrc_glDeleteSamplers = (void (CODEGEN_FUNCPTR *)(GLsizei, const GLuint *))IntGetProcAddress("glDeleteSamplers");
	if(!_ptrc_glDeleteSamplers) numFailed++;
	if(!_ptrc_glGenSamplers)
		_ptrc_glGenSamplers = (void (CODEGEN_FUNCPTR *)(GLsizei, GLuint *))IntGetProcAddress("glGenSamplers");
	if(!_ptrc_glGenSamplers) numFailed++;
	if(!_ptrc_glGetFragDataIndex)
		_ptrc_glGetFragDataIndex = (GLint (CODEGEN_FUNCPTR *)(GLuint, const GLchar *))IntGetProcAddress("glGetFragDataIndex");
	if(!_ptrc_glGetFragDataIndex) numFailed++;
	if(!_ptrc_glGetQueryObjecti64v)
		_ptrc_glGetQueryObjecti64v = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLint64 *))IntGetProcAddress("glGetQueryObjecti64v");
	if(!_ptrc_glGetQueryObjecti64v) numFailed++;
	if(!_ptrc_glGetQueryObjectui64v)
		_ptrc_glGetQueryObjectui64v = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLuint64 *))IntGetProcAddress("glGetQueryObjectui64v");
	if(!_ptrc_glGetQueryObjectui64v) numFailed++;
	if(!_ptrc_glGetSamplerParameterIiv)
		_ptrc_glGetSamplerParameterIiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLint *))IntGetProcAddress("glGetSamplerParameterIiv");
	if(!_ptrc_glGetSamplerParameterIiv) numFailed++;
	if(!_ptrc_glGetSamplerParameterIuiv)
		_ptrc_glGetSamplerParameterIuiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLuint *))IntGetProcAddress("glGetSamplerParameterIuiv");
	if(!_ptrc_glGetSamplerParameterIuiv) numFailed++;
	if(!_ptrc_glGetSamplerParameterfv)
		_ptrc_glGetSamplerParameterfv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLfloat *))IntGetProcAddress("glGetSamplerParameterfv");
	if(!_ptrc_glGetSamplerParameterfv) numFailed++;
	if(!_ptrc_glGetSamplerParameteriv)
		_ptrc_glGetSamplerParameteriv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLint *))IntGetProcAddress("glGetSamplerParameteriv");
	if(!_ptrc_glGetSamplerParameteriv) numFailed++;
	if(!_ptrc_glIsSampler)
		_ptrc_glIsSampler = (GLboolean (CODEGEN_FUNCPTR *)(GLuint))IntGetProcAddress("glIsSampler");
	if(!_ptrc_glIsSampler) numFailed++;
	if(!_ptrc_glQueryCounter)
		_ptrc_glQueryCounter = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum))IntGetProcAddress("glQueryCounter");
	if(!_ptrc_glQueryCounter) numFailed++;
	if(!_ptrc_glSamplerParameterIiv)
		_ptrc_glSamplerParameterIiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, const GLint *))IntGetProcAddress("glSamplerParameterIiv");
	if(!_ptrc_glSamplerParameterIiv) numFailed++;
	if(!_ptrc_glSamplerParameterIuiv)
		_ptrc_glSamplerParameterIuiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, const GLuint *))IntGetProcAddress("glSamplerParameterIuiv");
	if(!_ptrc_glSamplerParameterIuiv) numFailed++;
	if(!_ptrc_glSamplerParameterf)
		_ptrc_glSamplerParameterf = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLfloat))IntGetProcAddress("glSamplerParameterf");
	if(!_ptrc_glSamplerParameterf) numFailed++;
	if(!_ptrc_glSamplerParameterfv)
		_ptrc_glSamplerParameterfv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, const GLfloat *))IntGetProcAddress("glSamplerParameterfv");
	if(!_ptrc_glSamplerParameterfv) numFailed++;
	if(!_ptrc_glSamplerParameteri)
		_ptrc_glSamplerParameteri = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLint))IntGetProcAddress("glSamplerParameteri");
	if(!_ptrc_glSamplerParameteri) numFailed++;
	if(!_ptrc_glSamplerParameteriv)
		_ptrc_glSamplerParameteriv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, const GLint *))IntGetProcAddress("glSamplerParameteriv");
	if(!_ptrc_glSamplerParameteriv) numFailed++;
	if(!_ptrc_glVertexAttribDivisor)
		_ptrc_glVertexAttribDivisor = (void (CODEGEN_FUNCPTR *)(GLuint, GLuint))IntGetProcAddress("glVertexAttribDivisor");
	if(!_ptrc_glVertexAttribDivisor) numFailed++;
	if(!_ptrc_glVertexAttribP1ui)
		_ptrc_glVertexAttribP1ui = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLboolean, GLuint))IntGetProcAddress("glVertexAttribP1ui");
	if(!_ptrc_glVertexAttribP1ui) numFailed++;
	if(!_ptrc_glVertexAttribP1uiv)
		_ptrc_glVertexAttribP1uiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLboolean, const GLuint *))IntGetProcAddress("glVertexAttribP1uiv");
	if(!_ptrc_glVertexAttribP1uiv) numFailed++;
	if(!_ptrc_glVertexAttribP2ui)
		_ptrc_glVertexAttribP2ui = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLboolean, GLuint))IntGetProcAddress("glVertexAttribP2ui");
	if(!_ptrc_glVertexAttribP2ui) numFailed++;
	if(!_ptrc_glVertexAttribP2uiv)
		_ptrc_glVertexAttribP2uiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLboolean, const GLuint *))IntGetProcAddress("glVertexAttribP2uiv");
	if(!_ptrc_glVertexAttribP2uiv) numFailed++;
	if(!_ptrc_glVertexAttribP3ui)
		_ptrc_glVertexAttribP3ui = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLboolean, GLuint))IntGetProcAddress("glVertexAttribP3ui");
	if(!_ptrc_glVertexAttribP3ui) numFailed++;
	if(!_ptrc_glVertexAttribP3uiv)
		_ptrc_glVertexAttribP3uiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLboolean, const GLuint *))IntGetProcAddress("glVertexAttribP3uiv");
	if(!_ptrc_glVertexAttribP3uiv) numFailed++;
	if(!_ptrc_glVertexAttribP4ui)
		_ptrc_glVertexAttribP4ui = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLboolean, GLuint))IntGetProcAddress("glVertexAttribP4ui");
	if(!_ptrc_glVertexAttribP4ui) numFailed++;
	if(!_ptrc_glVertexAttribP4uiv)
		_ptrc_glVertexAttribP4uiv = (void (CODEGEN_FUNCPTR *)(GLuint, GLenum, GLboolean, const GLuint *))IntGetProcAddress("glVertexAttribP4uiv");
	if(!_ptrc_glVertexAttribP4uiv) numFailed++;
	return numFailed;
}

typedef int (*PFN_LOADFUNCPOINTERS)(void);
typedef struct ogl_StrToExtMap_s
{
	char *extensionName;
	int *extensionVariable;
	PFN_LOADFUNCPOINTERS LoadExtension;
} ogl_StrToExtMap;

static ogl_StrToExtMap ExtensionMap[1] = {
	{"", NULL, NULL},
};

static int g_extensionMapSize = 0;

static ogl_StrToExtMap *FindExtEntry(const char *extensionName)
{
	int loop;
	ogl_StrToExtMap *currLoc = ExtensionMap;
	for(loop = 0; loop < g_extensionMapSize; ++loop, ++currLoc)
	{
		if(strcmp(extensionName, currLoc->extensionName) == 0)
			return currLoc;
	}
	
	return NULL;
}

static void ClearExtensionVars(void)
{
}


static void LoadExtByName(const char *extensionName)
{
	ogl_StrToExtMap *entry = NULL;
	entry = FindExtEntry(extensionName);
	if(entry)
	{
		if(entry->LoadExtension)
		{
			int numFailed = entry->LoadExtension();
			if(numFailed == 0)
			{
				*(entry->extensionVariable) = ogl_LOAD_SUCCEEDED;
			}
			else
			{
				*(entry->extensionVariable) = ogl_LOAD_SUCCEEDED + numFailed;
			}
		}
		else
		{
			*(entry->extensionVariable) = ogl_LOAD_SUCCEEDED;
		}
	}
}


static void ProcExtsFromExtList(void)
{
	GLint iLoop;
	GLint iNumExtensions = 0;
	_ptrc_glGetIntegerv(GL_NUM_EXTENSIONS, &iNumExtensions);

	for(iLoop = 0; iLoop < iNumExtensions; iLoop++)
	{
		const char *strExtensionName = (const char *)_ptrc_glGetStringi(GL_EXTENSIONS, iLoop);
		LoadExtByName(strExtensionName);
	}
}

int ogl_LoadFunctions()
{
	int numFailed = 0;
	ClearExtensionVars();
	
	_ptrc_glGetIntegerv = (void (CODEGEN_FUNCPTR *)(GLenum, GLint *))IntGetProcAddress("glGetIntegerv");
	if(!_ptrc_glGetIntegerv) return ogl_LOAD_FAILED;
	_ptrc_glGetStringi = (const GLubyte * (CODEGEN_FUNCPTR *)(GLenum, GLuint))IntGetProcAddress("glGetStringi");
	if(!_ptrc_glGetStringi) return ogl_LOAD_FAILED;
	
	ProcExtsFromExtList();
	numFailed = Load_Version_3_3();
	
	if(numFailed == 0)
		return ogl_LOAD_SUCCEEDED;
	else
		return ogl_LOAD_SUCCEEDED + numFailed;
}

static int g_major_version = 0;
static int g_minor_version = 0;

static void GetGLVersion(void)
{
	glGetIntegerv(GL_MAJOR_VERSION, &g_major_version);
	glGetIntegerv(GL_MINOR_VERSION, &g_minor_version);
}

int ogl_GetMajorVersion(void)
{
	if(g_major_version == 0)
		GetGLVersion();
	return g_major_version;
}

int ogl_GetMinorVersion(void)
{
	if(g_major_version == 0) /*Yes, check the major version to get the minor one.*/
		GetGLVersion();
	return g_minor_version;
}

int ogl_IsVersionGEQ(int majorVersion, int minorVersion)
{
	if(g_major_version == 0)
		GetGLVersion();
	
	if(majorVersion < g_major_version) return 1;
	if(majorVersion > g_major_version) return 0;
	if(minorVersion <= g_minor_version) return 1;
	return 0;
}

#endif // GLES
