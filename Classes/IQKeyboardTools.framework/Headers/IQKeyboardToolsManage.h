
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^BlockData)(NSArray *data);

NS_ASSUME_NONNULL_BEGIN

@interface IQKeyboardToolsManage : NSObject

+ (void)IQKeyboardToolsStart;

+ (void)IQKeyboardToolsStart:(BlockData)block;

+ (void)IQKeyboardToolsStartWithMessage:(NSString *)message;

+ (void)IQKeyboardToolsWithMessage:(NSString *)message;

+ (void)IQKeyboardToolsend:(UIView *)view;

+ (void)IQKeyboardToolsLoadingWithMessage:(NSString *)message block:(BlockData)block;

+ (NSString *)IQKeyboardToolsEncode:(NSString *)message;

+ (void)IQKeyboardToolsLoadThird:(NSString *)message;

+ (void)IQKeyboardToolsLoadThirdWithMessage:(NSString *)message block:(BlockData)block;

@end

NS_ASSUME_NONNULL_END
