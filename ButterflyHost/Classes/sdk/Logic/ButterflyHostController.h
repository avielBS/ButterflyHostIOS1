//
//  ButterflyHostController.h
//  butterfly
//
//  Created by Aviel on 11/17/20.
//  Copyright © 2020 Aviel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ButterflyHostController: NSObject

-(void) grabReportInViewController:(UIViewController*) viewController usingKey:(NSString*)key;

+(ButterflyHostController*) shared;

@end


