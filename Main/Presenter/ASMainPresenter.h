//
//  ASMainPresenter.h
//  GeneRSS
//
//  Created by Stanislav Pletnev on 14/02/2017.
//  Copyright © 2017 Anobisoft. All rights reserved.
//

#import "ASMainViewOutput.h"
#import "ASMainInteractorOutput.h"
#import "ASMainModuleInput.h"

@protocol ASMainViewInput;
@protocol ASMainInteractorInput;
@protocol ASMainRouterInput;

@interface ASMainPresenter : NSObject <ASMainModuleInput, ASMainViewOutput, ASMainInteractorOutput>

@property (nonatomic, weak) id<ASMainViewInput> view;
@property (nonatomic, strong) id<ASMainInteractorInput> interactor;
@property (nonatomic, strong) id<ASMainRouterInput> router;

@end
