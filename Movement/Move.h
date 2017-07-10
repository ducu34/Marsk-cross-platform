//
//  Move.h
//  Marsk
//
//  Created by Albastroiu Radu on 7/9/17.
//
//

#pragma once
#include "cocos2d.h"
#include "Entities/Entity.h"
#include "Movement/Movement.h"

USING_NS_CC;
using namespace std;

class Move
{
public:
    Move(bool aDirection, float aDelta);
    bool MoveLeft();
    bool MoveRight();
    float getDelta();
private:
    bool direction;
    float delta;
};