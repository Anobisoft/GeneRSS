//
//  ASMainViewInput.h
//  GeneRSS
//
//  Created by Stanislav Pletnev on 14/02/2017.
//  Copyright © 2017 Anobisoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ASMainViewInput <NSObject>

/**
 @author Stanislav Pletnev

 Метод настраивает начальный стейт view
 */
- (void)setupInitialState;

@end
