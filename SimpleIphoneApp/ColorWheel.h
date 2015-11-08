//
//  ColorWheel.h
//  SimpleIphoneApp
//
//  Created by Kerry Toonen on 2015-11-08.
//  Copyright © 2015 Kerrto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

-(UIColor *)randomColor;

@end
