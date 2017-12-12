#ifndef PLAYINGSCENE_H_
#define PLAYINGSCENE_H_

// data
#include "../ECS Plus/Scene.h"
#include "../DirectX/_DIRECTX_Header.h"
#include "../ECS Plus/_ECS_Header.h"

// Components
#include "Velocity.h"
#include "SpriteComponent.h"
#include "AnimationComponent.h"
#include "PlayerControllable.h"
#include "Bound.h"
#include "Gravity.h"
#include "StateComponent.h"
<<<<<<< HEAD
#include "CollisionComponent.h"
=======
#include "MapComponent.h"
>>>>>>> c87c6e984a67814079691470b3dbbdcb4375d947

// Systems
#include "RenderingSystem.h"
#include "InputSystem.h"
#include "MovementSystem.h"
#include "AnimationSystem.h"
#include "StateSystem.h"
<<<<<<< HEAD
#include "CollisionSystem.h"

#include <sstream> 
=======
#include "MapSystem.h"
>>>>>>> c87c6e984a67814079691470b3dbbdcb4375d947
using namespace ECS;

class PlayingScene:public ECS::Scene
{
private:
	RenderingSystem renderSystem;
	InputSystem inputSystem;
	MovementSystem movementSystem;
	StateSystem stateSystem;
<<<<<<< HEAD
	CollisionSystem collsionSystem;
=======
	MapSystem mapSystem;
>>>>>>> c87c6e984a67814079691470b3dbbdcb4375d947
	AnimationSystem animationSystem=AnimationSystem(&inputSystem);
public:

	PlayingScene(string name);
	
	~PlayingScene();

	void update(float dt);

	void init();

	void render();

	void release();
};

#endif // !PLAYINGSCENE_H_



