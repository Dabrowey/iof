#ifndef ENGINE_H
#define ENGINE_H

#include "uistate.hpp"

class Engine {
    public:
        virtual void InitializeRender(int width, int height);
        UIState uistate;
};

#endif