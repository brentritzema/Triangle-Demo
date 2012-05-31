#version 330 core

// Input vertex data, different for all executions of this shader.
layout(location = 0) in vec3 Position;

void main(){

	gl_Position.xyz = Position;

}

