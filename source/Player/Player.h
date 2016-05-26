// ******************************************************************************
// Filename:    Player.h
// Project:     Vogue
// Author:      Steven Ball
//
// Purpose:
//
// Revision History:
//   Initial Revision - 25/05/16
//
// Copyright (c) 2005-2016, Steven Ball
// ******************************************************************************

#pragma once

#include "../Maths/3dmaths.h"
#include "../Renderer/Renderer.h"


class Player
{
public:
	/* Public methods */
	Player(Renderer* pRenderer);
	~Player();

	// Rendering Helpers
	void CalculateWorldTransformMatrix();

	// Update
	void Update(float dt);

	// Render
    void Render();
	void RenderDebug();

protected:
	/* Protected methods */

private:
	/* Private methods */

public:
	/* Public members */

protected:
	/* Protected members */

private:
	/* Private members */
	Renderer* m_pRenderer;

	// Player position and movement variables
	vec3 m_position;
	vec3 m_velocity;
	vec3 m_force;

	// Store previous position each frame after we have worked out the new position
	// Used for collision and other movement calculations
	vec3 m_previousPosition;

	// The direction of gravity for the player
	vec3 m_gravityDirection;

	// Local axis
	vec3 m_forward;
	vec3 m_right;
	vec3 m_up;

	// Players world matrix
	Matrix4x4 m_worldMatrix;
};