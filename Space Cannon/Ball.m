//
//  Ball.m
//  Space Cannon
//
//  Created by mohit  on 28/06/14.
//  Copyright (c) 2014 mohit . All rights reserved.
//

#import "Ball.h"

@implementation Ball

-(void)updateTrail
{
    if (self.trail) {
        self.trail.position = self.position;
    }
}

-(void)removeFromParent
{
    if (self.trail) {
        self.trail.particleBirthRate = 0.0;
        SKAction *removeTrail = [SKAction sequence:@[[SKAction waitForDuration:self.trail.particleLifetime + self.trail.particleLifetimeRange],[SKAction removeFromParent]]];
        [self runAction:removeTrail];
    }
    [super removeFromParent];
}

@end
