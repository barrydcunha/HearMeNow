//
//  ViewController.h
//  HearMeNow
//
//  Created by Barry DCunha on 27/10/14.
//  Copyright (c) 2014 OctoberApps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<AVAudioPlayerDelegate, AVAudioRecorderDelegate>


@property (weak, nonatomic) IBOutlet UIButton *recordButton;
@property (weak, nonatomic) IBOutlet UIButton *playButton;

- (IBAction)recordPressed:(id)sender;
- (IBAction)playPressed:(id)sender;

@end
