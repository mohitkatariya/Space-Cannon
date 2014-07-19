//
//  Ball.h
//  Space Cannon
//
//  Created by mohit  on 28/06/14.
//  Copyright (c) 2014 mohit . All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface Ball : SKSpriteNode

@property (nonatomic) SKEmitterNode *trail;
-(void)updateTrail;
@property (nonatomic) int bounces;


@end
