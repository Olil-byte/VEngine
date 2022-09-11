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

int Window::GetWidth() const
{
	int width;
	glfwGetWindowSize(window, &width, nullptr);

	return width;
}

void Window::SetWidth(int width)
{
	glfwSetWindowSize(window, width, GetHeight());
}

int Window::GetHeight() const
{
	int height;
	glfwGetWindowSize(window, nullptr, &height);

	return height;
}

void Window::SetHeight(int height)
{
	glfwSetWindowSize(window, GetWidth(), height);
}

glm::ivec2 Window::GetSize() const
{
	int width;
	int height;
	glfwGetWindowSize(window, &width, &height);

	return glm::ivec2(width, height);
}

void Window::SetSize(int width, int height)
{
	glfwSetWindowSize(window, width, height);
}

void Window::SetTitle(const std::string_view title)
{
	glfwSetWindowTitle(window, title.data());
}

void Window::MakeContext()
{
	glfwMakeContextCurrent(window);
}

bool Window::IsShouldClose()
{
	return glfwWindowShouldClose(window);
}

void Window::SwapBuffers()
{
	glfwSwapBuffers(window);
}

void Window::Maximaze() 
{
	glfwMaximizeWindow(window);
}

void Window::Restore()
{
	glfwRestoreWindow(window);
}

void Window::Hide() 
{
	glfwHideWindow(window);
}

void Window::Show()
{
	glfwShowWindow(window);
}

bool Window::IsHide() 
{
	return !glfwGetWindowAttrib(window, GLFW_VISIBLE);
}

bool Window::IsShow()
{
	return glfwGetWindowAttrib(window, GLFW_VISIBLE);
}

