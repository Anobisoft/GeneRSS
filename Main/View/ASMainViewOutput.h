//
//  ASMainViewOutput.h
//  GeneRSS
//
//  Created by Stanislav Pletnev on 14/02/2017.
//  Copyright © 2017 Anobisoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ASMainViewOutput <NSObject>

/**
 @author Stanislav Pletnev

 Метод сообщает презентеру о том, что view готова к работе
 */
- (void)didTriggerViewReadyEvent;

@end
