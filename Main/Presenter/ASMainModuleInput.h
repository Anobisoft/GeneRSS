//
//  ASMainModuleInput.h
//  GeneRSS
//
//  Created by Stanislav Pletnev on 14/02/2017.
//  Copyright © 2017 Anobisoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ViperMcFlurry/ViperMcFlurry.h>

@protocol ASMainModuleInput <RamblerViperModuleInput>

/**
 @author Stanislav Pletnev

 Метод инициирует стартовую конфигурацию текущего модуля
 */
- (void)configureModule;

@end
