#include "pch.h"
#include "Window.h"

Window::Window(int width, int height, std::string_view title) 
{
	window = glfwCreateWindow(width, height, title.data(), NULL, NULL);
}

Window::~Window()
{
	glfwDestroyWindow(window);
}
