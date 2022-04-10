#pragma once

#include "EntityManager.h"

class GhostSpawner: public Entity{
    public:
        GhostSpawner(int, int, int , int, EntityManager*, ofImage);
        void spawnGhost(string);
        void keyPressed(int);
        void tick();
        //Random Ghost
        std::vector<string> colors;
    private:
        EntityManager* em;
        int spawnCounter = 30*5;
};