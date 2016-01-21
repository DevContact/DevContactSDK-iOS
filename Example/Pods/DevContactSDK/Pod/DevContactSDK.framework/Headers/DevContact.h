//
//  DevContact.h
//  HelpSDK
//
//  Created by Umair Hassan Baig on 13/06/2014.
//  Copyright (c) 2014 Pentaloop. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum {
    PLHConversationScreen = 1,
    PLHSectionScreen = 2,
    PLHGoBack = 0
} PLHScreen;

@interface DevContact : NSObject


/*Registration*/

/**
 Registers the device to the DevContact Server.
 Call this method in didFinishLaunchingWithOptions in AppDelegate
 Example usage:
 @code
 [DevContact startWithAppID:@"APP_ID_HERE" appKey:@"YOUR_APPKEY_HERE"];
 @endcode
 @param appID
 Application ID generated on web admin.
 @param appKey
 Application key generated on web admin.
 */
+(void)startWithAppID:(NSString *)appID appKey:(NSString *)appKey;



/*Push Notifications*/

/**
 Enables Push Notifications.
 Call this method in didFinishLaunchingWithOptions at the end.
 Example usage:
 @code
 [DevContact enablePushNotifications:YES launchoptions:'App's launch options here'];
 @endcode
 @param enabled
 Enabled or not enabled. By default not enabled. You can skip this method if do not want to enable Push Notifications.
 @param launchOptions
 Application launch options.
 */
+(void)enablePushNotifications:(BOOL)enabled launchoptions:(NSDictionary *)launchOptions;



/**
 Registers APNS to the server.
 Call this method in application didRegisterForRemoteNotificationsWithDeviceToken: in AppDelegate if you
 want to handle push notifications manually.
 Example usage:
 @code
 [DevContact registerAPNSwithID:@"APNS_ID_HERE"];
 @endcode
 @param apnsID
 APNS id returned by the Apple Push Notification Server.
 */
+(void)registerAPNSwithID:(NSData *)apnsID __deprecated_msg("Automatic registration is enabled");



/*FAQs*/


/**
 Shows all the sections of FAQs.
 Example usage:
 @code
 [DevContact showSections:yourViewController];
 @endcode
 @param viewController
 UIViewController instance on which it will be presented modally.
 */
+(void)showSections:(UIViewController *)viewController;



/**
 Shows a single section of FAQs identified by sectionID.
 Example usage:
 @code
 [DevContact showFaqsForSectionWithID:@"1" withVC:yourViewController];
 @endcode
 @param sectionID
 SectionID of the section you want to show.
 @param viewController
 UIViewController instance on which it will be presented modally.
 */
+(void)showFaqsForSectionWithID:(NSString *)sectionID withVC:(UIViewController *)viewController;



/**
 Shows a single FAQ detail page identified by the faqID.
 Example usage:
 @code
 [DevContact showSingleFaqWithID:@"12" withVC:yourViewController];
 @endcode
 @param faqID
 FaqID of the FAQ you want to show.
 @param viewController
 UIViewController instance on which it will be presented modally.
 */
+(void)showSingleFaqWithID:(NSString *)faqID withVC:(UIViewController *)viewController;



/**
 Redirects user to the chat screen.
 Example usage:
 @code
 [DevContact showChatScreen:yourViewController onComplete:^{
 }];
 @endcode
 @param viewController
 UIViewController instance on which it will be presented modally.
 */
+(void)showChatScreen:(UIViewController *)viewController onComplete:(void(^)(void))onComplete;



/**
 Enables/Disables contact us button in all screens.
 By Defult Contact us is enabled in app.
 Example usage:
 @code
 [DevContact enableContactUs:NO];
 @endcode
 @param bool
 YES/NO
 */
+(void)enableContactUs:(BOOL)isEnable;



/**
 Guides the user weather he wants to show the conversation screen , Sections Screen or (go back)dismisses the DevContact sdk screen after he initiates the new conversation.
 By Default  go back Option is selected.
 Example usage:
 @code
 [DevContact setAfterConversationScreen:PLHConversationScreen];
 @endcode
 @param PLHScreen PLHConversationScreen,PLHSectionScreen,PLHGoBack

 */

+(void)setAfterConversationScreen:(PLHScreen)Screen;



/**
 Enables/Disables email option in start new conversation screen.
 By Default require email is disabled in app.
 Example usage:
 @code
 [DevContact setRequireEmail:YES];
 @endcode
 @param bool
 YES/NO
 */

+(void)setRequireEmail:(BOOL)isRequire;




/**
 Hides name,email from start new conversation screen.
 By Default name , email is shown on new conversation screen.
 Example usage:
 @code
 [DevContact hideNameAndEmail:YES];
 @endcode
 @param bool
 YES/NO
 */

+(void)hideNameAndEmail:(BOOL)isHidden;




/**
 Hides Name from start new conversation screen.
 By Default name is shown on new conversation screen.
 Example usage:
 @code
 [DevContact hideNameAndEmail:YES];
 @endcode
 @param bool
 YES/NO
 */

+(void)hideName:(BOOL)isHidden;




/**
 Hides Email from start new conversation screen.
 By Default Email is shown on new conversation screen.
 Example usage:
 @code
 [DevContact hideEmail:YES];
 @endcode
 @param bool
 YES/NO
 */
+(void)hideEmail:(BOOL)isHidden;




/**
Set conversationPrefillText prefills a new conversation with the supplied string. You can use this option to add crash logs to a new conversation and prompt the user to send those logs as a support ticket. You can also use this option to set context depending on where and when in the app showConversation is being launched from
 @code
 [DevContact setConversationPrefillText:@"Your Text"];
 @endcode
 @param NSString "Your Text"
 */
+(void)setConversationPrefillText:(NSString *)text;


+(void)showFaqs:(UIViewController *)viewController;

/**
 Sets font name applies to texts for sections list, FAQ list, search results.
 Example usage:
 @code
 [DevContact setFontName:@""Helvetica Neue];
 @endcode
 @param NSString "Font Name"
*/
+ (void)setFontName:(NSString*)fontName;

/**
 Sets bold font name applies to FAQ section headers on support screen
 Example usage:
 @code
 [DevContact setFontNameBold:@""Helvetica Neue];
 @endcode
 @param NSString "Font Name"
 */
+ (void)setFontNameBold:(NSString*)fontName;

/**
 Applies to regions with no UI elements or content. E.g. spaces around table views, FAQ section headers.
 Example usage:
 @code
 [DevContact setBackgroundColor:[UIColor blueColor]];
 @endcode
 @param UIColor "background color"
 */
+ (void)setBackgroundColor:(UIColor*)color;

/**
 Background color for content - table cells, single FAQ screen, conversation screen.
 Example usage:
 @code
 [DevContact setContentBackgroundColor:[UIColor blueColor]];
 @endcode
 @param UIColor "content background color"
 */
+ (void)setContentBackgroundColor:(UIColor*)color;

/**
 Separator color for table views - search results, section & faq lists.
 Example usage:
 @code
 [DevContact setSeparatorLineColor:[UIColor blueColor]];
 @endcode
 @param UIColor "separator line color"
 */
+ (void)setSeparatorLineColor:(UIColor*)color;

/**
Applies to text color for table cells, search results and new conversation screen text.
 Example usage:
 @code
 [DevContact setTextColor:[UIColor blueColor]];
 @endcode
 @param UIColor "text color"
 */
+ (void)setTextColor:(UIColor*)color;

/**
 Applies to “contact us” button below search results.
 Example usage:
 @code
 [DevContact setContactUsButtonColor:[UIColor blueColor]];
 @endcode
 @param UIColor "text color"
 */
+ (void)setContactUsButtonColor:(UIColor*)color;

/**
Applies to tableview cells. Sets the cell selection color.
 Example usage:
 @code
 [DevContact setCellSelectionColor:[UIColor blueColor]];
 @endcode
 @param UIColor "cell selection color"
 */
+ (void)setCellSelectionColor:(UIColor*)color;

+ (void)updateInstallationInfoWithCountry:(NSString*)country city:(NSString*)city onSuccess:(void(^)())callback;
+ (void)clearSavedData;
@end
