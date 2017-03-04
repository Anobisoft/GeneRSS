//
//  ASMainViewController.h
//  GeneRSS
//
//  Created by Stanislav Pletnev on 14/02/2017.
//  Copyright © 2017 Anobisoft. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ASMainViewInput.h"

@protocol ASMainViewOutput;

@interface ASMainViewController : UIViewController <ASMainViewInput>

@property (nonatomic, strong) id<ASMainViewOutput> output;

@end
