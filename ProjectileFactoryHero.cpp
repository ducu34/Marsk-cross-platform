//
//  ProjectileFactoryHero.cpp
//  Marsk
//
//  Created by Albastroiu Radu on 7/7/17.
//
//

#include <stdio.h>
#include "ProjectileHeroSimple.h"
#include "ProjectileFactoryHero.h"

Projectile* ProjectileFactoryHero::addProjectileSimple(cocos2d::Scene* aScene, Sprite* aHeroSpaceShip, float aSpeed, float aScale)
{
    return new ProjectileHeroSimple(aScene, aHeroSpaceShip, aSpeed, aScale);
}
