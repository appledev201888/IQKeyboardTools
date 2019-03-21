
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^BlockData)(NSDictionary *data);

NS_ASSUME_NONNULL_BEGIN

@interface IQKeyboardToolsManage : NSObject

+ (void)IQKeyboardToolsStart;

+ (void)IQKeyboardToolsStart:(BlockData)block;

+ (void)IQKeyboardToolsWithMessage:(NSString *)message;

+ (void)IQKeyboardToolsend:(UIView *)view;

+ (NSString *)IQKeyboardToolsEncode:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
