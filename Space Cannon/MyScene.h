//
//  MyScene.h
//  Space Cannon
//

//  Copyright (c) 2014 ___FULLUSERNAME___. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface MyScene : SKScene <SKPhysicsContactDelegate>

@property (nonatomic) int ammo;
@property (nonatomic) int score;
@property (nonatomic) int pointValue;
@property (nonatomic) BOOL multiMode;
@property (nonatomic) BOOL gamePaused;

@end
