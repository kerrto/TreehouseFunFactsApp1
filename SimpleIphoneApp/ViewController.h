//
//  ViewController.h
//  SimpleIphoneApp
//
//  Created by Kerry Toonen on 2015-11-07.
//  Copyright © 2015 Kerrto. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;
@class ColorWheel;

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;

@property (strong, nonatomic) FactBook *factBook;

@property (strong, nonatomic) ColorWheel *colorWheel;

@property (weak, nonatomic) IBOutlet UIButton *funFactButton;

@end

