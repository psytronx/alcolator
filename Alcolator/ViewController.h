//
//  ViewController.h
//  Alcolator
//
//  Created by psytronx on 7/15/15.
//  Copyright (c) 2015 Logical Dimension. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *beerPercentTextField;
@property (weak, nonatomic) IBOutlet UISlider *beerCountSlider;
@property (weak, nonatomic) IBOutlet UILabel *resultLabel;


@end

