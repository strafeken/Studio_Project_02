#include "Sun.h"
#include "SceneText.h" // For sin / cos

Sun::Sun()
{
	x = 0.f;
	y = 0.f;
	z = 0.f;
	angle = 0.f;
	intensity = 0.f;
}

Sun::~Sun()
{
}

float Sun::getX() const
{
	return x;
}

float Sun::getY() const
{
	return y;
}

float Sun::getZ() const
{
	return z;
}

float Sun::getAngle() const
{
	return angle;
}

float Sun::getIntensity() const
{
	return intensity;
}

void Sun::revolve(double dt)
{
	// When revolution is not complete
	if (angle < 360)
	{
		angle += float(dt);

		if (angle < 90)
		{
			intensity += float(dt / 20000);
		}
		// Set intensity to 0 at noon
		else if (angle > 85 && angle < 95)
		{
			intensity = 0.f;
		}
		else if (angle > 90 && angle < 180)
		{
			intensity += float(dt / 20000);
		}
		// Set intensity to 0 at night
		else
		{
			intensity = 0.f;
		}
	}
	// When one revolution is completed
	else
	{
		angle = 0;
	}

	//pi / 180
	x = 30 * float(cos(angle * 0.01745329251));
	y = 30 * float(sin(angle * 0.01745329251));
}