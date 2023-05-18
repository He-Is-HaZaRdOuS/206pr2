#ifndef MAP_HPP
#define MAP_HPP

#include <vector>
#include <raylib.h>

class Map {
private:
	Texture2D mapTexture;

public:
    Map(int w, int h);
    Map();
    ~Map();
    void render();
    void scaleMapTexture(int w, int h);
    bool canMove(int x, int y);
};


#endif