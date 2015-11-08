//
//  FactBook.h
//  SimpleIphoneApp
//
//  Created by Kerry Toonen on 2015-11-08.
//  Copyright © 2015 Kerrto. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;
@end
