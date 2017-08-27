//
//  Levels.h
//  Marsk
//
//  Created by Albastroiu Radu on 8/26/17.
//
//

#pragma once
#include "Header.h"
#include "Levels/Level.h"

/*
 This class is a container for levels
 
 Level builder will fill the container
 Levels Manager will ask for level status
*/

class Levels
{
public:
    // destructor
    ~Levels();
    
    // add level
    void addLevel(cocos2d::Scene* aLevelScene);
    
    // give next level
    cocos2d::Scene* nextLevel();
    
private:
    
    deque<Level*> levelContainer;
};
