//
//  InputControl.h
//  Marsk
//
//  Created by Albastroiu Radu on 7/10/17.
//
//

#pragma once
#include "cocos2d.h"
#include "InputControls/InputControls.h"
#include "Entities/Entity.h"

USING_NS_CC;
using namespace std;

// abstract class
class InputControl
{
public:
    // constructor
    InputControl(cocos2d::Scene* aScene, Entity* aEntity);
    
    // destructor
    virtual ~InputControl();
    
    // pure virtual method
    virtual void addInputVisualButtons();
    
    virtual cocos2d::EventListener* getListener();
    
    virtual void update(float delta) = 0;
    
protected:
    
    Entity* currentEntity;
    cocos2d::Scene* currentScene;
    
};
