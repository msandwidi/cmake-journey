#include <iostream>
#include "adder.h"
#include "GLFW/glfw3.h"
#include "cmakebasicConfig.h"

int main(int argc, char **argv[])
{
    std::cout << "Hello, world! from cmake with lib\n";
    std::cout << "add 15 + 8 = " << add(15, 8);

    std::cout << argv[0] << " Version " << cmakebasic_VERSION_MAJOR << "." << cmakebasic_VERSION_MINOR << std::endl;

    GLFWwindow *window;

    if (!glfwInit())
    {
        fprintf(stderr, "Failed to initialize GLFW\n");
        exit(EXIT_FAILURE);
    }

    window = glfwCreateWindow(300, 300, "Gears", NULL, NULL);
    if (!window)
    {
        fprintf(stderr, "Failed to open GLFW window\n");
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    // Main loop
    while (!glfwWindowShouldClose(window))
    {
        // Draw gears
        // draw();

        // Update animation
        // animate();

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();
}
