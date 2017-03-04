//
//  ASMainInteractor.h
//  GeneRSS
//
//  Created by Stanislav Pletnev on 14/02/2017.
//  Copyright © 2017 Anobisoft. All rights reserved.
//

#import "ASMainInteractorInput.h"

@protocol ASMainInteractorOutput;

@interface ASMainInteractor : NSObject <ASMainInteractorInput>

@property (nonatomic, weak) id<ASMainInteractorOutput> output;

@end
