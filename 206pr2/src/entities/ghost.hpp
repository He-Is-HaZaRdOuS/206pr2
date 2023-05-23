
#ifndef GHOST_H
#define GHOST_H

#include <vector>
#include <string>
#include "entity.hpp"

class Ghost : public Entity {
private:
	Texture2D texture;
	float speed = 1.0;
	int randomDir;
	float randomRange = 0.0;
	bool moveRight = false;
	bool moveLeft = false;
	bool moveUp = false;
	bool moveDown = false;
	void moveRandom();
public:
	Ghost();
	Ghost(std::string idDebug, Config *config);
	~Ghost();
	void update();
	void render();
	Rectangle getHitbox();
	bool isCaught;
	void reloadTexture();
	void operator + (const int& n);
};
#endif
