//
//  Menu.h
//  Space Cannon
//
//  Created by mohit  on 27/06/14.
//  Copyright (c) 2014 mohit . All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface Menu : SKNode

@property (nonatomic) int score;
@property (nonatomic) int topScore;
@property (nonatomic) BOOL touchable;
@property (nonatomic) BOOL musicPlaying;
-(void)hide;
-(void)show;

@end
