#pragma once

#include "Scene.h"
#include <MatrixStack.h>
#include "Mesh.h"

class SceneMenu : public Scene
{
private:
	enum GEOMETRY_TYPE
	{
		MENU_SCREEN,
		NUM_GEOMETRY,
	};

	unsigned m_vertexArrayID;

	Mesh* meshList[NUM_GEOMETRY];

	MS modelStack, viewStack, projectionStack;

	void RenderMesh(Mesh* mesh);

	void RenderMeshOnScreen(Mesh* mesh, float x, float y, float sizex, float sizey);

	virtual void InitMeshList() override;
public:
	SceneMenu();
	~SceneMenu();

	virtual void Init() override;
	virtual void Update(double dt) override;
	virtual void Render() override;
	virtual void Exit() override;
};