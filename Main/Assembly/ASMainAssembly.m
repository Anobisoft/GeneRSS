//
//  ASMainAssembly.m
//  GeneRSS
//
//  Created by Stanislav Pletnev on 14/02/2017.
//  Copyright © 2017 Anobisoft. All rights reserved.
//

#import "ASMainAssembly.h"

#import "ASMainViewController.h"
#import "ASMainInteractor.h"
#import "ASMainPresenter.h"
#import "ASMainRouter.h"

#import <ViperMcFlurry/ViperMcFlurry.h>

@implementation ASMainAssembly

- (ASMainViewController *)viewMain {
    return [TyphoonDefinition withClass:[ASMainViewController class]
                          configuration:^(TyphoonDefinition *definition) {
                              [definition injectProperty:@selector(output)
                                                    with:[self presenterMain]];
                              [definition injectProperty:@selector(moduleInput)
                                                    with:[self presenterMain]];
                          }];
}

- (ASMainInteractor *)interactorMain {
    return [TyphoonDefinition withClass:[ASMainInteractor class]
                          configuration:^(TyphoonDefinition *definition) {
                              [definition injectProperty:@selector(output)
                                                    with:[self presenterMain]];
                          }];
}

- (ASMainPresenter *)presenterMain{
    return [TyphoonDefinition withClass:[ASMainPresenter class]
                          configuration:^(TyphoonDefinition *definition) {
                              [definition injectProperty:@selector(view)
                                                    with:[self viewMain]];
                              [definition injectProperty:@selector(interactor)
                                                    with:[self interactorMain]];
                              [definition injectProperty:@selector(router)
                                                    with:[self routerMain]];
                          }];
}

- (ASMainRouter *)routerMain{
    return [TyphoonDefinition withClass:[ASMainRouter class]
                          configuration:^(TyphoonDefinition *definition) {
                              [definition injectProperty:@selector(transitionHandler)
                                                    with:[self viewMain]];
                          }];
}

@end
