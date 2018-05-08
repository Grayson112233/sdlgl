#ifndef ENTITY_H
#define ENTITY_H


class Scene;

// Class which has entities and manages an update+render loop
class Entity {

protected:

	Scene *scene;

public:

	virtual void update()=0;
	virtual void render()=0;
	
};

#endif