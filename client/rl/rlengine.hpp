#ifndef RLENGINE_H
#define RLENGINE_H

#include "engine.hpp"

class RLEngine : public Engine {
    public:
        void InitializeRender(int width, int height) override;
};

#endif