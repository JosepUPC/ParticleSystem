#ifndef __SCENE_H__
#define __SCENE_H__

#include "Module.h"
#include "ParticleSystem.h"
struct SDL_Texture;
using namespace std;

class Scene : public Module
{
public:

	Scene();

	// Destructor
	virtual ~Scene();

	// Called before render is available
	bool Awake();

	// Called before the first frame
	bool Start();

	// Called before all Updates
	bool PreUpdate();

	// Called each loop iteration
	bool Update(float dt);

	// Called before all Updates
	bool PostUpdate();

	// Called before quitting
	bool CleanUp();

private:
	SDL_Texture* debug_tex;
	pair<float, float> pos;
	pair<float, float> forc;
	MovableParticle* example;
	Emitter* emitter;
};

#endif // __SCENE_H__