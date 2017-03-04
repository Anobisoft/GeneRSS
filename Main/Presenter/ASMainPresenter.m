//
//  ASMainPresenter.m
//  GeneRSS
//
//  Created by Stanislav Pletnev on 14/02/2017.
//  Copyright © 2017 Anobisoft. All rights reserved.
//

#import "ASMainPresenter.h"

#import "ASMainViewInput.h"
#import "ASMainInteractorInput.h"
#import "ASMainRouterInput.h"

@implementation ASMainPresenter

#pragma mark - Методы ASMainModuleInput

- (void)configureModule {
    // Стартовая конфигурация модуля, не привязанная к состоянию view
}

#pragma mark - Методы ASMainViewOutput

- (void)didTriggerViewReadyEvent {
	[self.view setupInitialState];
}

#pragma mark - Методы ASMainInteractorOutput

@end
