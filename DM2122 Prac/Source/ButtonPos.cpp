#include "ButtonPos.h"

Button::Button()
{
	wWidth = 800;
	wHeight = 600;

	setWidthHeight();
}

Button::~Button()
{
	//HELP ME
}

int Button::getWWidth()
{
	return wWidth;
}

int Button::getWHeight()
{
	return wHeight;
}

double Button::getMenuMinPosX() const
{
	return MenuMinPosX;
}

double Button::getMenuMaxPosX() const
{
	return MenuMaxPosX;
}

double Button::getMenuPlayMinPosY() const
{
	return MenuMinPosY[0];
}

double Button::getMenuPlayMaxPosY() const
{
	return MenuMaxPosY[0];
}

double Button::getMenuOptionsMinPosY() const
{
	return MenuMinPosY[1];
}

double Button::getMenuOptionsMaxPosY() const
{
	return MenuMaxPosY[1];
}

double Button::getMenuQuitMinPosY() const
{
	return MenuMinPosY[2];
}

double Button::getMenuQuitMaxPosY() const
{
	return MenuMaxPosY[2];
}

Button* Button::instance = nullptr;

Button* Button::getInstance()
{
	if (instance == nullptr)
	{
		instance = new Button;
	}
	return instance;
}

void Button::getWindowSize(GLFWwindow* m_window)
{
	// Updates wWidth and wHeight
	glfwGetWindowSize(m_window, &wWidth, &wHeight);

	setWidthHeight();
}

void Button::setWidthHeight()
{
	MenuMinPosX = (double)wWidth / 160 * (double)69;
	MenuMaxPosX = (double)wWidth / 16 * (double)9;

	MenuMinPosY[0] = (double)wHeight / 20 * (double)9;
	MenuMaxPosY[0] = (double)wHeight / 40 * (double)21;

	MenuMinPosY[1] = (double)wHeight / 40 * (double)23;
	MenuMaxPosY[1] = (double)wHeight / 20 * (double)13;

	MenuMinPosY[2] = (double)wHeight / 120 * (double)83;
	MenuMaxPosY[2] = (double)wHeight / 30 * (double)23;
}