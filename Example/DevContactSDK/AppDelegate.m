//
//  DCAppDelegate.m
//  DevContactSDK
//
//

#import "AppDelegate.h"

#import <DevContactSDK/DevContactSDK.h>
#import <DevContactSDK/DCDesignConfig.h>


@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Override point for customization after application launch.
    
#warning Clears saved data, uncomment if needed
    //[DevContact clearSavedData];

    
    // Initialize dev contact
#error Set your AppID and App Key, and then comment-out this line
    [DevContact startWithAppID:@"<YOUR-APP-ID>" appKey:@"<YOUR-APP-KEY>"];
    
    // Sum custom parameters sent
    [DevContact setCustomParamWithKey:@"Cell Service" value:@"Verizon"];
    [DevContact setCustomParamWithKey:@"Device allocation" value:@"Alex" description:@"Allocation to Alex for testing" showOnMainScreen:NO];
    [DevContact setCustomParamWithKey:@"Developer" value:@"Pentaloop"];
    
    // Enable Dev Contact to manage Push Notifications.
    [DevContact showChatScreenForAppLaunchedWithPushNotifications:launchOptions];
    
    // Appearance
//    [DevContact setContentBackgroundColor:[UIColor colorWithRed:0 green:0 blue:0.5 alpha:0.2]];
//    [DevContact setBackgroundColor:[UIColor darkGrayColor]];
//    [DevContact setSeparatorLineColor:[UIColor greenColor]];
//    [DevContact setTextColor:[UIColor yellowColor]];
//    [DevContact setContactUsButtonColor:[UIColor redColor]];
//    [DevContact setCellSelectionColor:[UIColor redColor]];
//    [DCDesignConfig setNavBarTitleFontName:@"Zapfino"];
//    [DCDesignConfig setNavBarTitleFontSize:30];
//    [DCDesignConfig setNavBarTitleColor:[UIColor redColor]];
//    [DCDesignConfig setNavBArButtonTextColor:[UIColor blueColor]];
//    [DCDesignConfig setNavBarBGColor:[UIColor greenColor]];
//    [DCDesignConfig setSearchBarColor:[UIColor whiteColor]];
    return YES;
}



- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end
