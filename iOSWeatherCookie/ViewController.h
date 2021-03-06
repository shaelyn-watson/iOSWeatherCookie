//
//  ViewController.h
//  iOSWeatherCookie
//
//  Created by Shaelyn Watson on 1/28/16.
//  Copyright © 2016 Shaelyn Watson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) NSMutableDictionary *weatherForecasts;
@property (weak, nonatomic) IBOutlet UILabel *lblTemperature;
@property (weak, nonatomic) IBOutlet UILabel *lblHumidity;
@property (weak, nonatomic) IBOutlet UILabel *lblPrecipProb;
@property (weak, nonatomic) IBOutlet UIImageView *imgWeatherIcon;
@property (weak, nonatomic) IBOutlet UILabel *lblSummary;

@property(strong, nonatomic) NSNumber *currentTemperature;
@property(strong, nonatomic) NSNumber *currentHumidity;
@property(strong, nonatomic) NSNumber *currentPrecipProp;
@property(strong, nonatomic) NSString *currentSummary;
@property(strong, nonatomic) NSString *currentWeatherIcon;


@end

