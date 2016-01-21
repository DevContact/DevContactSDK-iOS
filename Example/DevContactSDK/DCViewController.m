//
//  DCViewController.m
//  DevContactSDK
//
//  Created by Haseeb Yousaf on 10/15/2015.
//  Copyright (c) 2015 Haseeb Yousaf. All rights reserved.
//

#import "DCViewController.h"
#import <DevContactSDK/DevContactSDK.h>

@interface DCViewController ()
- (IBAction)sectionsPressed:(id)sender;
- (IBAction)conversationPressed:(id)sender;
- (IBAction)faqPressed:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *btnfaq;
@property (weak, nonatomic) IBOutlet UIButton *btnSections;
@property (weak, nonatomic) IBOutlet UIButton *btnConv;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *ai;

@end

@implementation DCViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)sectionsPressed:(id)sender {
    [DevContact showSections:self];
}

- (IBAction)conversationPressed:(id)sender {
    _btnConv.enabled = NO;
    _btnSections.enabled = NO;
    _btnfaq.enabled = NO;
    [_ai startAnimating];
    
    dispatch_async(dispatch_get_main_queue(), ^{
        [DevContact showChatScreen:self onComplete:^{
            _btnConv.enabled = YES;
            _btnSections.enabled = YES;
            _btnfaq.enabled = YES;
            [_ai stopAnimating];
        }];
    });
    
}

- (IBAction)faqPressed:(id)sender {
}
@end
