//
//  InputControlProjectiles.h
//  Marsk
//
//  Created by Albastroiu Radu on 7/10/17.
//
//

#pragma once
#include "Header.h"
#include "InputControls/InputControl.h"
#include "Entities/Hero.h"


class InputControlProjectiles : public InputControl
{
    
public:
    
    // constructor
    InputControlProjectiles(cocos2d::Scene* aScene, Hero* aEntity);
    
    // destructor
    ~InputControlProjectiles();
    
    virtual void update(float delta) override;
    
    void touchBegan(const cocos2d::Touch* touch, cocos2d::Event* event);
    void touchEnded(const cocos2d::Touch* touch, cocos2d::Event* event);
    
private:
    
    bool fireProjectile;
    
    Hero* targetEntity;
    cocos2d::Scene* targetScene;
    
};
