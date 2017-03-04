//
//  ASMainViewController.m
//  GeneRSS
//
//  Created by Stanislav Pletnev on 14/02/2017.
//  Copyright © 2017 Anobisoft. All rights reserved.
//

#import "ASMainViewController.h"

#import "ASMainViewOutput.h"

@implementation ASMainViewController

#pragma mark - Методы жизненного цикла

- (void)viewDidLoad {
	[super viewDidLoad];

	[self.output didTriggerViewReadyEvent];
}

#pragma mark - Методы ASMainViewInput

- (void)setupInitialState {
	// В этом методе происходит настройка параметров view, зависящих от ее жизненого цикла (создание элементов, анимации и пр.)
}

@end
