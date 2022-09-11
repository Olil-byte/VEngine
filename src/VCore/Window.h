#include "pch.h"

#include <string_view>

class Window
{
public:
	Window(int width = 640, int height = 480, std::string_view title = "VEngine Window");
	~Window();

	int GetWidth() const;
	void SetWidth(int width);

	int GetHeight() const;
	void SetHeight(int width);

	glm::ivec2 GetSize() const;
	void SetSize(int width, int height);

	void SetTitle(const std::string_view title);

	void MakeContext();
	bool IsShouldClose();
	void SwapBuffers();

	void Maximaze();
	void Restore();

	void Hide();
	void Show();

	bool IsHide();
	bool IsShow();

	inline GLFWwindow* GetHandle() 
	{
		return window;
	}

private:
	GLFWwindow* window;

};

