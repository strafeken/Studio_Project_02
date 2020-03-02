#ifndef CAMERA_2_H
#define CAMERA_2_H

#include "Camera.h"
#include "ObjectManager.h"

class Camera2 : public Camera
{
public:
	Vector3 position;
	Vector3 target;
	Vector3 PrevPos;
	Vector3 PrevTarget;
	Vector3 up;

	Vector3 defaultPosition;
	Vector3 defaultTarget;
	Vector3 defaultUp;

	Vector3 posX;
	Vector3 posY;
	Vector3 posZ;

	int firstMouse;
	float lastX;
	float lastY;
	float yaw;
	float pitch;

	Camera2();
	~Camera2();
	virtual void Init(const Vector3& pos, const Vector3& target, const Vector3& up);
	virtual void Update(double dt);
	virtual void Update(double dt, ObjectManager* Objects);
	virtual void Update(double dt, Vector3 pos, Mtx44 rotation);
	virtual void Reset();


};

#endif