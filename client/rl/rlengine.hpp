#ifndef RLENGINE_H
#define RLENGINE_H

#include "engine.hpp"
#include "uistate.hpp"

class RLEngine : public Engine {
    public:
        void InitializeRender(int width, int height) override;
        UIState uistate;
};

#endif