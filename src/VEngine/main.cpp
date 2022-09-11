#include "VCore/VCore.h"
#include "VCore/Window.h"

int main(int argc, char** argv) 
{
    Windows::Init();

    Window window;

    /* Make the window's context current */
    glfwMakeContextCurrent(window.GetHandle());

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window.GetHandle()))
    {
        /* Render here */

        /* Swap front and back buffers */
        glfwSwapBuffers(window.GetHandle());

        /* Poll for and process events */
        glfwPollEvents();
    }

    Windows::Terminate();
	return 0;
}