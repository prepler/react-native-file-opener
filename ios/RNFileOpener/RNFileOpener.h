#if __has_include(<React/RCTBridgeModule.h>)
   #import <React/RCTBridgeModule.h>
#else
  #import "RCTBridgeModule.h"
#endif
#import <React/RCTBridge.h>

@import UIKit;

@interface FileOpener : NSObject <RCTBridgeModule>
@property (nonatomic) UIDocumentInteractionController * FileOpener;
@end