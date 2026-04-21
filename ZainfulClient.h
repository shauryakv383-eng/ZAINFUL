#pragma once
#include <iostream>
#include <string>
#include <vector>

namespace Zainful {
    class Client {
    public:
        static const std::string NAME;
        static const std::string VERSION;

        // Core Features
        bool isFlyActive;
        float speedMultiplier;
        
        void initialize();
        void renderGui();
        void onPlayerTick();
        void toggleFly(bool state);
    };
}
