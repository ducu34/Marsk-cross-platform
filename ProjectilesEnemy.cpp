//
//  ProjectilesEnemy.cpp
//  Marsk
//
//  Created by Albastroiu Radu on 7/7/17.
//
//

#pragma once
#include <stdio.h>
#include "Projectile.h"
#include "Projectiles.h"
#include "ProjectilesEnemy.h"
#include "cocos2d.h"
#include <algorithm>
#include <vector>
#include <utility>
#include <memory>
USING_NS_CC;
using namespace std;

// add new enemy projectile
void ProjectilesEnemy::addProjectile(Projectile* aProjectile)
{
    unique_ptr<Projectile> ptr = make_unique<Projectile>(*aProjectile);
    
    projectilesContainer.push_back(ptr);
}
