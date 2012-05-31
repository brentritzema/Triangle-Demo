#include <GL/glew.h>
#include <Common/OpenGL.hpp>
#include <stdlib.h>
#include <GL/glfw.h>
#include <iostream>

using namespace std;

bool Init();
void Shut_Down(int return_code);
void Main_Loop(void);

int main()
{
    if(Init())
    {
        Main_Loop();
    }
    glfwTerminate();
    return 0;
}

bool Init()
{
    const int window_width = 800,
              window_height = 600;

    if (glfwInit() != GL_TRUE)
    {
        cout << "Failed to load glfw" << endl;
        return false;
    }

    else
    {
        // 800 x 600, 16 bit color, no depth, alpha or stencil buffers, windowed
        if (glfwOpenWindow(window_width, window_height, 5, 6, 5, 0, 0, 0, GLFW_WINDOW) != GL_TRUE)
        {
            cout << "Failed to open window" << endl;
            return false;
        }
        glfwSetWindowTitle("Triangle-Demo-1");
    }

    return true;
}


void Main_Loop(void)
{
    while(1)
    {
        if (glfwGetKey(GLFW_KEY_ESC) == GLFW_PRESS)
        {
            break;
        }

        // clear the buffer
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        // draw the figure
        //Draw();
        // swap back and front buffers
        glfwSwapBuffers();
    }
}

