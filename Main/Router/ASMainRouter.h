//
//  ASMainRouter.h
//  GeneRSS
//
//  Created by Stanislav Pletnev on 14/02/2017.
//  Copyright © 2017 Anobisoft. All rights reserved.
//

#import "ASMainRouterInput.h"

@protocol RamblerViperModuleTransitionHandlerProtocol;

@interface ASMainRouter : NSObject <ASMainRouterInput>

@property (nonatomic, weak) id<RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end
